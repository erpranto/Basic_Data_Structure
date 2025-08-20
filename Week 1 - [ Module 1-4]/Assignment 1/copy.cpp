#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int middle = n / 2;
        int d = min(i, n - 1 - i);
        int inner = n - 2 * d - 2;
        for (int j = 0; j < d; j++)
        {
            cout << " ";
        }
        if (i == middle)
        {
            cout << "X";
        }
        else if (i < middle)
        {
            cout << "\\";
            for (int j = 0; j < inner; j++)
            {
                cout << " ";
            }
            cout << "/";
        }
        else
        {
            cout << "/";
            for (int j = 0; j < inner; j++)
            {
                cout << " ";
            }
            cout << "\\";
        }
        cout << endl;
    }
    return 0;
}