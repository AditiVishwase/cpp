#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"enter the amount:"<<endl;
    cin>>amount;
    (amount>1000)?cout<<"eligible":cout<<"not eligible";
    return 0;
}