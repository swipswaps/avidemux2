OPTION(QTSCRIPT "" ON)
IF(DO_QT4)
        if (QTSCRIPT)
		MESSAGE(STATUS "Checking for QtScript")
		MESSAGE(STATUS "*********************")
                if (QT_QTSCRIPT_FOUND)
                   MESSAGE(STATUS "    found")
                   APPEND_SUMMARY_LIST("Scripting" "QtScript" "${QT_QTSCRIPT_FOUND}")
                   ADD_SUBDIRECTORY(src)
                else (QT_QTSCRIPT_FOUND)
                   MESSAGE(STATUS "    NOT found")
                endif (QT_QTSCRIPT_FOUND)
        endif (QTSCRIPT)
ENDIF(DO_QT4)
