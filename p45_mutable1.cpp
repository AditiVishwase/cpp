//mutable and immutable program
#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<"mutable:"<<a<<endl;
    a=27;
    cout<<"changed value"<<a<<endl;
    const int b=19;
    cout<<"immutable objects:"<<b<<endl;
    cout<<"changed imutable value"<<endl;
    return 0;
}