// proj1.cpp

#include <iostream>
#include <fstream>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::cin;
using std::endl;
using std::string;



int main(int argc, char*argv[]){
string input_file, output_file, name; 

int age;

cout << "please enter a valid input file"; 
    cin >> input_file;

ifstream infile;
ofstream outfile;
cout << "please enter a output file"; 
    cin >> output_file;


infile.open(input_file);
outfile.open(output_file);



   while(infile >> name){
      
      infile >> age;
      outfile <<"Employee name: "<< name << ", ";    
      outfile <<"age "<< age <<'\n';
   }

infile.close();
outfile.close();
  return 0;
}
