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

void insert_at_head(Node *&head,Node*&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

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
    tail = newnode;
}

void insert_at_any_position(Node *&head, int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        if (tmp == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}

void print_link_lists(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int length(Node *head)
{
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int num;
    while (cin >> num && num != -1)
    {
        insert_at_tail(head, tail, num);
    }
    int q;
    cin>>q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        int size = length(head);
        if (idx < 0 || idx > size)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == 0)
        {
            insert_at_head(head,tail, val);
            print_link_lists(head);
        }

        else if (idx == size)
        {
            insert_at_tail(head, tail, val);
            print_link_lists(head);
        }

        else
        {
            insert_at_any_position(head, idx, val);
            print_link_lists(head);
        }
    }
    return 0;
}