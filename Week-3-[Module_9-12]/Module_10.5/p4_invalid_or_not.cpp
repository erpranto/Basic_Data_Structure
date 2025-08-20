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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = head->prev;
}

void insert_at_any_position(Node *&head, Node *&tail, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    newnode->prev = tmp;
    tmp->next->prev = newnode;
    tmp->next = newnode;

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
    newnode->prev = tail;
    tail = tail->next;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int length_of_list(Node *head)
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
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    while (n--)
    {
        int x, v;
        cin >> x >> v;
        int len = length_of_list(head);
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_forward(head);
            print_reverse(tail);
        }
        else if (x == len)
        {
            insert_at_tail(head, tail, v);
            print_forward(head);
            print_reverse(tail);
        }
        else if (x < 0 || x > len)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_any_position(head, tail, x, v);
            print_forward(head);
            print_reverse(tail);
        }
    }
}