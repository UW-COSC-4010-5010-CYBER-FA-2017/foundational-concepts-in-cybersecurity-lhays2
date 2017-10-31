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



The bad version of this has no credential checking. on the functions. if the user is able to beat the first layer of security then they have full access to the system as seen below.
```
int drain_money(int x, int y){
   int val = 0, pin = -1;
   cout << "Acount has been drained" << endl;
   return val;

}
```

