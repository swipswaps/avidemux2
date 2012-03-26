MACRO(AS_NEEDED name)
	IF(NOT APPLE)
        	TARGET_LINK_LIBRARIES( ${name} "-Wl,--as-needed")
	ENDIF(NOT APPLE)
ENDMACRO(AS_NEEDED name)

MACRO(ADM_ADD_SHARED_LIBRARY name )
        ADD_LIBRARY(${name} SHARED ${ARGN})
	AS_NEEDED(${name})
        if(UNIX AND NOT APPLE)
        	TARGET_LINK_LIBRARIES( ${name} "-Wl,-z,defs")
        	TARGET_LINK_LIBRARIES( ${name} "stdc++") # for clang
        endif(UNIX AND NOT APPLE)

ENDMACRO(ADM_ADD_SHARED_LIBRARY name )

