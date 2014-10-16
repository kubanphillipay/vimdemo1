
cmake_minimum_required( VERSION 3.0 )
PROJECT(printerlib)

#FIND_PROGRAM(QT_QMAKE_EXECUTABLE NAMES qmake PATHS /develop/qt-4.8.6/bin/)
#FIND_PACKAGE(Qt4 REQUIRED)
#INCLUDE(${QT_USE_FILE} )


#set( DEBUG_CMAKE true CACHE bool "debug cmake file?" )
#if( DEBUG_CMAKE )
#   message(STATUS "Qmake? ${QT_QMAKE_EXECUABLE}" )
#   message(STATUS "Qt4_FOUND?  ${Qt4_FOUND}")
#   message(STATUS "QT_VERSION_MAJOR?  ${QT_VERSION_MAJOR}")
#   message(STATUS "QT_VERSION_MINOR?  ${QT_VERSION_MINOR}")
#   message(STATUS "QT_VERSION_PATCH?  ${QT_VERSION_PATCH}")
#   message(STATUS "QT_USE_FILE?  ${QT_USE_FILE}")
#   message(STATUS "QT_DEFINITIONS?  ${QT_DEFINITIONS}")
#   message(STATUS "QT_LIBRARIES?  ${QT_LIBRARIES}")
#endif()



set( SOURCES 
        printer.cxx 
)
set( HEADERS 
        printer.h 
)


set( PRINTER_LIB_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE  )
#add_subdirectory( src )
#QT4_WRAP_CPP(helloworld_HEADERS_MOC ${HEADERS} )
#
#ADD_DEFINITIONS(${QT_DEFINITIONS} )

add_library(  printerlib SHARED
                   ${SOURCES} 
                   ${HEADERS}
#                  ${helloworld_HEADERS_MOC} 
)
#TARGET_LINK_LIBRARIES( helloworld ${QT_LIBRARIES} )

