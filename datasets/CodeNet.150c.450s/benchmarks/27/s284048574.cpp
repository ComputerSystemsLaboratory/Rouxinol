#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k)
{
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL)
    {
        y = x; // Keep the node of a candidate for the parent of the Node z;
        if (z->key < x->key)
        {
            x = x->left;
        }
        else
        {
            x = x->right;
        }
    }

    // Construct a double link between the Node z and its parent;
    z->parent = y;
    if (y == NIL)
    {
        root = z;
    }
    else
    {
        if (z->key < y->key)
        {
            y->left = z;
        }
        else
        {
            y->right = z;
        }
    }
}

void inorder(Node *u)
{
    if (u == NIL)
    {
        return;
    }
    else
    {
        inorder(u->left);
        cout << " " << u->key;
        inorder(u->right);
    }
}

void preorder(Node *u)
{
    if (u == NIL)
    {
        return;
    }
    else
    {
        cout << " " << u->key;
        preorder(u->left);
        preorder(u->right);
    }
}

int main(int argc, char const *argv[])
{
    string com = "";
    int k = 0;

    int n = 0;
    cin >> n;

    // vector<int> a(n, 0);
    for (size_t i = 0; i < n; ++i)
    {

        cin >> com;
        if (com == "insert")
        {
            cin >> k;
            insert(k);
        }
        else
        {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

    return 0;
}

