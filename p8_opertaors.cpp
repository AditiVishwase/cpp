#include<iostream>
using namespace  std;
int main(){
    int a=10;
    int b=11;
    cout<<"addition is:"<<a+b<<endl;
    cout<<"substraction is:"<<a-b<<endl;
    cout<<"multiplication  is:"<<a*b<<endl;
    cout<<"division is:"<<a/b<<endl;
    cout<<"modulus is:"<<a%b<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    int age=21;
    cout<<(age>=18&& age<=60)<<endl;
    cout<<(age>18 || age<60)<<endl;
    cout<<!(age==21)<<endl;
    age+=5;
    cout<<age<<endl;
    age-=5;
    cout<<age<<endl;
    age*=5;
    cout<<age<<endl;
    age/=2;
    cout<<age<<endl;
    cout<<++a<<endl;
    cout<<a++<<endl;
    cout<<a<<endl;
    cout<<--a<<endl;
    cout<<a--<<endl;
    cout<<a<<endl;
    return 0;
}