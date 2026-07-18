#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    for(;n>0;n=n/10){
        count++;
    }
    cout<<"digits are:"<<count<<endl;
    return 0;
}