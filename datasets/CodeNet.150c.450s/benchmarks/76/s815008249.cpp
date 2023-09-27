#include <bits/stdc++.h>
using namespace std;

struct Node
{
    long int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

Node *findNode(long int k)
{
    Node *x = root;
    while (x != NIL && k != x->key)
    {
        if (k < x->key)
        {
            x = x->left;
        }
        else
        {
            x = x->right;
        }
    }
    return x;
}

void insert(long int k)
{
    Node *y = NIL;
    Node *x = root;

    Node *z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL)
    {
        y = x;
        if (z->key < x->key)
        {
            x = x->left;
        }
        else
        {
            x = x->right;
        }
    }

    z->parent = y;

    if (y == NIL)
    {
        root = z;
    }
    else if (z->key < y->key)
    {
        y->left = z;
    }
    else
    {
        y->right = z;
    }
}

void inorder(Node *r)
{
    if (r == NIL)
    {
        return;
    }
    else
    {
        inorder(r->left);
        cout << " " << r->key;
        inorder(r->right);
    }
}

void preorder(Node *r)
{
    if (r == NIL)
    {
        return;
    }
    else
    {
        cout << " " << r->key;
        preorder(r->left);
        preorder(r->right);
    }
}

int main(int argc, char const *argv[])
{
    int m = 0;
    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        string cmd = "";
        cin >> cmd;
        if (cmd == "insert")
        {
            int k = 0;
            cin >> k;
            insert(k);
        }
        else if (cmd == "find")
        {
            int k = 0;
            cin >> k;
            Node *res = findNode(k);
            if (res == NIL)
            {
                cout << "no" << endl;
            }
            else
            {
                cout << "yes" << endl;
            }
        }
        else if (cmd == "print")
        {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
    return 0;
}

