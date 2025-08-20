#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        string s;
        cin >> c;
        if (c == 0)
        {
            cin >> s;
            q.push(s);
        }
        else if (c == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}