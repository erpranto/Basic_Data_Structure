#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60, 70,20 ,20};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};
    // l2 = l;
    // l2.assign(l.begin(),l.end());

    // l.push_back(100);
    // l.push_front(5);

    // l.pop_back();
    // l.pop_front();
    // l.insert(next(l.begin(),2),100);
    // l.insert(next(l.begin(), 2), l2.begin(), l2.end());
    // l.insert(next(l.begin(), 2), v.begin(), v.end()); //adding vector

    // l.erase(next(l.begin(),2));
    // l.erase(next(l.begin(),2),next(l.begin(),4));
    //  cout<< *next(l.begin(),2);

    //replace(l.begin(), l.end(), 20, 100);

    auto it =find(l.begin(),l.end(),100); //to find a value
    if(it==l.end())cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}