#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // priority_queue<int> pq; // max Heep
    priority_queue<int, vector<int>, greater<int>> pq; // min heep
    int n;
    cin >> n;
    int x;
    while (cin >> x)
        pq.push(x);
    cout << pq.top();
    return 0;
}