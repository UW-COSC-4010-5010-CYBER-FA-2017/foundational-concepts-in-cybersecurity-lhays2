// Least Privilege
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

for the good example of this problem each level of credential allows the person different options, we wouldn't want a guest to drain the account now would we.we also probably wouldn't want a guest to be able to randomly add money to the account either. and admin we would assume they know what they are doing so we would allow them full access.
the below example checks a persons credentials to make sure they are a user or admin, credentials  either 0 or 1 before allowing them to do anything.
```
int add_money(int x){
    int val = 0,pin;
    if(x > 1){// check credentials
     cout <<"You do not have access for this" << endl;
    }
```
similarily if a person is not an admin they cannot drain the account.
```
int drain_money(int x, int y){
   int val = 0, pin = -1;
    if(x >= 1){// check credentials
       cout <<"You do not have access for this"<< endl;
```

The bad version of this has no credential checking.
```
int drain_money(int x, int y){
   int val = 0, pin = -1;
   cout << "Acount has been drained" << endl;
   return val;

}
```
Absolutly anybody can drain the account in the bad version. this could be quite the problem as a guest that can drain the account could simply walk away with all the money.
