#include <iostream>
using namespace std;

int main()
{

/*

>>   a%b = a if a<b
>>   a%(-b) = a%b but -a&b = -(a%b)

>>   comma doesn't allow 2 diff values to be printed

  -> incaptulation is binding of data and functions toghether in a class

   abstraction is showing only the neccessary deatils which are required for the outer world
       eg. outer cover

inheritance is 

there are 3 access specifiers - private, public, protected

private means that data is pvt to that particular unit & is inaccesinble to the outer world
by default AS is pvt 

public AS means data is accessible to outer world

>> protective AS when we r inheriting a class using protected access AS it means the derived 
   class will have access to protected members of parent class        

   protected data is accessible to the derived class or sub class , but inaccessible to outer world             

   while pvt data is inaccessible to the derived class also



SCOPE resolution operator :: is used to tell the scope of particulare function which means that u r 
telling to the computer that get data fn belongs to the class addition

if we are defing the fn within the class then there is no need to use the scope resolution operator

class is a user defined datatype bcz class is a collectio of similar type of objects

when we have to call or access a public fn we will be using a dot operator to call the fn 

naming convention : 

name the variables as per the given problem statment

class name shall start with a capital letter

fn name starts with a small ltter and it follows camel case approach 
(first word letter in small andd 2nd word letter in capital)

a1.a=10 
a1 number1=10  is wrong bcz number1 is pvt, if public then it is correct

if the data members (a,b) would have been kept as public in our class then we can access the data members also using the object

-> there are 2 ways to define a class and its function
   1st is we can declare the class which osists of data members and member fn
      member fn are defined outside the class by using the scope  resolution operator
   2nd is we can define the class by decalring data members and member fns inside the class
      member fn ate also defined inside the class 
      in this method we do not need the scope resolution operator

in c & c++ the execution of a program starts with main fn

 cin takes ch by ch when we are fetching input from terminal, inpt is stored in bufeer and we are try to fetch the input from buffer 
 buffer contains that empty space also as cin encounters that empty space from the buffer , 
 it assumes that the string is terminated & it show that part of the string which comes before the empty ch

 a fn is known as method in object oriented programming

-> when we are taking the string input immediately after any other data type  input , we need to use cin.ignore()

When you DO need cin.ignore()

The moment you mix:

cin >> and

getline()

You must clear the buffer in between.

Example (same data type, still required):

string a;
string b;

cin >> a;        // reads one word
cin.ignore();    // clears newline
getline(cin, b); // reads full line


Even though both are string, cin.ignore() is still needed.



*/
return 0;
}
