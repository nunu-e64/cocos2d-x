#ifndef __manualanysdkbindings_h__
#define __manualanysdkbindings_h__

#include "jsapi.h"
#include "jsfriendapi.h"

void register_all_anysdk_manual(JSContext* cx, JS::HandleObject obj);

void pure_all_anysdk_Listener();

#endif

