#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << " enter your number1 : ";
    cin>> a;
    cout << "enter your number 2 : ";
    cin >> b;
    if (a > 0 && b>0)
    {
        cout << " both " << a << " and "<< b << " are posetive number "<<endl;

    }
     else if ( a<0&& b<<00)
     {
        cout << " both " << a << " and " << b<< " are negetive number "<<endl;

     }
     else if ( a > 0 && b<0)
    {
 cout << a<< " is posetive and "<< b<< " is negetive number "<<endl;

    }
    else 
    {
        cout << a << " is negetive "<< b<< " is posetive" <<endl;
    }

}