
// Data Hiding

Data hiding means hiding the varibles or data from the user or programer if there is no reason for them to access them.

For this example I used the idea of a gumball machine once again. the header below shows that there are several private varibles. If we assume that a porogramer only has access to the main program and not the gumball_machine files, then have a very small section of data hiding. 
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
The main program can only use the functions to interact with the hidden varibles. They do not have the option of directly affecting them.
```
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
```


The bad version of this program has all of the variables and data out in the open for the programmer to interact with and edit as they choose.
```
while (!walk_away){
    cout << "what do you want to do:"; 
    cin >> command;                   // get command from user

    if (command == "get"){ // check for the get command
      if(balls > 0){
        int q; // quarter?
        cout << "please insert 25 cents: ";
        cin >> q; 
        balls--;
        count += q;
        cout << "You got a gumball" << endl;
      }
      else{
        cout << "Not enough balls to get one thanks for the quarter though " << endl;
        count++;
      }
    }
    else if(command == "fill"){ // check for the get command
     cout << "Added " << full-balls << " gumballs to the machine, and got " <<
     count << " quarters "<< endl; 
     balls = full;
     count = 0; 
    }
    else if (command == "end"){  // check to see if the user walked away
    cout << "you walk away from the vending machine" << endl;
    walk_away = true; 
    }
    else {
    cout << "That doesn't make sense" << endl; // the user did not input a valid command
    }
 ```
 
