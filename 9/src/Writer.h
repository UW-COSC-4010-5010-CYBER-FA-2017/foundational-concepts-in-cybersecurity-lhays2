// writer header
#include <iostream>

using std::cout;
using std::endl;
using std::cerr;

class Writer{

   private:
     //int value;   

    public:
      Writer();   // constructor
      ~Writer();  // destructor
      void Write(int);      // write a number
};
