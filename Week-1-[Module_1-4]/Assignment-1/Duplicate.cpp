#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool b = false;
    sort(v.begin(), v.end());
    for (int i = 0; i < n-1; i++)
    {
        if (v[i] == v[i + 1])
        {
            b = true;
            break;
        }
    }
    if (b == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}