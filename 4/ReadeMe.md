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
