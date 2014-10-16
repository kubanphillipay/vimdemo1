#include <iostream>
#include <vector>
#include "myclass.h"
#include <string>
#include <fstream>
#include "printer.h"
int main( int argc , char ** argv ){
   

   std::cout << "Hello World" << std::endl;

   std::cin.get();

   MyClass test;
   test.myfunc();
   
   std::vector<int> myvec;
   myvec.push_back(10);
   test.myfunc();
   test.myfunc();
   
   std::vector<std::string> blah;
   blah.push_back("test"); 
//this is a 
//s
//t
   std::cout << "This is a test\n";

   std::cout << "\nStarting my printer\n";
   Printer myprinter;
   myprinter.printInt(7);
   myprinter.printList();
   myprinter.printCallCount();
   std::cout << "Ending my printer\n\n";
   
   Other_Printer myPrinter2;
   myPrinter2.printInt(48);
   myPrinter2.printList();
   myPrinter2.printCallCount();
   std::cout << "Press any key to continue" << std::endl;
   
}
