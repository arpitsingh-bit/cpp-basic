#include  <iostream>
using namespace std ;
int main()
    {
        int year;
    cout <<"\nenter your year you want to check :";
    cin>> year; 
    if ( (year % 4 ==0 && year %100 !=0) || (year % 400 ==0))
    {
        cout << "\n" << year << " is a leap year "<<endl;
    }
    else 
    {
        cout << "\n" << year << "is not a leap year"<<endl;

    }
    }

    
