#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        long long int sum = 0;
        for (int i = l - 1; i < r; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }

    return 0;
}