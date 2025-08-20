#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    if (m != n)
    {
        cout << "NO";
        return 0;
    }
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (m--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!st.empty())
    {
        if(st.top()!=q.front())
        {
            cout<<"NO";
            return 0;
        }
        else
        {
            st.pop();
            q.pop();
        }
    }
    cout<<"YES";

    return 0;
}