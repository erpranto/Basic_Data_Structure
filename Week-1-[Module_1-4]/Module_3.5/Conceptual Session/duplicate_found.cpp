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
    bool a = false;
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            a = true;
            break; 
        }
    }
    if (a == true)
    {
        cout << "Found";
    }
    else if (a == false)
    {
        cout << "Not Found";
    }
    return 0;
}