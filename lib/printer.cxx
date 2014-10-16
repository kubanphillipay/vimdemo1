#include "printer.h"
#include <vector>
#include <iostream>

      using namespace std;
Printer::Printer(){
      m_callCount=0;
      cout << "Creating Printer\n";
}  
void Printer::printList(){

   std::vector<int> myvec{ 4 , 5 , 6 , 11 , 12 , 13 };
   for( auto i : myvec ) {
      cout << "I is :" << i << "\n";
   }
   ++m_callCount;
}





int Printer::printInt( int myint ){
   
   cout << "Int to Print:" << myint << "\n";
   
   ++m_callCount;
   return m_callCount;
   

}



void Printer::printCallCount(){

   cout << "Times called: " << m_callCount << "\n";

}




