#include<iostream>
using namespace std;

int main ()
{
 int n ;
 cout<<"Enter the Number : ";
 cin >> n;

 
 int result = (n << 1) + n;  // Equivalent to 3 * n

 cout << "3 * " << n << " = " << result << endl;

 return 0 ;

}