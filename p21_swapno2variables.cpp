#include<iostream>
using namespace std;
int main()
{
    int a,b;
   
    int stepcount=0;
    cout<<"enter the number:"<<endl;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;

    
}