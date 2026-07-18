#include<iostream>
using namespace std;

int main()
{
    goto display;

    cout << "This line will not execute.";

display:
    cout << "Hello World";

    return 0;
}