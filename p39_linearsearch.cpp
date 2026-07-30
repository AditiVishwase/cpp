//write  a program  to store floating values in array in random order .use linear search  for searching  an element and compare its complexicity.
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int arr[100],key;
    cout<<"enter the size  of array:"<<endl;
    cin>>n;
    cout<<"enter the elements in array:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to search:"<<endl;
    cin>>key;
    for(i=0;i<n;i++){
        if (arr[i]==key){
            cout<<"element found"<<"at index:"<<i<<endl;
            return 0;

        }
    }
    cout<<"element not found."<<endl;
    
}