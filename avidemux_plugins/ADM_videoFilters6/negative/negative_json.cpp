// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "negative.h"
bool  negative_jserialize(const char *file, const negative *key){
admJson json;
json.addBool("invertY",key->invertY);
json.addBool("invertU",key->invertU);
json.addBool("invertV",key->invertV);
return json.dumpToFile(file);
};
bool  negative_jdeserialize(const char *file, const ADM_paramList *tmpl,negative *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
