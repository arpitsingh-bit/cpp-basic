#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    cout << "enter your no 1 :";
    cin>> a;
    cout << "enter your no 2";
    cin>> b;
    if ( a%2==0 && b%2==0)
    {
        cout << a<< "and "<< b<<" are both even no"<<endl;

    }
    else if ( a %2 != 0 && b %2 == 0)
    {
        cout << "\n"<<a<< " is a odd no "<< " but "<<b << " is even no "<<endl;

    }
else if( a%2==0 && b%2!=0) 
{
cout << "\n"<<a<< " is even no but "<< b << " is odd no "<< endl ;

}
else 
{
    cout << " both "<< a<< b << " are odd no "<<endl;
}
}