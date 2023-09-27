#include <iostream>
#include <string>
using namespace std;

class Node {
    public:
        int key;
        Node *parent, *left, *right;
};

Node *NIL;
Node *root = NIL;

void insert(int k) {
    Node *x = root;
    Node *y = NIL;
    Node *z = new Node;

    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL) {
        y = x;
        if (z->key < x->key) x = x->left;
        else x = x->right;
    }
    z->parent = y;
    if (y == NIL) root = z;
    else {
        if (z->key < y->key) y->left = z;
        else y->right = z;
    }
}
void inorder(Node *u) {
    if (u == NIL) return;
    inorder(u->left);
    cout << ' ' << u->key;
    inorder(u->right);
}
void preorder(Node *u) {
    if (u == NIL) return;
    cout << ' ' << u->key;
    preorder(u->left);
    preorder(u->right);
}

Node *find(Node *r, int k) {
    while (r != NIL && r->key != k) {
        if (k < r->key) r = r->left;
        else r = r->right;
    }
    return r;
}

int main() {
    int n, value;
    string com;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> com;
        if (com == "insert") {
            cin >> value;
            insert(value);
        } else if (com == "find") {
            cin >> value;
            Node *res = find(root, value);
            if (res != NIL) cout << "yes" << endl;
            else cout << "no" << endl;
        } else if (com == "print") {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
    return 0;
}
