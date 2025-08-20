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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
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

void find_palindrome(Node *head, Node *tail)
{
    for (Node *i = head, *j = tail; j->next != i && i != j; i = i->next, j = j->prev)
    {
        if (i->val != j->val)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }
    find_palindrome(head, tail);

    return 0;
}