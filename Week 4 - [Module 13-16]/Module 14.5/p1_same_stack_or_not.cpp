#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class mystack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    int m, n;
    cin >> m;
    mystack st1;
    while (m--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    cin >> n;
    mystack st2;
    while (n--)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    if (st1.size() == st2.size())
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                cout << "NO";
                return 0;
            }
            st1.pop();
            st2.pop();
        }
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}