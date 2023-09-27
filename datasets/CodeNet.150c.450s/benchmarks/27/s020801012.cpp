#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
struct Node
{
    int key;
    Node *right, *left, *parent;
};
Node *root;
void insert(int k)
{
    Node *y = NULL;
    Node *x = root;//
    Node *z;
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NULL;
    z->right = NULL;
    while (x)
    {
        y = x;//????????¶??????
        if (z->key<x -> key)
            x = x->left;//?§???¨????????????
        else
            x = x->right;//?§???¨????????????
    }
    z->parent = y;
    if (y == NULL)//??????????????¶
        root = z;
    else
        if (z->key<y->key)
            y->left = z;//?°?z??????y???????????????
        else
            y->right = z;//?°?z??????y???????????????
}
void inorder(Node *u)//????????????
{
    if (u == NULL)
        return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}
void preorder(Node *u)//????????????
{
    if (u == NULL)
        return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}
int main()
{
    int n;
    cin >> n;
    string com;
    for (int i = 0; i<n; i++)
    {
        cin >> com;
        if (com == "insert")
        {
            int x;
            cin >> x;
            insert(x);
        }
        else if (com == "print")
        {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
    return 0;
}