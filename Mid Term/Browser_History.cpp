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
    auto current = l.begin();
    while (q--)
    {
        string input;
        getline(cin, input);
        stringstream ststm(input);
        string cmd, address;
        ststm >> cmd;
        if (cmd == "visit")
        {
            ststm >> address;
            bool flag = false;
            for (auto it = l.begin(); it != l.end(); it++)
            {
                if (*it == address)
                {
                    current = it;
                    cout << *current << endl;
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                cout << "Not Available" << endl;
            }
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