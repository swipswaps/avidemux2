include(mx_plugin)
SET(ADM_raw_SRCS 
	muxerRaw.cpp
	muxerRawConfig.cpp
	muxerRawPlugin.cpp
)

ADD_MUXER(ADM_mx_raw ${ADM_raw_SRCS})

INIT_MUXER(ADM_mx_raw)
INSTALL_MUXER(ADM_mx_raw)

