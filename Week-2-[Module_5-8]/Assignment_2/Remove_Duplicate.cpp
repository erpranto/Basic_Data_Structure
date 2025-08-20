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

void print_link_lists(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void remove_duplicate(Node *&head, Node *&tail)
{

    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *prev = i;
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val == j->val)
            {
                prev->next=j->next;
                if(j==tail)
                {
                    tail=prev;
                }
                delete j;
                j=prev->next;
            }
            else
            {
                prev=j;
                j = j->next;
            }
        }
    }
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
    remove_duplicate(head, tail);
    print_link_lists(head);
    return 0;
}