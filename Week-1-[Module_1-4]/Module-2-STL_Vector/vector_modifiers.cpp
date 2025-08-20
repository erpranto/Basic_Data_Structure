#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};
    // vector<int> v2;
    // v2 = v;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    // v.pop_back();

    // v.insert(v.begin()+1,100);

    // vector<int>v2={100,200,300};
    // v.insert(v.begin()+1,v2.begin(),v2.end());

    // v.erase(v.begin()+1);
    // v.erase(v.begin()+1,v.end()-1);

    // replace(v.begin(),v.end(),2,100);

    auto it = find(v.begin(), v.end(), 2);
    if (it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    cout << *it << endl;

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    return 0;
}