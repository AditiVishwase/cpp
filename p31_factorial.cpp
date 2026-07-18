#include<iostream>
using namespace std;
int main()
{
  long long int num,fact=1;
    cout<<"enter the value of num:"<<endl;
    cin>>num;
    for(int i=1 ;i<=num;i++){
        fact=fact*i;
    }
    cout<<"factorial is:"<<fact<<endl;
    return 0;
}