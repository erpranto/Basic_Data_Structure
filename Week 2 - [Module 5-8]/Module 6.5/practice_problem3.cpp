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
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = tail->next;
}

void middle_value(Node *&head, int length)
{
    Node *tmp = head;
    if (length % 2 != 0)
    {
        for (int i = 0; i < length / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val;
    }
    else
    {
        for (int i = 1; i < length / 2; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }
}

int length(Node *&head, Node *&tail)
{
    int length = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        length++;
        tmp = tmp->next;
    }
    return length;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int lenght = length(head, tail);
    middle_value(head, lenght);

    return 0;
}