// Abstraction
This example also uses the same program as problem 4
to run this program some information is necessary.

Username:     admin   user    guest

Password:     admin   user    guest

Pin number:   0       1       2

The pin number is the same as the level of the persons credentials. 0 being full access, and 2 being the least access.

using this information a user has certain levels of access to different functions.
a guest ancan check the balance with 'view'
a user can 'view' and add money with 'add'
and an admin do 'view', 'add' and 'drain' to drain the account.
all users also have the option to exit the system using 'exit'.

One of the ideas of abstraction is giving users the information or tools they need and only the ones they need to complete the task. this version of this program illistrates this with instructions telling the user what they can do. 

The good version of this program outputs the different commands that a user has. As the below code illistrates a person will only see the commands for the options their credentials allow.
```
if (credentials != -1){
       cout << "Access valid." << endl; 
       cout << "****************************************" << endl;
       cout << "You have the avalible options to you" << endl;
       cout << "'view' to see the amount" << endl;
       if(credentials <= 1){
           cout << "'add' to add some money" << endl;  
       }
       if(credentials <= 0){
           cout << "'drain' remove all money" << endl;  
       }
       cout << "or 'exit' to quit" << endl;
       cout << "****************************************" << endl;
     }
```


The bad version of this has no output for the person loging in and simply allows them to guess as to what option are avalible to them. while this is not an overload of information this is definitly not the minimum amount of information nessecaary to call the functions. Homer nicely illistrates the problem of too many options in the gif for this problem.
```
if (credentials != -1){// check for valid credentials
       cout << "Access valid." << endl; 
       cout << "****************************************" << endl;
} 
```

