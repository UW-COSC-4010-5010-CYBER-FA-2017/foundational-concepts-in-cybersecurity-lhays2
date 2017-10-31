

// Modularity

Modularity means breaking like code into sperate files or functions.

For this example I used the idea of a gumball machine again, since it seemed to fit. the header of the gumball machine below shows the seperation of the machine from the main program. becuase of this we can make changes to the code or aven make new machines with minimal effort.

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



The bad version of this program has all of the functions implemented in the main program where all of the functions could potentially be edited or used in bad ways. The varibles are also completly open allowing any piece of the code to edit them if they want.
