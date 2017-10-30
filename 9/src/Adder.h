// Adder header
#include <iostream>

using std::cout;
using std::endl;
using std::cerr;

class Adder{

   private:
     //int value;   

    public:
      Adder();   // Constructor
      ~Adder();  // Destructor
      int Sum(int, int);      // Add Two numbers
};
