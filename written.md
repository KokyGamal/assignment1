### Christine Gamal
### Seat Number 33785
##1. What is a class?
A class is a definition of a user-defined type.A class declaration specifies how data is
to be stored,and it specifies the methods (class member functions) that can be used
to access and manipulate that data.

##2.	 2. How does a class accomplish abstraction, encapsulation, and data hiding?
A class represents the operations you can perform on a class object with a public
interface of class methods; this is abstraction.The class can use private visibility (the
default) for data members, meaning that the data can be accessed only through the
member functions; this is data hiding. Details of the implementation, such as data
representation and method code,are hidden; this is encapsulation
##3.	What is the relationship between an object and a class?
A class defines a type, including how it can be used.An object is a variable or
another data object, such as that produced by new, which is created and used
according to the class definition.The relationship between a class and an object is
the same as that between a standard type and a variable of that type.
##4. In what way, aside from being functions, are class function members
##different from class data members?
If you create several objects of a given class, each object comes with storage for its
own set of data. But all the objects use the one set of member functions. (Typically,
methods are public and data members are private, but that’s a matter of policy, not
of class requirements.)
##5. Define a class to represent a bank account. Data members should
##include the
##depositor’s name, the account number (use a string), and the balance.
##Member functions
##should allow the following:
##n Creating an object and initializing it.
##n Displaying the depositor’s name, account number, and balance
##n Depositing an amount of money given by an argument
##n Withdrawing an amount of money given by an argument
##Just show the class declaration, not the method implementations.
##(Programming
##Exercise 1 provides you with an opportunity to write the
##implementation.)
##Programming Exercises 559

// #include <cstring>
// class definition
class BankAccount
{
private:
char name[40]; // or std::string name;
char acctnum[25]; // or std::string acctnum;
double balance;
public:
BankAccount(const char * client, const char * num, double bal = 0.0);
//or BankAccount(const std::string & client,
// const std::string & num, double bal = 0.0);
void show(void) const;
void deposit(double cash);
void withdraw(double cash);
}
##6. When are class constructors called? When are class destructors called?
A class constructor is called when you create an object of that class or when you
explicitly call the constructor.A class destructor is called when the object expires.
##7. Provide code for a constructor for the bank account class from
##Chapter Review Question 5.
These are two possible solutions 

BankAccount::BankAccount(const char * client, const char * num, double bal)
{
strncpy(name, client, 39);
name[39] = '\0';
strncpy(acctnum, num, 24);
acctnum[24] = '\0';
balance = bal;
}
or
BankAccount::BankAccount(const std::string & client,
const std::string & num, double bal)
{
name = client;
Answers to Chapter Review for Chapter 10 1349
ptg7068951
acctnum = num;
balance = bal;
}
Keep in mind that default arguments go in the prototype, not in the function definition
##8. What is a default constructor? What is the advantage of having one?
A default constructor either has no arguments or has defaults for all the arguments.
Having a default constructor enables you to declare objects without initializing
them, even if you’ve already defined an initializing constructor. It also allows you to
declare arrays.
##9. Modify the Stock class definition (the version in stock20.h) so that it has member
##functions that return the values of the individual data members. Note:A member
##that returns the company name should not provide a weapon for altering the array.
##That is, it can’t simply return a string reference. It could return const reference.
//#ifndef STOCK30_H_
//#define STOCK30_H_
class Stock
{
private:
std::string company;
long shares;
double share_val;
double total_val;
void set_tot() { total_val = shares * share_val; }
public:
Stock(); // default constructor
Stock(const std::string & co, long n, double pr);
Stock() {} // do-nothing destructor
void buy(long num, double price);
void sell(long num, double price);
void update(double price);
void show() const;
const Stock & topval(const Stock & s) const;
int numshares() const { return shares; }
double shareval() const { return share_val; }
double totalval() const { return total_val; }
const string & co_name() const { return company; }
};
##10. What are this and *this?
 The this pointer is available to class methods. It points to the object used to
invoke the method.Thus, this is the address of the object,and *this represents the
object itself
