//to create a login system 
#include<iostream>
using namespace std;
int main()
{
    string name, pass;
    cout<<"enter the name of the person:"<<endl;
    cin>>name;
    cout<<"enter the password:"<<endl;
    cin>>pass;
    if(name=="yash"){
    cout<<"username is correct! now enter the password."<<endl;
         if(pass=="aditi1109")
         {
        cout<<"login successfull"<<endl;
         }
        else{
        cout<<"incoreect password.... try again"<<endl;
         }
    }
    else{
        cout<<"invalid username."<<endl;

    }
    
    return 0;
}