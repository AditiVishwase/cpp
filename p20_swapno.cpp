#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int temp;
    int stepcount=0;
    cout<<"enter the number:"<<endl;
    stepcount+=1;
    cin>>a>>b;
    stepcount+=1;
    temp=a;
    a=b;
    b=temp;
    stepcount+=3;
    cout<<"the value after swapping is:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    stepcount+=3;
    cout<<"the stepcount is:"<<stepcount<<endl;
    return 0;
}