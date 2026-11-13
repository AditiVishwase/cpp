#include<iostream>
using namespace std;
int main(){
    int num=19;
    int *ptr=&num;
    cout<<"value is :"<<num<<endl;
    cout<<"address of value:"<<&num<<endl;
    cout<<"pointer:"<<ptr<<endl;
    cout<<"value stored in ptr:"<<*ptr<<endl;
    return 0;

}