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

void check_duplicate(Node *head1, Node *head2, Node *tail1, Node *tail2)
{
    bool flag = true;
    Node *i = head1;
    Node *j = head2;
    while (i != NULL && j != NULL)
    {
        if (i->val != j->val)
        {
            cout << "NO";
            return;
        }
        i = i->next;
        j = j->next;
    }
    if (i == NULL && j == NULL)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }
    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }
    check_duplicate(head1, head2, tail1, tail2);
    return 0;
}