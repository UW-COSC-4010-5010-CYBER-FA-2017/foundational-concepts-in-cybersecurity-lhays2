// proj1Good.cpp

#include <iostream>
#include <fstream>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::cerr;
using std::ios;


// Initialize Main
int main(int argc, char*argv[]){

  // Various varibles
  string input_file, output_file, name; 
  int age;
  ifstream infile;
  ofstream outfile;


  cout << "please enter a valid input file: "; 
    cin >> input_file;


  cout << "please enter a output file: "; 
    cin >> output_file;

  // Test that we have different input/output
  if(input_file == output_file){
    cout << "Invalid files names" << endl;
    exit(1);
  }

  // open the read/write files
  infile.open(input_file, ios::in);
  if(!infile){// check that the file opened
    cerr <<"Can't open the input file" << endl;
    exit(1);
  }  

  outfile.open(output_file, ios::app);
   if(!outfile){// check that the file opened
    cerr <<"Can't open the input file" << endl;
    exit(1);
  } 

   while(infile >> name){
      
      infile >> age;
      if(infile.fail()){
         infile.clear();
         cerr <<"Not a real number for age" << endl;
         infile.ignore(256,'\n');         
      }
      else if (age > 150 || age <= 0){// check to see if the user input a reasonable age
         cout << "Invalid age user not added" << endl;
      }
      else{

      outfile <<"Employee name: "<< name << ", ";    
      outfile <<"age "<< age <<'\n';
      }
   }

  infile.close();
  outfile.close();
  return 0;
}
