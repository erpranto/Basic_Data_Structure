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

void find_the_val(Node *&head, int val)
{
    int idx = 0;
    bool flag = false;
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        if (tmp->val == val)
        {
            cout << idx << endl;
            flag = true;
            return;
        }
        idx++;
    }
    if (flag == false)
    {
        cout << "-1" << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int num;
        while (true)
        {
            cin >> num;
            if (num == -1)
            {
                break;
            }
            insert_at_tail(head, tail, num);
        }
        int val;
        cin >> val;
        find_the_val(head, val);
    }
    return 0;
}