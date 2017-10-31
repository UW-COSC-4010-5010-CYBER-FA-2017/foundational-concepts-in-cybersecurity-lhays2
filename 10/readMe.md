// Minimization

Minimization is the concept of keeping the code adn attack points small. The points of intrest a program has the more susceptible to attacks it becomes.

In this example we once again use the sumation program. The main program gets two numbers from the user adds them together and then and returns the result back to the user. This code is in a single file with two uses of 'cin' to get input from the user.
```
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
```
The bad example of this code has those three pioints of intrst, but it also has the three additional headers and c++ files. getting access to those files could also be used as points of attack from a malicious user. 
```
#include "Reader.h"
#include "Writer.h"
#include "Adder.h"
```

