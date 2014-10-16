#ifndef _PRINTER_H_
#define _PRINTER_H_




class Printer {

public:
   Printer();
   void printList();
   int printInt( int myint );
   void printCallCount();
private:
   int m_callCount;
};

typedef Printer Other_Printer;


#endif
