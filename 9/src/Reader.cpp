// Reader.cpp

#include "Reader.h"
// constructor

Reader::Reader(void){
     value = 0;

}


// default destructor
Reader::~Reader(void){

}


// Read a value method
void Reader::Read(){
  cout << "enter another number: ";
  cin >> value;

  // check that the number is valid
  if(cin.fail()){                
         cerr << "Not a real number" << endl;
         exit(1);         
      }   
}


//return the value read
int Reader::getVal(){
   return value;
}

