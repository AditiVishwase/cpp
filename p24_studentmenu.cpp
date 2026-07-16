//using switch case for finding the student information
#include<iostream>
using namespace std;
int main()
{
    int  choice;
    cout<<"enter the choice:"<<endl;
    cout<<"1.view marks"<<endl;
    cout<<"2.attendence"<<endl;
    cout<<"3.fess"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"marks"<<endl;
        break;
        case 2:
        cout<<"attendance"<<endl;
        break;
        case 3:
        cout<<"fees"<<endl;
        break;
        default:
        cout<<"invalid"<<endl;

    }
}