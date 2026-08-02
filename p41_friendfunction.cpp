#include<iostream>
using namespace std; 
class Loan;
class Account
{
private:
    int balance;
public:
    Account()
    {
        balance = 10000;
    }
    friend void displayfinancials(Account, Loan); 
    friend  class Auditor;
};
class Loan
{
private:
    int amount;
public:
    Loan()
    {
        amount = 5000;
    }
    friend void displayfinancials(Account, Loan);
    friend class Auditor;
};
class Auditor{
    public:
    void display(Account a,Loan l){
        cout<<"display using friend class"<<endl;
        cout<<"the balance of friend class is:"<<a.balance<<endl;
        cout<<"the loan of friend class is:"<<l.amount<<endl;
    }
};
void displayfinancials(Account a, Loan l) 
{
    cout<<"display using friend function"<<endl;
    cout << "Balance is : " << a.balance << endl;
    cout << "Loan Amount is : " << l.amount << endl;
}
int main()
{
    Account a;
    Loan l;
    Auditor b;
    displayfinancials( a, l); 
    b.display(a,l);
    return 0;
}