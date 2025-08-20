#include <bits/stdc++.h>
using namespace std;

void print_list_forward(list<int> &l)
{
    cout << "L -> ";

    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_list_backward(list<int> l)
{
    cout << "R -> ";
    for (auto it = l.rbegin(); it != l.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{

    list<int> l;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        int sz = l.size();
        
        if (x == 0)
        {
            l.push_front(v);
        }

        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            if (v < sz && v >= 0)
            {
                l.erase(next(l.begin(), v));
            }
        }
        print_list_forward(l);
        print_list_backward(l);
    }

    return 0;
}