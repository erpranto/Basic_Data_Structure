#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
    {
        cout << it->first << " -> " << it->second << "\n";
    }
    return 0;
}