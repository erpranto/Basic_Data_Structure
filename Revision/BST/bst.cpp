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
        Node *par = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft = NULL, *myright = NULL;
        if (l != -1)
            myleft = new Node(l);
        if (r != -1)
            myright = new Node(r);
        par->left = myleft;
        par->right = myright;
        if (par->left)
            q.push(par->left);
        if (par->right)
            q.push(par->right);
    }
    return root;
}

bool search(Node *root, int val) // O(logN)
{
    if (!root)
        return false;
    if (root->val == val)
        return true;
    if (val < root->val)
        return search(root->left, val);
    else
        return search(root->right, val);
}

void insert(Node *&root, int val)  //O(N*h)
{
    if (root == NULL)
    {
        root = new Node(val);
        return;
    }
    if (root->val > val)
    {
        if (root->left == NULL)
            root->left = new Node(val);
        else
            insert(root->left, val);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(val);
        else
            insert(root->right, val);
    }
}

void level_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    if (search(root, val))
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
    insert(root, val);
    level_order(root);
    return 0;
}