#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    pair<int, int> p;
    p = make_pair(2, 3);
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    // cout << p.first << endl;
    // cout << p.second << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second<<endl;
    }
    return 0;
}