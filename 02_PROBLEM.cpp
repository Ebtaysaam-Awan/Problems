// we are devloping a ticket booking system

#include<iostream>
using namespace std;
int main()
{
int age;

cout<<"Enter the age : "<<endl;
cin>>age;

if(age >=0 && age <=12){
    cout<<"The Ticket Price for Children is : 10$"<<endl;

}
 else if(age >=13 && age <=64){
    cout<<"The Ticket Price for Adults is : 20$"<<endl;

}
 else if(age > 65){
    cout<<"The Ticket Price for Seniors is : 15$"<<endl;

}
else{
cout<<"Invalid age";
}

return 0;
}