#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_set>
#include <algorithm>

using namespace std;

// Custom Comparator
bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    return p1.first < p2.first;
}

int main()
{
    // =====================================================
    // VECTOR
    // =====================================================
    cout << "========== VECTOR ==========" << endl;

    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vec.emplace_back(6);

    vec.pop_back();

    cout << "Vector Elements : ";
    for (int val : vec)
    {
        cout << val << " ";
    }

    cout << endl;

    cout << "Front : " << vec.front() << endl;
    cout << "Back  : " << vec.back() << endl;

    reverse(vec.begin() + 1, vec.begin() + 3);

    cout << "After Reverse : ";
    for (int val : vec)
    {
        cout << val << " ";
    }

    cout << endl << endl;

    // =====================================================
    // LIST
    // =====================================================
    cout << "========== LIST ==========" << endl;

    list<int> l;

    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    cout << "List Elements : ";

    for (int val : l)
    {
        cout << val << " ";
    }

    cout << endl << endl;

    // =====================================================
    // VECTOR OF PAIRS
    // =====================================================
    cout << "========== VECTOR OF PAIRS ==========" << endl;

    vector<pair<int, int>> vp = {
        {1, 2},
        {2, 3},
        {3, 4}
    };

    vp.push_back({4, 5});

    for (auto p : vp)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;

    // =====================================================
    // STACK
    // =====================================================
    cout << "========== STACK ==========" << endl;

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Stack Elements : ";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl << endl;

    // =====================================================
    // QUEUE
    // =====================================================
    cout << "========== QUEUE ==========" << endl;

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue Elements : ";

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl << endl;

    // =====================================================
    // MAP
    // =====================================================
    cout << "========== MAP ==========" << endl;

    map<string, int> m;

    m["TV"] = 100;
    m["Laptop"] = 1000;
    m["Headphones"] = 50;

    for (auto p : m)
    {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << endl;

    // =====================================================
    // SET
    // =====================================================
    cout << "========== SET ==========" << endl;

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(3); // Duplicate ignored

    cout << "Set Elements : ";

    for (int x : s)
    {
        cout << x << " ";
    }

    cout << endl << endl;

    // =====================================================
    // UNORDERED SET
    // =====================================================
    cout << "========== UNORDERED SET ==========" << endl;

    unordered_set<int> us;

    us.insert(50);
    us.insert(20);
    us.insert(40);
    us.insert(10);
    us.insert(20);

    cout << "Unordered Set Elements : ";

    for (int x : us)
    {
        cout << x << " ";
    }

    cout << endl << endl;

    // =====================================================
    // SORT VECTOR OF PAIRS
    // =====================================================
    cout << "========== SORT VECTOR OF PAIRS ==========" << endl;

    vector<pair<int, int>> arr = {
        {3, 1},
        {2, 1},
        {7, 1},
        {5, 2}
    };

    sort(arr.begin(), arr.end(), comparator);

    for (auto p : arr)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << endl;

    // =====================================================
    // SORT NORMAL VECTOR
    // =====================================================
    cout << "========== SORT VECTOR ==========" << endl;

    vector<int> nums = {8, 2, 9, 1, 6, 3};

    sort(nums.begin(), nums.end());

    cout << "Ascending : ";

    for (int x : nums)
    {
        cout << x << " ";
    }

    cout << endl;

    sort(nums.begin(), nums.end(), greater<int>());

    cout << "Descending : ";

    for (int x : nums)
    {
        cout << x << " ";
    }

    cout << endl << endl;

    return 0;
}