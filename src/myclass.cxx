//This is myclass.cxx

#include <iostream>
#include "myclass.h"

using namespace std;
MyClass::MyClass(){

   cout << "Creating my class\n";
}



void MyClass::myfunc(){
  // This is a test   
  // This is another test :w
   cout << "Using my func\n";
}


void MyClass::myfunc(int test_var){
  // This is a test   
  // This is another test :w
   cout << "Using my func(int)\n";
   cout << "Test var is " << test_var << "\n";
}


int MyClass::myfunc1() {
   std::cout << "Using my func1\n";
   return 5;
}

