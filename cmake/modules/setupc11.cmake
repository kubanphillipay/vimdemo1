function( SetupCxx11 )
   message( STATUS "Setting up Cxx11" )
   if( CMAKE_COMPILER_IS_GNUCXX )
      execute_process(COMMAND ${CMAKE_C_COMPILER} -dumpversion
           OUTPUT_VARIABLE GCC_VERSION)
      message( STATUS "GCC Version: ${GCC_VERSION}" ) 
      if(  NOT( GCC_VERSION LESS 4.9 ))   
         message( STATUS "GCC greater than or equal 4.9, -std=c++1y")
         SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
      elseif(  NOT( GCC_VERSION LESS 4.7 ))   
         message( STATUS "GCC greater than or equal 4.7, -std=c++11")
         SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
      else()
         message( STATUS "GCC less than 4.7, -std=c++0x")
         SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
      endif()      
   endif() 
endfunction()
