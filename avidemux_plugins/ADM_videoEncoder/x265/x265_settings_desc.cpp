// automatically generated by admSerialization.py, do not edit!
extern const ADM_paramList x265_settings_param[]={
 {"useAdvancedConfiguration",offsetof(x265_settings,useAdvancedConfiguration),"bool",ADM_param_bool},
 {"general.params",offsetof(x265_settings,general.params),"COMPRES_PARAMS",ADM_param_video_encode},
 {"general.poolThreads",offsetof(x265_settings,general.poolThreads),"uint32_t",ADM_param_uint32_t},
 {"general.frameThreads",offsetof(x265_settings,general.frameThreads),"uint32_t",ADM_param_uint32_t},
 {"general.output_bit_depth",offsetof(x265_settings,general.output_bit_depth),"uint32_t",ADM_param_uint32_t},
 {"general.preset",offsetof(x265_settings,general.preset),"std::string",ADM_param_stdstring},
 {"general.tuning",offsetof(x265_settings,general.tuning),"std::string",ADM_param_stdstring},
 {"general.profile",offsetof(x265_settings,general.profile),"std::string",ADM_param_stdstring},
 {"level",offsetof(x265_settings,level),"int32_t",ADM_param_int32_t},
 {"vui.sar_idc",offsetof(x265_settings,vui.sar_idc),"uint32_t",ADM_param_uint32_t},
 {"vui.sar_height",offsetof(x265_settings,vui.sar_height),"uint32_t",ADM_param_uint32_t},
 {"vui.sar_width",offsetof(x265_settings,vui.sar_width),"uint32_t",ADM_param_uint32_t},
 {"vui.color_primaries",offsetof(x265_settings,vui.color_primaries),"uint32_t",ADM_param_uint32_t},
 {"vui.transfer_characteristics",offsetof(x265_settings,vui.transfer_characteristics),"uint32_t",ADM_param_uint32_t},
 {"vui.matrix_coeffs",offsetof(x265_settings,vui.matrix_coeffs),"uint32_t",ADM_param_uint32_t},
 {"MaxRefFrames",offsetof(x265_settings,MaxRefFrames),"uint32_t",ADM_param_uint32_t},
 {"MinIdr",offsetof(x265_settings,MinIdr),"uint32_t",ADM_param_uint32_t},
 {"MaxIdr",offsetof(x265_settings,MaxIdr),"uint32_t",ADM_param_uint32_t},
 {"i_scenecut_threshold",offsetof(x265_settings,i_scenecut_threshold),"uint32_t",ADM_param_uint32_t},
 {"MaxBFrame",offsetof(x265_settings,MaxBFrame),"uint32_t",ADM_param_uint32_t},
 {"i_bframe_adaptive",offsetof(x265_settings,i_bframe_adaptive),"uint32_t",ADM_param_uint32_t},
 {"i_bframe_bias",offsetof(x265_settings,i_bframe_bias),"uint32_t",ADM_param_uint32_t},
 {"i_bframe_pyramid",offsetof(x265_settings,i_bframe_pyramid),"uint32_t",ADM_param_uint32_t},
 {"b_deblocking_filter",offsetof(x265_settings,b_deblocking_filter),"bool",ADM_param_bool},
 {"b_open_gop",offsetof(x265_settings,b_open_gop),"bool",ADM_param_bool},
 {"interlaced_mode",offsetof(x265_settings,interlaced_mode),"uint32_t",ADM_param_uint32_t},
 {"constrained_intra",offsetof(x265_settings,constrained_intra),"bool",ADM_param_bool},
 {"b_intra",offsetof(x265_settings,b_intra),"bool",ADM_param_bool},
 {"lookahead",offsetof(x265_settings,lookahead),"uint32_t",ADM_param_uint32_t},
 {"weighted_pred",offsetof(x265_settings,weighted_pred),"uint32_t",ADM_param_uint32_t},
 {"weighted_bipred",offsetof(x265_settings,weighted_bipred),"bool",ADM_param_bool},
 {"rect_inter",offsetof(x265_settings,rect_inter),"bool",ADM_param_bool},
 {"amp_inter",offsetof(x265_settings,amp_inter),"bool",ADM_param_bool},
 {"limit_modes",offsetof(x265_settings,limit_modes),"bool",ADM_param_bool},
 {"cb_chroma_offset",offsetof(x265_settings,cb_chroma_offset),"uint32_t",ADM_param_uint32_t},
 {"cr_chroma_offset",offsetof(x265_settings,cr_chroma_offset),"uint32_t",ADM_param_uint32_t},
 {"me_method",offsetof(x265_settings,me_method),"uint32_t",ADM_param_uint32_t},
 {"me_range",offsetof(x265_settings,me_range),"uint32_t",ADM_param_uint32_t},
 {"subpel_refine",offsetof(x265_settings,subpel_refine),"uint32_t",ADM_param_uint32_t},
 {"limit_refs",offsetof(x265_settings,limit_refs),"uint32_t",ADM_param_uint32_t},
 {"rd_level",offsetof(x265_settings,rd_level),"uint32_t",ADM_param_uint32_t},
 {"psy_rd",offsetof(x265_settings,psy_rd),"double",ADM_param_double},
 {"rdoq_level",offsetof(x265_settings,rdoq_level),"uint32_t",ADM_param_uint32_t},
 {"psy_rdoq",offsetof(x265_settings,psy_rdoq),"double",ADM_param_double},
 {"fast_pskip",offsetof(x265_settings,fast_pskip),"bool",ADM_param_bool},
 {"dct_decimate",offsetof(x265_settings,dct_decimate),"bool",ADM_param_bool},
 {"noise_reduction_intra",offsetof(x265_settings,noise_reduction_intra),"uint32_t",ADM_param_uint32_t},
 {"noise_reduction_inter",offsetof(x265_settings,noise_reduction_inter),"uint32_t",ADM_param_uint32_t},
 {"strong_intra_smoothing",offsetof(x265_settings,strong_intra_smoothing),"bool",ADM_param_bool},
 {"ratecontrol.rc_method",offsetof(x265_settings,ratecontrol.rc_method),"uint32_t",ADM_param_uint32_t},
 {"ratecontrol.qp_constant",offsetof(x265_settings,ratecontrol.qp_constant),"uint32_t",ADM_param_uint32_t},
 {"ratecontrol.qp_step",offsetof(x265_settings,ratecontrol.qp_step),"uint32_t",ADM_param_uint32_t},
 {"ratecontrol.bitrate",offsetof(x265_settings,ratecontrol.bitrate),"uint32_t",ADM_param_uint32_t},
 {"ratecontrol.vbv_max_bitrate",offsetof(x265_settings,ratecontrol.vbv_max_bitrate),"uint32_t",ADM_param_uint32_t},
 {"ratecontrol.vbv_buffer_size",offsetof(x265_settings,ratecontrol.vbv_buffer_size),"uint32_t",ADM_param_uint32_t},
 {"ratecontrol.vbv_buffer_init",offsetof(x265_settings,ratecontrol.vbv_buffer_init),"uint32_t",ADM_param_uint32_t},
 {"ratecontrol.ip_factor",offsetof(x265_settings,ratecontrol.ip_factor),"double",ADM_param_double},
 {"ratecontrol.pb_factor",offsetof(x265_settings,ratecontrol.pb_factor),"double",ADM_param_double},
 {"ratecontrol.aq_mode",offsetof(x265_settings,ratecontrol.aq_mode),"uint32_t",ADM_param_uint32_t},
 {"ratecontrol.aq_strength",offsetof(x265_settings,ratecontrol.aq_strength),"double",ADM_param_double},
 {"ratecontrol.cu_tree",offsetof(x265_settings,ratecontrol.cu_tree),"bool",ADM_param_bool},
 {"ratecontrol.strict_cbr",offsetof(x265_settings,ratecontrol.strict_cbr),"bool",ADM_param_bool},
{NULL,0,NULL}
};
