#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 60, 20, 40, 80, 100, 10};
    // l.remove(10); //remove the selected value
    // l.sort(); //automaticly sort in assending order
    // l.sort(greater<int>()); //printing desending order

    l.unique();
    // To remove duplicate
    l.reverse();

    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}