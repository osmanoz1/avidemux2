/***************************************************************************
            \file  ADM_aomDec.cpp
            \brief AV1 decoder using libaom

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "ADM_default.h"
#include "ADM_aomDec.h"
#include "aom/aom_decoder.h"
#include "aom/aomdx.h"
#define AX ((aom_codec_ctx_t *)cookie)
/**
    \fn ctor
*/
decoderAom::decoderAom(uint32_t w, uint32_t h, uint32_t fcc, uint32_t extraDataLen, uint8_t *extraData, uint32_t bpp)
    : decoders(w,h,fcc,extraDataLen,extraData,bpp)
{
    alive=false;
    cookie=NULL;
    aom_codec_dec_cfg_t cfg;
    aom_codec_flags_t flags=0;
    aom_codec_ctx_t *instance=new aom_codec_ctx_t;
    if(fcc!=MKFCC('a','v','0','1'))
    {
        ADM_warning("Unsupported FCC\n");
        delete instance;
        return;
    }

    memset(instance,0,sizeof(*instance));
    memset(&cfg,0,sizeof(cfg));
    cfg.threads=2; // should be configurable
    cfg.w=w;
    cfg.h=h;
    cfg.allow_lowbitdepth=1;
    aom_codec_err_t err=aom_codec_dec_init(instance, &aom_codec_av1_dx_algo, &cfg, flags);
    if(err!=AOM_CODEC_OK)
    {
        delete instance;
        ADM_warning("libaom decoder init failed with error %d: %s.\n",(int)err,aom_codec_err_to_string(err));
    }else
    {
        alive=true;
        cookie=(void *)instance;
        ADM_info("libaom decoder init succeeded.\n");
    }
}
/**
    \fn dtor
*/
decoderAom::~decoderAom()
{
    ADM_info("Destroying libaom decoder.\n");
    if(cookie)
    {
        aom_codec_ctx_t *a=AX;
        aom_codec_destroy(a);
        delete a;
        cookie=NULL;
    }
}
/**
    \fn uncompress
*/
bool decoderAom::uncompress(ADMCompressedImage *in, ADMImage *out)
{
    aom_codec_err_t err=aom_codec_decode(AX, in->data, in->dataLength, NULL);
    if(err!=AOM_CODEC_OK)
    {
        ADM_warning("Error %d (%s) decoding AV1 frame.\n",(int)err,aom_codec_err_to_string(err));
        return false;
    }
    aom_image_t *img;
    const void *iter = NULL;
    img = aom_codec_get_frame(AX, &iter);
    if(img)
    {
        if (img->fmt != AOM_IMG_FMT_I420)
        {
            ADM_warning("Wrong colorspace, expected %d, got %d\n",AOM_IMG_FMT_I420,(int)img->fmt);
            return false;
        }
        ADMImageRef *r=out->castToRef();
        if(r)
        {
            r->_planes[0]=img->planes[0];
            r->_planes[1]=img->planes[2];
            r->_planes[2]=img->planes[1];
            r->_planeStride[0]=img->stride[0];
            r->_planeStride[1]=img->stride[2];
            r->_planeStride[2]=img->stride[1];
            r->_colorspace=ADM_COLOR_YV12;
            r->Pts=in->demuxerPts;
            r->flags=in->flags;
            return true;
        }
        ADM_warning("AV1 decoder accepts ref image only.\n");
    }
    return false;
}
// EOF
