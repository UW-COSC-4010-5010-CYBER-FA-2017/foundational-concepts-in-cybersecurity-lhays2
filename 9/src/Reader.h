// reader header
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::cerr;

class Reader{

   private:
     int value;   

    public:
      Reader();   // constructor
      ~Reader();  // destructor
      void Read();      // read a number
      int getVal();       // get the value
};
