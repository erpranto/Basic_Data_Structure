#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myL = NULL, *myR = NULL;
        if (l != -1)
        {
            myL = new Node(l);
            f->left = myL;
            q.push(myL);
        }

        if (r != -1)
        {
            myR = new Node(r);
            f->right = myR;
            q.push(myR);
        }
    }
    return root;
}

int max_hight(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = max_hight(root->left);
    int r = max_hight(root->right);
    return max(l, r)+1;
}

int main()
{
    Node *root = input();
    cout << max_hight(root);
    return 0;
}