// A bad example of the 
// Gumball machine

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;

string command= ""; 
int balls = 0;
int count = 0;
int full = 25;

int main() {
  bool walk_away = false; // are you still in front of the machine?
  
  cout << " You walk up to a Gumball machine with an" 
            << "infinite amount of quarters are in your pocket." << endl;
  cout << "you can enter the commands 'get' or 'fill' to affect the" <<
             "machine or 'end' to quit"<< endl;
 
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
  }
  return 0;
}
