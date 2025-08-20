#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 50, 60, 20, 10, 30};

    cout << l.front() << endl;
    cout << *l.begin() << endl;
    cout << *next(l.begin(), 4) << endl;

    cout << l.back() << endl;
    //cout << *l.end() << endl; //not possible cz this iterator will stay at the point after the last value;
    return 0;
}