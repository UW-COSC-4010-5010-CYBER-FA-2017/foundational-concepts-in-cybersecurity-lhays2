// A bad example of modularity
#include "Reader.h"
#include "Writer.h"
#include "Adder.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;

Reader ReadX;
Reader ReadY;
Writer WriterZ;
Adder Adds;

int main() {
int x,y,z; // math variables
 
  // get a number
  ReadX.Read();
  x = ReadX.getVal();


  // get another number
  ReadY.Read();
  y = ReadY.getVal();
 
  // Use an Adder to sum the numbers
  z = Adds.Sum(x,y);

  // Use a writer to write the numbers out
  WriterZ.Write(z);

  return 0;
}
