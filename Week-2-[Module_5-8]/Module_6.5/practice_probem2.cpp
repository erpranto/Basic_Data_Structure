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

void duplicate_check(Node *&head)
{
    int freq[101] = {0};
    for (Node *i = head; i != NULL; i = i->next)
    {
        int val = i->val;
        if (freq[val] > 0)
        {
            cout << "YES" << endl;
            return;
        }
        freq[val]++;
    }
    cout << "NO" << endl;
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
    duplicate_check(head);
    return 0;
}