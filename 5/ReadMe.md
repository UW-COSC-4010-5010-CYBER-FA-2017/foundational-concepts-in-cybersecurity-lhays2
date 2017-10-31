

// Modularity

Modularity means breaking like code into sperate files or functions.

For this example I used the idea of a gumball machine again, since it seemed to fit. the header of the gumball machine below shows the seperation of the machine from the main program. becuase of this we can make changes to the code or aven make new machines with minimal effort.
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
and the simple main program.
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


The bad version of this program has all of the functions implemented in the main program  this makes updating the code or seperating it rather difficult, as seen below.
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

A modular program allows for scalability. with the good version we could implement several machines with little effort simply making a few function calls but with this version we would need to replicate much of the same code to get more machines. The problem only compounds as it gets bigger as well.
