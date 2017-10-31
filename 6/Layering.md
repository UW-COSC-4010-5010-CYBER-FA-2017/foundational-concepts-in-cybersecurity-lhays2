// Layering
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

For this example we also have to mention the layers of security. The first layer is the Login process. This is the first step to ensuring that only do we only let people with proper access into the system, but that people who don't have access stay out. The sample code below checks the login credentials and only lets in valid entries
```
while (i<3){
        if(username==users[i] && password==pass[i]){ // compare entries
      
            credentials = i;     

        }
      i++;
      }     
    if (credentials != -1){
       cout << "Access valid." << endl; 
       cout << "****************************************" << endl;
     }                                                
     else{
       cout << "Invalid credentials."<< endl;
       return 1; 
     }
```
The second level of credential checking is that the user must enter a pin before they can use a function. this is the second layer of the security. If the first leyer fails we at least have one more leyer to protect the functions.

```
int add_money(int x){
    int val = 0,pin;
    if(x > 1){// check credentials
     cout <<"You do not have access for this" << endl;
    }
```


The bad version of this has no credential checking. on the functions. if the user is able to beat the first layer of security then they have full access to the system as seen below.
```
int drain_money(int x, int y){
   int val = 0, pin = -1;
   cout << "Acount has been drained" << endl;
   return val;

}
```

