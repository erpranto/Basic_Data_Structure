#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    stack<int>st;
    while(x--)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    stack<int>st2;
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while (!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    
    return 0;
}