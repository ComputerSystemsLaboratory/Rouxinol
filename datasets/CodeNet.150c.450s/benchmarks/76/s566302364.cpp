#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int key;
    Node *parent, *left, *right;
};

Node *NIL, *root;

void insert(int key)
{
    Node *x, *y, *z;

    z = new Node;
    z->key = key;
    z->left = NIL;
    z->right = NIL;
    y = NIL;
    x = root;
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

Node *find(int key)
{
    Node *x;
    x = root;

    while (x != NIL)
    {
        if (key < x->key)
        {
            x = x->left;
        }
        else if (key > x->key)
        {
            x = x->right;
        }
        else
        {
            break;
        }
    }

    return x;
}

// 先行順巡回
void preorder(Node *node)
{
    if (node == NIL)
        return;
    cout << " " << node->key;
    if (node->left != NIL)
        preorder(node->left);
    if (node->right != NIL)
        preorder(node->right);
}

// 中間順巡回
void inorder(Node *node)
{
    if (node == NIL)
        return;
    if (node->left != NIL)
        inorder(node->left);
    cout << " " << node->key;
    if (node->right != NIL)
        inorder(node->right);
}

void print()
{
    inorder(root);
    cout << "\n";
    preorder(root);
    cout << "\n";
}

int main()
{
    int i, m, key;
    string command;

    cin >> m;
    for (i = 0; i < m; i++)
    {
        cin >> command;
        if (command[0] == 'i')
        {
            cin >> key;
            insert(key);
        }
        else if (command[0] == 'f')
        {
            cin >> key;
            if (find(key) != NIL)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
        else
        {
            print();
        }
    }

    return 0;
}
