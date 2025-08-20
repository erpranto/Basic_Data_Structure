#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> l;
    string line;
    getline(cin, line);
    stringstream ss(line);
    string word;
    while (ss >> word)
    {
        if (word == "end")
        {
            break;
        }
        l.push_back(word);
    }
    int q;
    cin >> q;
    cin.ignore();
    string cmd, address;

    auto current = l.begin();
    auto tmp = current;
    while (q--)
    {
        cin>>cmd;
        if (cmd == "visit")
        {
           cin>>add;
           tmp=current;
           current=find()
        }
        else if (cmd == "next")
        {
            auto tmp = current;
            tmp++;
            if (tmp != l.end())
            {
                current++;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (current != l.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}