#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int value;
    Node *parent, *left, *right;
} Node;

Node *root, *NIL;

Node * Find(Node *u, int k)
{
    while (u != NIL && k != u->value) {
        if (k < u->value) u = u->left;
        else u = u->right;
    }
    return u;
}
void Insert(int k)
{
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->value = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL) {
        y = x;
        if (z->value < x->value) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    z->parent = y;
    if (y == NIL) {
        root = z;
    } else {
        if (z->value < y->value) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}
void inorder(Node *u)
{
    if (u == NIL) return;
    inorder(u->left);
    cout << " " << u->value;
    inorder(u->right);
}
void preorder(Node *u)
{
    if (u == NIL) return;
    cout << " " << u->value;
    preorder(u->left);
    preorder(u->right);
}

int main(void)
{
    int n, i, x;
    string com;

    cin >> n;

    for (i = 0; i < n; ++i) {
        cin >> com;
        if (com[0] == 'f') {
            cin >> x;
            Node *t = Find(root, x);
            if (t != NIL) cout << "yes" << endl;
            else cout << "no" << endl;
        } else if (com == "insert") {
            cin >> x;
            Insert(x);
        } else if (com == "print") {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
    return 0;
}

