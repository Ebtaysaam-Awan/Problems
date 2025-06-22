// Task 5 (Using Switch):
// Implement a simple calculator that performs addition, subtraction, multiplication, or division 
// based on user input.
// Write a C++ program that takes two operands and an operator (+, -, *, /) as input and performs 
// the corresponding operation.



#include<iostream>
using namespace std; 
int main()
{
 double num1 ,num2;
 char op;

 cout<<"Enter the Value of NUM 1 : "<<endl;
 cin >>num1;
 
 cout<<"Enter the Operator (+ , - , / , * ) : "<<endl;
 cin >>op;

 cout<<"Enter the Value of NUM 2 : "<<endl;
 cin >>num2;
    
 switch (op) {
   case '+':
   cout<<"The sum of "<<num1<<" + "<<num2<<" ="<<num1+num2;
   break;
   case '-':
   cout<<"The Subtraction of "<<num1<<" - "<<num2<<" ="<<num1-num2;
   break;
   case '*':
   cout<<"The Multiplication of "<<num1<<" * "<<num2<<" ="<<num1*num2;
   break;
   case '/':
   if(num2 != 0)
    cout<<"The sum of "<<num1<<" / "<<num2<<" = "<<num1/num2;
   else
    cout<<"The Division is not allowed in this case  : "<<endl; 
   break;

   default:
   cout<<"Invalid Operator !! Use other than that !!";
 }


}