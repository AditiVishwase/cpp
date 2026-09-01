// Write a program for Selection Sort 
#include <iostream>
using namespace std;
void selection_sort(int data[],int n)
{
    int i,j,smallest;
    int temp;
    if (n < 2)
        return;
    for (i = 0; i < n-1;i++)
    {
        smallest = i;
        for (j = i + 1; j < n; ++j)
        {
            if (data[j] < data[smallest])
            {
                smallest = j;
            }
        }
        temp = data[i];
        data[i] = data[smallest];
        data[smallest] = temp;
    }
}
int main()
{
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int data[n];
    cout<<"enter the elements in array:"<<endl;
    for(int i=0;i<n;i++){
    cin>>data[i];
    }
    selection_sort(data, n);
    cout << "Sorted array:" << endl;
    for (int i=0;i < n; ++i)
    {
        cout << data[i] << " ";
    }
    return 0;
}