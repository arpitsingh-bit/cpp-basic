#include <iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout << " enter the value of number 1:";
    cin >> a;
    cout << "enter the value of number 2:";
    cin >>b;
    cout << "enter the value of number 3:";
    cin >>c;
    cout << "the values you entered are: " << a << ", " << b << ", " << c << endl;
    if (a>b && a>c )
    { 
        cout << "the first number"<< a<< "is the greates ammong all"<<endl;

    }
    else if (b>a && b>c )
    {
        cout << " the second number "<<b << "is the greatest ammong all"<<endl;

    }
    else
    {
        cout << " the third number "<< c<< " is the greates ammong all"<<endl;
        
    }
    
}