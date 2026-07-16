#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0, dig;
    int stepcount = 0;
    cout << "Enter the number: ";
    stepcount+=1;
    cin >> num;
    stepcount+=1;
    while (num != 0)
    {
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
        stepcount++;
    }
    cout << "The reverse number is: " << rev << endl;
    cout << "The step count is: " << stepcount << endl;
    return 0;
}