#include <iostream>
using namespace std;

struct node
{
    int key;
    node *parent;
    node *left;
    node *right;
};

// 根
node *root;
// 空のポインタを用意することで実装を単純にする
node *NIL;

void insert(int key)
{
    node *z = (node *)malloc(sizeof(node));
    z->key = key;
    z->parent = NIL;
    z->left = NIL;
    z->right = NIL;

    node *y = NIL;
    node *x = root;

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

void printPreOrder(node *x)
{
    if (x == NIL)
    {
        return;
    }

    cout << " " << x->key;
    printPreOrder(x->left);
    printPreOrder(x->right);
}

void printInOrder(node *x)
{
    if (x == NIL)
    {
        return;
    }

    printInOrder(x->left);
    cout << " " << x->key;
    printInOrder(x->right);
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
            insert(key);
        }
        else
        {
            printInOrder(root);
            cout << endl;
            printPreOrder(root);
            cout << endl;
        }
    }

    return 0;
}
