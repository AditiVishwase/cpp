//create class counter with a mutable data member accesscounter that is modified inside a const function  show  how  mutable allows change even when other member are constant
#include<iostream>
using namespace std;
class counter{

    int num;
     mutable int accesscounter;
    public:
    counter(int n)
    {
        num=n;
        accesscounter=0;
    }
    void display() const{
        accesscounter++;
        cout<<"count"<<num<<endl;
        cout<<"accesscounter"<<accesscounter<<endl;
    }
};
int main()
{
    const counter c(20);
    c.display();
    c.display();
    c.display();
    counter s(31);
    s.display();
    s.display();
    return 0;
}