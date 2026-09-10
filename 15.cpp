#include <iostream>
using namespace std ;
int main()
{
    int a;
    cout << " enter the number you want to check :";
    cin >> a;

    if ( a%2==0 && a > 0)
    cout << a << " \nis posetive even number ";
    else if ( a % 2==0 && a > 0)
    cout << a << " \nis posetiv odd number " ;
    else if ( a % 2 ==0 ) 
    cout << a << " \nis the negetiv even number ";
    else 
    cout << a << " \nis the negetive odd number ";
}
