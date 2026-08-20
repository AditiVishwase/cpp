//class employee declare the variables and use getter setter method to assign and print the value
#include<iostream>
using namespace std;
class Employee{
    string name;
    int salary;
    public:
    void setname(string n){
        name=n;
    }
    void setsal(int s){
        salary=s;
    }
    string getname()
    {
        return name;
        cout<<"name of employee is:"<<name<<endl;
    }
    int getsal()
    {
        return salary;
        cout<<"salary of employee is:"<<salary<<endl;
    }
    void display(){
        cout<<"name of employee is:"<<name<<endl;
        cout<<"salary of employee is:"<<salary<<endl;
    }
};
int main(){
    Employee e;
    e.setname("aditi");
    e.setsal(100000);
    e.getname();
    e.getsal();
    e.display();
    return 0;

}