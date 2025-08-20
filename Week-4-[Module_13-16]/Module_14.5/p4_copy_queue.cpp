#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q1;
    queue<int>q2;
    stack<int>st;
    int x;
    cin>>x;
    while(x--)
    {
        int val;
        cin>>val;
        q1.push(val);
    }
    while(!q1.empty())
    {
        st.push(q1.front());
        q1.pop();
    }
    while(!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    return 0;
}