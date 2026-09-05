#include <iostream>
using namespace std;
int main()
{
    double a;
cout <<"\nenter radius of circle :";
cin >> a;
const double pi = 3.141592653589793;
double perimeter = 2 * pi * a;
cout << "\nperimeter of circle is : " << perimeter << endl;

double area = pi * a * a;
cout << "\narea of circle is : " << area << endl;

double g,h;
cout <<"\n enter the length  :";
cin>>g;
cout << "\n enter the breadth :";
cin>>h;
if(g==h)
{
    cout<<"\n it is a square"<<endl;
    cout<<"\n area of square is :"<<g*h<<endl;
    cout <<"\n perimeter of square is :"<<4*g<<endl;
}
else 
{
cout <<"\n it is a rectangle "<<endl;
cout <<"\n area of rectangle is :"<<g*h<<endl;
cout <<"\n perimeter of rectangle is:"<<2*(g+h)<<endl;
}
}
