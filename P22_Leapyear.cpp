#include<iostream>
using  namespace std;
int main()
{
    int year;
    cout<<"enter the year:"<<endl;
    cin>>year;
    ((year%400==0)||(year%4==0 && year%100!=0))?cout<<"leap year":cout<<"not leap year"<<endl;
    return 0;
}