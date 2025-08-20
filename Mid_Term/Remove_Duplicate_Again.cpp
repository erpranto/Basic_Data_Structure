#include <bits/stdc++.h>
using namespace std;
void print_list_forward(list<int> &l)
{
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int val;
    while (cin >> val && val != -1)
    {
        l.push_back(val);
    }
    l.sort();
    l.unique();
    print_list_forward(l);

    return 0;
}