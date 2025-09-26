#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, int> mp;
    mp["tamim"] = 2; // O(logN)
    mp["samim"] = 3;
    mp["monim"] = 4;
    mp["rohim"] = 6;
    mp["korim"] = 16;
    mp["josim"] = 31;

    for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
    {
        cout << it->first << " " << it->second << "\n"; // O(logN)
    }
    // if (mp.count("pranto"))
    //     cout << "Ache\n";
    // else
    //     cout << "Nai\n";
    return 0;
}