Programming Exercises
1. Provide method definitions for the class described in Chapter Review
Question 5
and write a short program that illustrates all the features.
*/#ifndef ex1BankAccount_H_
#define ex1BankAccount_H_

#include <string>
using std::string;

class BankAccount {
 private:
  string name;
  string number;
  double balance;

 public:
  BankAccount();//default constructor
  BankAccount(const string & nam, const string & num, double bal);
  void show();
  void deposite(double n);
  void withdraw(double n);
  ~BankAccount();
};


#endif

 2. Here is a rather simple class definition:
class Person {
private:
static const LIMIT = 25;
string lname; // Person’s last name
char fname[LIMIT]; // Person’s first name
public:
Person() {lname = ""; fname[0] = ‘\0’; } // #1
Person(const string & ln, const char * fn =
"Heyyou"); // #2
// the following methods display lname and fname
void Show() const; // firstname lastname format
void FormalShow() const; // lastname, firstname
format
};
 (It uses both a string object and a character array so that you can
compare how
the two forms are used.) Write a program that completes the
implementation by
providing code for the undefined methods.The program in which you use
the class
should also use the three possible constructor calls (no arguments, one
argument,
and two arguments) and the two display methods. Here’s an example
that uses the
constructors and methods:
Person one; // use default constructor
Person two("Smythecraft"); // use #2 with one default
argument
Person three("Dimwiddy", "Sam"); // use #2, no
defaults
one.Show();
cout << endl;
one.FormalShow();
// etc. for two and three
#ifndef Person_H_
#define Person_H_

#include <string>
#include <iostream>
using std::string;

class Person {
 private:
  static const int LIMIT = 25;
  string lname; // Personâ€™s last name
  char fname[LIMIT]; // Personâ€™s first name
 public:
  Person() {lname = ""; fname[0] = '\0'; } // #1
  Person(const string & ln, const char * fn = "Heyyou"); // #2
  // the following methods display lname and fname
  void Show() const; // firstname lastname format
  void FormalShow() const; // lastname, firstname format
};

#endif

 6. Here’s a class declaration:
class Move
{
private:
double x;
double y;
public:
Move(double a = 0, double b = 0); // sets x, y to a,
b
showmove() const; // shows current x, y values
Move add(const Move & m) const;
// this function adds x of m to x of invoking object
to get new x,
// adds y of m to y of invoking object to get new y,
creates a new
// move object initialized to new x, y values and
returns it
reset(double a = 0, double b = 0); // resets x,y to
a, b
};
 Create member function definitions and a program that exercises the
class.
#ifndef MOVE_H_
#define MOVE_H_

class Move {
 private:
  double x;
  double y;
 public:
  Move(double a = 0, double b = 0); // sets x,y to a,b
  void showmove() const; // shows current x, y values;
  Move add(const Move & m) const;
  // this function adds x of m to x of invoking object to get new x,
  // add y of m to y of invoking object to get new y, creates a new
  // move object initialized to new x, y values and returns it
  void reset(double a = 0, double b = 0); // resets x,y to a,b
};

#endif
