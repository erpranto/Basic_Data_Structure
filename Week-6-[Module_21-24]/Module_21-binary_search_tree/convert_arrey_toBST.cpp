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

void level_order(Node *root)
{
    if (!root)
        return;
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
    level_order(root);
    return 0;
}