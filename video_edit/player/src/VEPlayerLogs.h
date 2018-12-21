#ifndef __VE_LOGS_H_
#define __VE_LOGS_H_
#include "VELog.h"

#define  TAGVEPLAYER2      "[VEPLAYER]"
#define  TAGVEPRODUCER2    "[VEPRODUCER]"

#define  PREVIEW_LOG_TRACE(...)  VE_LOG_TAG_DEBUG(TAGVEPLAYER2,__VA_ARGS__)
#define  PREVIEW_LOG_DEBUG(...)  VE_LOG_TAG_DEBUG(TAGVEPLAYER2,__VA_ARGS__)
#define  PREVIEW_LOG_INFO(...)   VE_LOG_TAG_INFO(TAGVEPLAYER2,__VA_ARGS__)
#define  PREVIEW_LOG_WARN(...)   VE_LOG_TAG_WARN(TAGVEPLAYER2,__VA_ARGS__)
#define  PREVIEW_LOG_ERROR(...)  VE_LOG_TAG_ERROR(TAGVEPLAYER2,__VA_ARGS__)
#define  PREVIEW_LOG_ALARM(...)  VE_LOG_TAG_ERROR(TAGVEPLAYER2,__VA_ARGS__)
#define  PREVIEW_LOG_FATAL(...)  VE_LOG_TAG_ERROR(TAGVEPLAYER2,__VA_ARGS__)

#define  PRODUCER_LOG_TRACE(...)  VE_LOG_TAG_DEBUG(TAGVEPRODUCER2,__VA_ARGS__)
#define  PRODUCER_LOG_DEBUG(...)  VE_LOG_TAG_DEBUG(TAGVEPRODUCER2,__VA_ARGS__)
#define  PRODUCER_LOG_INFO(...)   VE_LOG_TAG_INFO(TAGVEPRODUCER2,__VA_ARGS__)
#define  PRODUCER_LOG_WARN(...)   VE_LOG_TAG_WARN(TAGVEPRODUCER2,__VA_ARGS__)
#define  PRODUCER_LOG_ERROR(...)  VE_LOG_TAG_ERROR(TAGVEPRODUCER2,__VA_ARGS__)
#define  PRODUCER_LOG_ALARM(...)  VE_LOG_TAG_ERROR(TAGVEPRODUCER2,__VA_ARGS__)
#define  PRODUCER_LOG_FATAL(...)  VE_LOG_TAG_ERROR(TAGVEPRODUCER2,__VA_ARGS__)


#define  JPLAYER_LOG_TRACE(...)
#define  JPLAYER_LOG_DEBUG(...)
#define  JPLAYER_LOG_INFO(...)
#define  JPLAYER_LOG_WARN(...)
#define  JPLAYER_LOG_ERROR(...)
#define  JPLAYER_LOG_ALARM(...)
#define  JPLAYER_LOG_FATAL(...)


#endif

