// gumball.cpp

#include "gumball_machine.h"
// constructor

gumball_machine::gumball_machine(void){
     balls = 0;
     count = 0;
     full = 25;

}


// default destructor
gumball_machine::~gumball_machine(void){

}


// get gumball method
void gumball_machine::get_gumball(){
   if(balls > 0){                  // check to see if the machine has balls to give out
     balls--;
     count++;
     cout << "You got a gumball" << endl;
   }
   else{                           // even if it doesn't it'll still take your quarter
     cout << "Not enough balls to get one thanks for the quarter though " << endl;
     count++;
   }
   
}


//fill machine
void gumball_machine::fill_machine(){
    if(balls < full){                              // check to see if the machine needs filled
       cout << "Added " << full-balls << " gumballs to the machine, and got " <<
       count << " quarters "<< endl; 
     balls = full;
     count = 0;
     }
     else{   // If it doesn't need filled print a statment telling the user.

       cout << "Machine does not need to be filled" << endl;
     }
}

