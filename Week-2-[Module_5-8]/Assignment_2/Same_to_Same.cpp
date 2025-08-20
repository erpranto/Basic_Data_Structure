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

void compare(Node *&head1, Node *&head2)
{
    bool flag = true;
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            cout << "NO" << endl;
            flag = false;
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
}

int length(Node *&head)
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
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head1, tail1, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }
    int len1 = length(head1);
    int len2 = length(head2);
    if (len1 != len2)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        compare(head1, head2);
    }
    return 0;
}