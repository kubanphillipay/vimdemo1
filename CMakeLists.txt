cmake_minimum_required( VERSION 3.0 )
PROJECT(demo)

include(SetupInstallPath.cmake)

message(STATUS "PRJ: CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}" )


include(setupc11)
include(setupvimide)



SetupCxx11()
SetupVimIde()

set( CMAKE_EXPORT_COMPILE_COMMANDS 1 )
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

