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
    
    vector<int> vc(v);
    sort(vc.begin(), vc.end(), greater<int>());

    bool b = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] != vc[i])
        {
            b = false;
            break;
        }
    }
    if (b == true)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }
    return 0;
}