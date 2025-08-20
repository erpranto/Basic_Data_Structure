#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks == r.marks)
            return l.roll > r.roll;
        return l.marks < r.marks;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string s;
        int r, m;
        cin >> s >> r >> m;
        Student obj(s, r, m);
        pq.push(obj);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string s;
            int r, m;
            cin >> s >> r >> m;
            Student obj(s, r, m);
            pq.push(obj);
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (command == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (command == 2)
        {
            if (!pq.empty())
                pq.pop();
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
    }

    return 0;
}