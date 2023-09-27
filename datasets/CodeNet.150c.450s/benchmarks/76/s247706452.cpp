#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *parent;
    Node *left;
    Node *right;
};

Node *root;
Node *nil;

void InsertNode(int key)
{
    Node *x = root;
    Node *y = nil;
    Node *z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->parent = nil;
    z->left = nil;
    z->right = nil;

    while (x != nil)
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

    if (y == nil)
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

    return;
}

void FindNode(int key, Node *x)
{
    if (x == nil)
    {
        cout << "no" << endl;
        return;
    }

    if (key == x->key)
    {
        cout << "yes" << endl;
        return;
    }
    else if (key < x->key)
    {
        FindNode(key, x->left);
    }
    else
    {
        FindNode(key, x->right);
    }

    return;
}

void PrintInOrder(Node *x)
{
    if (x == nil)
    {
        return;
    }

    PrintInOrder(x->left);
    cout << " " << x->key;
    PrintInOrder(x->right);

    return;
}

void PrintPreOrder(Node *x)
{
    if (x == nil)
    {
        return;
    }

    cout << " " << x->key;
    PrintPreOrder(x->left);
    PrintPreOrder(x->right);

    return;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "insert")
        {
            int key;
            cin >> key;
            InsertNode(key);
        }
        else if (s == "find")
        {
            int key;
            cin >> key;
            FindNode(key, root);
        }
        else
        {
            PrintInOrder(root);
            cout << endl;
            PrintPreOrder(root);
            cout << endl;
        }
    }

    return 0;
}
