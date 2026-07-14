#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j,base,Lr,Lc,W,N,address;
    cout<<"enter the no of rows and columns"<<endl;
    cin>>i>>j;
    cin>>N;
    
    a[i][j]=a[0][0]=sizeof(a[0][0])*(i-0)*N+(j-0);
    cout<<"adresses"<<address<<endl;
return 0;
}