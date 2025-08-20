#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q1;
    queue<int> q2;
    int m, n;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        q1.push(x);
    }
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        q2.push(x);
    }
    if (q1.size() != q2.size())
    {
        cout << "NO";
    }
    else
    {

        while (!q1.empty())
        {
            if (q1.front() != q2.front())
            {
                cout << "NO";
                return 0;
            }
            q1.pop();
            q2.pop();
        }
        cout << "YES";
    }

    return 0;
}