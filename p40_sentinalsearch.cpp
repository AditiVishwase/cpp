//write  an  program to search  a array using  sentinal method.
#include<iostream>
using namespace std;
int main (){
    int  n,i;
    float arr[100],key,last;
    cout<<"enter  the size of array:"<<endl;
    cin>>n;
    cout<<"enter  the value to find:"<<endl;
    cin>>key;
    cout<<"enter  the elements in array:"<<endl;
    for(i=0;i<n;i++){
    cin>>arr[i];}
    last=arr[n-1];
    arr[n-1]=key;
    i=0;
    while(arr[i]!=key)
    i++;
    arr[n-1]!=last;
    if(i<n-1||arr[n-1]==key)
    cout<<"element found at index"<<i<<endl;
    else
    cout<<"element not found"<<endl;
    return 0;


}