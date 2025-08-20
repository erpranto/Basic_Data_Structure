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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root = NULL;
    if (val != -1)
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    { 
        int l, r;
        cin >> l >> r;
        Node *p = q.front();
        q.pop();
        Node *myl = NULL, *myr = NULL;
        if (l != -1)
            myl = new Node(l);
        p->left = myl;
        if (r != -1)
            myr = new Node(r);
        p->right = myr;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int count_leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l + r;
}

int main()
{
    Node *root = input_tree();
    cout << count_leaf_nodes(root) << endl;
}