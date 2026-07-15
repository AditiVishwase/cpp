//calculating the grades of students
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter the marks:"<<endl;
    cin>>marks;
    if(marks>=90)
    {
        cout<<"outstanding"<<endl;
    }
    else if(marks<=89 && marks>=70)
    {
        cout<<"excellent"<<endl;
    }
    else if(marks<=69 && marks>=50)
    {
        cout<<"very good"<<endl;
    }
    else if(marks<=49 && marks>=35)
    {
        cout<<"passed"<<endl;
    }
    else{
        cout<<"fail"<<endl;
    }
    return 0;
}
