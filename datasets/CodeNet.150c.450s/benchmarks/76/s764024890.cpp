#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
    int key;
    Node *right, *left, *parent;
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

    while(x != NIL)
    {
        y = x;
        if(z->key < x->key)
        {
            x = x->left;
        }
        else
        {
            x = x->right;
        }
    }
    z->parent = y;
    if(y == NIL)
    {
        root = z;
    }
    else
    {
        if(z->key < y->key)
            y->left = z;
        else
            y->right = z;
    }
}
void inorder(Node *u)
{
    if(u == NIL)   return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}
void preorder(Node *u)
{
    if(u == NIL)    return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}
Node *find(Node *x, int k)
{
    while(x != NIL && k != x->key)
    {
        if(k<x->key)
            x = x->left;
        else
            x = x->right;
    }
    return x;
}
int main()
{
    int n, m;
    string s;
    cin >> n;

    while(cin >> s)
    {
        if(s[0] == 'i')
        {
            cin >> m;
            insert(m);
        }
        else if(s[0] == 'p')
        {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
        else if(s[0] == 'f')
        {
            cin >> m;
            if(find(root, m) != NIL)
                cout << "yes" << endl;
            else
                cout << "no" << endl;

        }
    }
    return 0;
}