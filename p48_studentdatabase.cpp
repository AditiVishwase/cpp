#include <iostream>
using namespace std;
const int SIZE = 10;
class HashTable
{
private:
    int hashTable[SIZE];
public:
    HashTable()
    {
        for (int i = 0; i < SIZE; i++)
        {
            hashTable[i] = -1;
        }
    }
    void insert(int key)
    {
        int index = key % SIZE;
        while (hashTable[index] != -1)
        {
            index = (index + 1) % SIZE;
        }

        hashTable[index] = key;
    }
    void display()
    {
        cout << "HASHTABLE" << endl;

        for (int i = 0; i < SIZE; i++)
        {
            cout << i << " = ";

            if (hashTable[i] == -1)
                cout << "Empty";
            else
                cout << hashTable[i];

            cout << endl;
        }
    }
};
int main()
{
    HashTable ht;
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        ht.insert(key);
    }
    ht.display();
    return 0;
}

