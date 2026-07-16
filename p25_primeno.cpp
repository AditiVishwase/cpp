#include<iostream>
using namespace std;

int main()
{
    int num, i;

    cout << "Enter the number: ";
    cin >> num;

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            cout << "Not Prime";
            return 0;
        }
    }

    cout << "Prime";

    return 0;
}