// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "ffnvenc.h"
bool  ffnvenc_encoder_jserialize(const char *file, const ffnvenc_encoder *key){
admJson json;
json.addUint32("preset",key->preset);
json.addUint32("profile",key->profile);
json.addUint32("gopsize",key->gopsize);
json.addUint32("bframes",key->bframes);
json.addUint32("bitrate",key->bitrate);
json.addUint32("max_bitrate",key->max_bitrate);
return json.dumpToFile(file);
};
bool  ffnvenc_encoder_jdeserialize(const char *file, const ADM_paramList *tmpl,ffnvenc_encoder *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
