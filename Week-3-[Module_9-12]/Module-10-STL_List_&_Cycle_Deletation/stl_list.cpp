#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> L = {1, 2, 3, 4, 5, 6};
    // int a[] = {10, 20, 30};
    //list<int>l2(a,a+3);

    vector<int> v = {1, 2, 3, 4, 5};
    list<int> l2(v.begin(), v.end());

    cout << l2.size() << endl;

    l2.resize(10,100);
    // cout << *l.begin() << endl;
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    for (int val : l2)
    {
        cout << val << " ";
    }

    return 0;
}