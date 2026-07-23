#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    string roll_no;
    void getdetails(){
        cout<<"enter name of student:"<<endl;
        cin>>name;
        cout<<"enter roll no of student:"<<endl;
        cin>>roll_no;
    }
    void display(){
        cout<<"the name of student:"<<name<<endl;
        cout<<"the roll no of student :"<<roll_no<<endl;
     }
};
int main(){
    Student s;
    s.getdetails();
    s.display();
}