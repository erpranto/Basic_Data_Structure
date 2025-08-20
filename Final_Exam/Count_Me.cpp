#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin,str);
        stringstream ss(str);
        string word;
        map<string, int> mp;
        int count = 0;
        string max_find_word;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count = mp[word];
                max_find_word = word;
            }
        }
        cout<<max_find_word<<" "<<count<<endl;
    }
    return 0;
}