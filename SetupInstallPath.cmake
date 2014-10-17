

function( CheckDependencyPath )
    #message( STATUS "Checking the dependency Path..." )

    #if(NOT EXISTS ${CMAKE_INSTALL_PREFIX}/cmake/modules/CheckDependencyPath.txt )
    #    message( FATAL_ERROR "Please set the CMAKE_INSTALL_PREFIX to where your dependencies are installed")
    #else()
        #message( STATUS "Prefix path is set")
        set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/" PARENT_SCOPE )
        #set(CMAKE_MODULE_PATH "THIS IS TEST" )
        message ( STATUS "CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}" )
    #endif()

endfunction()

CheckDependencyPath()


