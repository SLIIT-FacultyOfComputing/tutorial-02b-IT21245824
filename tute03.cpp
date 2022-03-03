/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>  //preprocessive directive
using namespace std;

int main(){

  int no; //declaring variables
  long fac;

  cout<<"Enter a number:"<<endl; //getting user input
  cin>>no;

  fac = 1; //initializing
  
  for (int r=no; r >= 1; r--) //repitition using for loop and calculating
    {
        fac = fac * r;
    }
  cout<<"Factorial of  " << no << " is "<< fac <<endl;
  
  return 0;
}
