//create the class student that counts how many objects are created using static variable add a constructor and desrtuctor to show what objects are created and destroyed.
#include<iostream>
using namespace std;
class Student{
    public:
    static int count;
    Student()//constructor
    {
        count++;
    
    }
    ~Student()//destructor
    {
        cout<<"destructor called"<<endl;
    }
    void display(){
        cout<<"total objects are:"<<count<<endl;
    }
};
 int Student::count=0;
int main(){
    Student s1; 
     Student s2;
      Student s3;
    s1.display();
return 0;
}