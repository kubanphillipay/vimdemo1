function( SetupVimIde )
   message( STATUS "Setting up VIM IDE " )
   set( TEST_VAR "_MY_TEST_VAR_" )
   
   
   file( WRITE myvimfile "This is a line in my vim file"
                         "This is another line"
                         "What happens when i do this" 
                         "This is a ${TEST_VAR}" )

   

endfunction()
