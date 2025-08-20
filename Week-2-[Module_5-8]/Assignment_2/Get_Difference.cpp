#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
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
    tail = tail->next;
}

int max_num(Node *&head)
{
    int max = head->val;
    for (Node *i = head; i!= NULL; i = i->next)
    {
        if (max < i->val)
        {
            max = i->val;
        }
    }
    return max;
}

int min_num(Node *&head)
{
    int min = head->val;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (min > i->val)
        {
            min = i->val;
        }
    }
    return min;
}

void get_difference(Node *&head)
{
    int max = max_num(head);
    int min = min_num(head);
    cout << max - min << endl;
}

int length(Node *&head)
{
    int len = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        len++;
        tmp = tmp->next;
    }
    return len;
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
    int len = length(head);
    if (len == 1)
    {
        cout << "0" << endl;
    }
    else
    {
        get_difference(head);
    }
    return 0;
}