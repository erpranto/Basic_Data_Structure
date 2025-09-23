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

Node *convert_arrey_to_bst(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *lroot = convert_arrey_to_bst(a, n, l, mid - 1);
    Node *rroot = convert_arrey_to_bst(a, n, mid + 1, r);
    root->left = lroot;
    root->right = rroot;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Node *root = convert_arrey_to_bst(a, n, 0, n - 1);
    return 0;
}