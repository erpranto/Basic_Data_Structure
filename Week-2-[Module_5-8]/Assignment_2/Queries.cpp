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
    head = newnode;
}

void print_linked_lists(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_at_head(Node *&head, Node *&tail)
{
    Node *deletenode = head;
    head = head->next;

    if (head == NULL)
    {
        tail = NULL;
    }
    delete deletenode;
}

void delete_at_any_pos(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }
    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if (tmp == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }
    if (tmp == NULL || tmp->next == NULL)
    {
        return;
    }
    Node *deletenode = tmp->next;
    tmp->next = tmp->next->next;
    if (deletenode == tail)
    {
        tail = tmp;
    }
    delete deletenode;
}

int size(Node *head)
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
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_lists(head);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
            print_linked_lists(head);
        }
        else if (x == 2)
        {
            int sz = size(head);
            if (v < 0 || v >= sz)
            {
                print_linked_lists(head);
                
            }
            else
            {
                if (v == 0)
                {
                    delete_at_head(head, tail);
                    print_linked_lists(head);
                }
                else
                {
                    delete_at_any_pos(head, tail, v);
                    print_linked_lists(head);
                }
            }
        }
    }

    return 0;
}