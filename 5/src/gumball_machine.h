// gumball header
#include <iostream>

using std::cout;
using std::endl; 

class gumball_machine{

   private:
     int balls;   // number of balls in the system
     int count;   // number of quarters in the machine
     int full;    // number of balls that the machine can hold

    public:
      gumball_machine();  // constructor
      ~gumball_machine();  // destructor
      void get_gumball();      // get a gumball
      void fill_machine();     // fill the machine
};
