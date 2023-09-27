#include <iostream>
#include <cstdio>
using namespace std;

//const int NIL = -1;

struct Node{
    Node *parent, *left, *right;
    int key;
};
int n, m;
char cmd[20];
Node *root, *NIL;
void preParse(Node *u)
{
    if(u==NIL) return;
    printf(" %d", u->key);
    preParse(u->left);
    preParse(u->right);
}
void inParse(Node *u)
{
    if(u==NIL) return;
    inParse(u->left);
    printf(" %d", u->key);
    inParse(u->right);
}
void Insert(int k)
{
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;//插入的结点
    z->left = NIL;
    z->right = NIL;

    while(x!=NIL)
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
    if(y==NIL)
    {
        root = z;
    }
    else
    {
        if(z->key < y->key)
        {
            y->left = z;
        }
        else
        {
            y->right = z;
        }
    }
}
int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> cmd;
        if(cmd[0]=='i')
        {
            cin >> m;
            Insert(m);
        }
        else
        {
            inParse(root);
            cout << endl;
            preParse(root);
            cout << endl;
        }
    }
    return 0;
}

