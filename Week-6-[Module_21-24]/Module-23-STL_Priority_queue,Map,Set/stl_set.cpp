#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);  //O(logN)
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << "\n";
    }

    if (s.count(20))    //O(logN)
        cout << "Ache\n";   
    else
        cout << "Nai\n";
    return 0;
}