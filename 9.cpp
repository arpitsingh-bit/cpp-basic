#include <iostream>
using namespace std;

int main() 
{
    double  a,b;
    char op;
    cout << "enter your first number :";
    cin >>a;
    cout << "enter your operator: ";
    cin >> op;
    cout << "enter your second number: ";
    cin >> b;
    if (op=='+')
    {
        cout << "sum of two numbers is: " << a + b << endl;
    }
        else if (op=='-')
        {
            cout << "difference of two numbers is: " << a - b << endl;
        }
        else if (op=='*')
        {
            cout << "product of two numbers is: " << a * b << endl;
        }
        else if (op=='/')
        {
            if (b != 0)
            {
                cout << "quotient of two numbers is: " << a / b << endl;
            }
            else
            {
                cout << "division by zero not possible" << endl;
            }
        }
        else
        {
            cout << "invalid operator" << endl;
        }
        return 0;
    }
