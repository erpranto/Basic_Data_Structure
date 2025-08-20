//print_binary_tree
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

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

int max_depth(Node *root)
{
    if (root == NULL)
        return 0;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input();
    int total_node = count_nodes(root);
    int depth = max_depth(root);
    int power = 1;  
    //alternative of loop is ---- 
    //int expected_nodes = (1 << depth) - 1;
    for (int i = 0; i < depth; i++)
    {
        power = power * 2;
    }
    int expected_nodes = power - 1;
    total_node == expected_nodes ? cout << "YES" : cout << "NO";
    return 0;
}