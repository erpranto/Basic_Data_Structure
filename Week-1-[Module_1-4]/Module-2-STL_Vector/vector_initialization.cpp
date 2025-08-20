#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; // Type 1
    // vector<int> v(5);   // Type 2
    // vector<int> v(10, -1); // Type 3
    // vector<int> v2(v);      //Type 4
    // int ar[5]={1,2,3,4,5};
    // vector<int> v(ar,ar+5);     //Type 5
    vector <int> v={1,2,3,4};
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}