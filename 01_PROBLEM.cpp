#include<iostream>
using namespace std;

int main (){
    int score;
    cout<<"Enter a Score you Get : "<<endl;
    cin >> score;

    if (score >= 90){
        cout<<"A Grade";
    }
    else if (score >=80 && score <=89 )
    {
        cout<<"B Grade";
    }
    else if (score >=70 && score <=79 )
    {
        cout<<"C Grade";
    }
   else
   {
    cout<<"D Grade";
   }


}