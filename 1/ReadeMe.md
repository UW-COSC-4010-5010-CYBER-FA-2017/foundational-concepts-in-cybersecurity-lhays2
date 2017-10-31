// Domain Seperation

Domain seperation is the idea of keeping your 'test' and 'live' data seperate. The reason behind this is that perhaps you
want to use test data to see where your program will fail. or perhaps you do not want to use live data in case the program 
reacts badly to the data.

in my example of this the good example uses a test data set with bad examples to force the programer to create more robust code.
the simple object of the program is to take an input txt file, with each line having a name and an age, either test.txt or live.txt. The live version is a clean format that works like it is supposed to while the test.txt contains bad formating forcing the programer to think of some solutions.

`7 jim T` Is an example of a bad age a number in stead of a T
 
`14 Edwardo -6` an example of an age that probably shouldn't exist. 

Thanks to this test data we are able to program those scenarios into the program.

`     infile >> age;
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
      }`
