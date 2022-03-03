/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream> //preproceesing directive
using namespace std;

int main()
{
  double salary, netSalary; //declaring variables
  int etype, otHrs, otRate;

  cout<<"Enter the Employee type:"<<endl; //getting user input
  cin>>etype;
  
  cout<<"Enter the Salary"<<endl;
  cin>>salary;
  
  cout<<"Enter the OT hours"<<endl;
  cin>>otHrs;

  //check the condition using swith case
   switch (etype) {
        case 1 :
            otRate = 1000;
            break;
        case 2 :
            otRate = 1500;
            break;
        default :
            otRate = 1700;
            break;
     }
  
  netSalary = salary + otHrs* otRate; //calculating 

  cout<<"Net Salary is:"<<netSalary<<endl; //display the output

return 0;
  }
