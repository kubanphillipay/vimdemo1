cmake_minimum_required( VERSION 3.0 )
PROJECT(demo)

#FIND_PROGRAM(QT_QMAKE_EXECUTABLE NAMES qmake PATHS /develop/qt-4.8.6/bin/)
#FIND_PACKAGE(Qt4 REQUIRED)
#INCLUDE(${QT_USE_FILE} )

if( CMAKE_COMPILER_IS_GNUCXX )
   execute_process(COMMAND ${CMAKE_C_COMPILER} -dumpversion
        OUTPUT_VARIABLE GCC_VERSION)
   if(  GCC_VERSION VERSION_GREATER 4.7 )   
      message( STATUS "GCC greater than 4.7, -std=c++11")
      SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
   else()
      message( STATUS "GCC less than 4.7, -std=c++0x")
      SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
   endif()      
endif() 

set( CMAKE_EXPORT_COMPILE_COMMANDS 1 )

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

message( STATUS "This is a temp message" )

add_subdirectory( lib )
add_subdirectory( src )
#QT4_WRAP_CPP(helloworld_HEADERS_MOC ${HEADERS} )
#
#ADD_DEFINITIONS(${QT_DEFINITIONS} )

#add_executable( helloworld
#                   ${SOURCES} 
#                   ${HEADERS}
#                  ${helloworld_HEADERS_MOC} 
#)

#TARGET_LINK_LIBRARIES( helloworld ${QT_LIBRARIES} )

