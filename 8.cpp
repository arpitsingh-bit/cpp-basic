#include <iostream>
using namespace std;
int main()
{
    int marks, total_marks;
    cout << "\n enter total marks of subject :";
    cin>> total_marks;
    cout << "Enter your marks in maths: ";
    cin>> marks;
    if (marks >= 33)
    {
        cout <<"\n congrtulation you are pass in maths "<<endl;

    }
    else 
    {
        cout <<"\n sorry you are failn in maths "<<endl;

    }
    cout <<"\n enter your marks in physics:";
    cin >>marks ;
    if (marks >= 33)
    {
        cout <<"\n congrtulation you are pass in physics "<<endl;

    }
    else 
    {
        cout <<"\n sorry you are failn in physics "<<endl;

    }

    cout <<"\n enter your marks in chemistry:";
    cin >> marks;
    if (marks >= 33)
    {
        cout <<"\n congrtulation you are pass in chemistry "<<endl;

    }
    else 
    {
        cout <<"\n sorry you are failn in chemistry "<<endl;

    }
    cout << "\n your marks out of total marks is :"<<marks+marks+marks  <<"/"<< total_marks << endl;
    cout << "\n your percentage is :"<<((marks + marks +marks )/total_marks *100)<<"%"<<endl;
    

}