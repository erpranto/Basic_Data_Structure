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
        if (l.marks < r.marks)
            return true;
        if (l.marks > r.marks)
            return false;
        else
            return l.roll > r.roll;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << "\n";
        pq.pop();
    }

    return 0;
}