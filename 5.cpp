#include <iostream>
using namespace std;
int main()
{
    double a ,b;
    cout <<"\nenter your first no ";
    cin>>a;
    cout << "\nenter the value of second no";
    cin>>b;
    if (a>b)
    {
        cout << "\nthe first no is greater than secod no:"<<endl;

    }
    else if (a<b)
    {
        cout << "\nthe second no is greater than first no:"<<endl;
        
    }
    else
    {
        cout << "\nboth the no are equal "<<endl;
    }

    cout <<"\nthe sum of two number will be :"<< a+b<<endl;
    cout <<"\nthe product of two no will be :"<< a*b<<endl;
    cout << "\nthe diffrece of two no will be: "; 
    if(a>b)
    {
        cout <<a-b<<endl;

    }
else if (a<b)
{
    cout <<b-a<<endl;
    
}
else{

cout << "\nthe two no are equal"<<endl;
}
cout <<"\nthe divison of two no will be :";
if (a>b)
{
    cout << a/b << endl;
}
else if ( b>a)
{
    cout << b/a<< endl;
}
else if ( a = b )
{
    cout << " 1"<<endl;
}
else 
cout <<" devison by zero is not posible "<<endl;

}
