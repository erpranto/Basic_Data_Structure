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

void insert_at_any_position(Node*head,int idx,int val)
{
    Node*newnode=new Node(val);
    Node*tmp=head;
    for(int i=1;i<idx;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next->prev=newnode;
    tmp->next=newnode;
    newnode->prev=tmp;
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

void print_backward(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_any_position(head,2,100);
    insert_at_any_position(head,1,500);

    print_forward(head);
    return 0;
}