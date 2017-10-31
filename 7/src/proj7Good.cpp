// Main.cpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;


// add money to account
// only users or admins can do this 
int add_money(int x){
    int val = 0,pin;
    if(x > 1){// check credentials
     cout <<"You do not have access for this" << endl;
    }
    else{
       cout << "Please enter your pin number: ";
       cin >> pin;
       if(pin == x){
           cout << "Enter amount to add." << endl;
           cout << "Amount: ";
           cin >>  val;
       }
       else{
          cout << "incorrect pin please try again later" << endl;
       }
    }    
    return val;
}

// check amount in the account
// anyone  logged in can check this
void check_money(int x, int y){
       int pin;
       cout << "Please enter your pin number: ";
       cin >> pin;
       if(pin == x){
           cout <<"The amount in the hold is: " << y << endl;
       }
       else{
          cout << "incorrect pin please try again later" << endl;
       }
}

// A method to reset the amount
// only an admin can drain an account
int drain_money(int x, int y){
   int val = 0, pin = -1;
    if(x >= 1){// check credentials
       cout <<"You do not have access for this"<< endl;
       return y;
    }
    else{
       cout << "Please enter your pin number: ";
       cin >> pin;
       if(pin == x){
           cout << "Acount has been drained" << endl;
       }
       else{
          cout << "incorrect pin please try again later" << endl;
          return y;
       }
    }
    return val;

}



// Run main
int main(){
  string users[3] = {"admin", "user", "guest"}; // List of users
  string pass[3] = {"admin", "user", "guest"};  // List of passwords
  int amount = 100;
  bool done = false;
  string username,password, action;
  cout << "Username: ";
  cin >> username;
  cout << "Password: ";
  cin >> password;

    int i = 0, credentials = -1; // used to check credential level 
    while (i<3){
        if(username==users[i] && password==pass[i]){ // compare entries
      
            credentials = i;     

        }
      i++;
      }     
    if (credentials != -1){
       cout << "Access valid." << endl; 
       cout << "****************************************" << endl;
       cout << "You have the avalible options to you" << endl;
       cout << "'view' to see the amount" << endl;
       if(x <= 1){
           cout << "'add' to add some money" << endl;  
       }
       if(x <= 0){
           cout << "'drain' remove all money" << endl;  
       }
       cout << "or 'exit' to quit" << endl;
       cout << "****************************************" << endl;
     }                                                
     else{
       cout << "Invalid credentials."<< endl;
       return 1; 
     }
     while (!done){
       cout << "enter command :";
       cin >> action;
       
       if (action == "add"){
           amount += add_money(credentials);
       }
       else if (action == "drain"){
           amount = drain_money(credentials,amount);
       }
       else if (action == "view"){
           check_money(credentials, amount);
       }
       else if (action == "exit"){
           done = true;
       }
       else{
           cout << "Not a valid command" << endl;
       }

     }
           

  return 0;
}
