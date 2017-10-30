// problem3.cpp

#include <iostream>
#include "gumball_machine.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

// utilizes the gumball code

/*class gumball_machine{
*
*   private:
*     int balls;   // number of balls in the system
*     int count;   // number of quarters in the machine
*     int full;    // number of balls that the machine can hold
*
*    public:
*      gumball_machine();  // constructor
*      ~gumball_machine();  // destructor
*      void get_gumball();      // get a gumball
*      void fill_machine();     // fill the machine
*};
*/




int main() {
  bool walk_away = false; // are you still in front of the machine?
  string command= ""; 
  cout << " You walk up to a Gumball machine with an" 
            << "infinite amount of quarters are in your pocket." << endl;
  cout << "you can enter the commands 'get' or 'fill' to affect the" <<
             "machine or 'end' to quit"<< endl;
 
  gumball_machine mach1; // create the machine
 
  while (!walk_away){
    cout << "what do you want to do:"; 
    cin >> command;                   // get command from user

    if (command == "get"){ // check for the get command
      mach1.get_gumball();
    }
    else if(command == "fill"){ // check for the get command
      mach1.fill_machine(); 
    }
    else if (command == "end"){  // check to see if the user walked away
    cout << "you walk away from the vending machine" << endl;
    walk_away = true; 
    }
    else {
    cout << "That doesn't make sense" << endl; // the user did not input a valid command
    }
  }
  return 0;
}
