// Resource Encapsulation

resouce encapsilation means protecting a resource is some kind of shell. 

For this example I used the idea of a gumball machine and encapsulating its functions in its own cpp file to seperate or encapsulate it from the main program. The header as seen below

```
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
```
is seperated from the main program so that the program can only invoke certain actions and cannot directly affect the inner workings of the gumball machine.

The bad version of this program has all of the functions implemented in the main program where all of the functions could potentially be edited or used in bad ways. The varibles are also completly open allowing any piece of the code to edit them if they want.
