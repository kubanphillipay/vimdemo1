cmake_minimum_required( VERSION 3.0 )
PROJECT(helloworld)

#FIND_PROGRAM(QT_QMAKE_EXECUTABLE NAMES qmake PATHS /develop/qt-4.8.6/bin/)
#FIND_PACKAGE(Qt4 REQUIRED)
#INCLUDE(${QT_USE_FILE} )

#set( CMAKE_EXPORT_COMPILE_COMMANDS 1 )


#set( DEBUG_CMAKE true CACHE bool "debug cmake file?" )
if( DEBUG_CMAKE )
   message( STATUS "PRINTER_LIB_INCLUDE_DIR: ${PRINTER_LIB_INCLUDE_DIR}")
endif()



set( SOURCES 
        main.cxx 
        myclass.cxx 
)
set( HEADERS 
        myclass.h 
)

#QT4_WRAP_CPP(helloworld_HEADERS_MOC ${HEADERS} )
#
#ADD_DEFINITIONS(${QT_DEFINITIONS} )
include_directories( ${PRINTER_LIB_INCLUDE_DIR} )
message( STATUS "THis is a test" )
message( STATUS "PRINTER_LIB_INCLUDE_DIR is ${PRINTER_LIB_INCLUDE_DIR}")
add_executable( helloworld
                   ${SOURCES} 
                   ${HEADERS}
#                  ${helloworld_HEADERS_MOC} 
)

TARGET_LINK_LIBRARIES( helloworld printerlib )

