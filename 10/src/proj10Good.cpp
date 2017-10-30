// problem3.cpp

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;

int main() {
int x,y,z; // math variables
 
  // get a number
  cout << "enter a number: ";
  cin >> x;

  // check that the number is valid
  if(cin.fail()){ 
         cerr << "Not a real number" << endl;
         exit(1);         
      }

  cout << "enter another number: ";
  cin >> y;

  // check that the number is valid
  if(cin.fail()){                
         cerr << "Not a real number" << endl;
         exit(1);         
      }

  z = x+y; // set z = x +y
  cout <<"The sum of X and Y is: ";
  cout << z << endl; // print the sum value stored in Z



  return 0;
}
