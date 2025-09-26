#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int scrn = y / 2;
        int empty = scrn * 7;
        if (y % 2 != 0)
        {
            scrn++;
            empty += 11;
        }
        if (x > empty)
        {
            x -= empty;
            scrn += ceil(x / 15.0);
        }
        cout << scrn << "\n";
    }
    return 0;
}