#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> l, pair<string, int> r)
{
    if (l.first == r.first)
    {
        return l.second > r.second;
    }
    return l.first < r.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++)
    {
        string name;
        int unint;
        cin >> name >> unint;
        v.push_back({name, unint});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto &p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}