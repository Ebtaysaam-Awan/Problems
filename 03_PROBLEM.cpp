// Write a program that takes an integer as input and classifies it into one of the following 
// categories: (even or odd), and (positive, negative, or zero).
// Write a C++ program that takes an integer as input and prints the corresponding classification.

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the Integer : ";
    cin>>num;
     //check even or odd number
    if(num % 2 == 0 ){
        cout<<"The number is Even !!"<<endl;
    }
    else {
        cout<<"The number is odd !! "<<endl;

    }
    //check positve or negative or zero
    if (num >= 0){
        cout<<"And  number is positive";
    }
    else if (num< 0){
        cout<<"But Number is Negative";
    }
    else{
        cout<<"Zero"<<endl;
    }
    return 0;
}