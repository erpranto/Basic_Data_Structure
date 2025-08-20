#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        int space = 0;
        if (i <= mid) // identifing before space
        {
            space = i;
        }
        else
        {
            space = n - 1 - i;
        }

        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        if (i == mid) // printing x
        {
            cout << "X";
        }
        else // front side
        {
            if (i < mid)
            {
                cout << "\\";
            }
            else
            {
                cout << "/";
            }
        }
        for (int j = 0; j < n - 2 * space - 2; j++) // middle spaces
        {
            cout << " ";
        }
        
        if (i < mid)
        {
            cout << "/";
        }
        else if (i > mid)
        {
            cout << "\\";
        }
        cout << endl; // printing new line
    }
    return 0;
}