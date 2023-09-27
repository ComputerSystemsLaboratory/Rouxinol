#include <iostream>

using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
};

Node *root, *NIL;

Node* newNode(int key) {
    Node *node = new Node();
    node->key = key;
    node->left = NIL;
    node->right = NIL;
    return node;
}

void insert(int key) {
    Node *x = root, *y = NIL;
    while (x != NIL) {
        y = x;
        if (key < x->key)
            x = x->left;
        else
            x = x->right;
    }
    Node *z = newNode(key);
    if (y == NIL)
        root = z;
    else if (key < y->key)
        y->left = z;
    else
        y->right = z;
}

void inorder(Node *t) {
    if (t == NIL)
        return;
    inorder(t->left);
    cout << " " << t->key;
    inorder(t->right);
}

void preorder(Node *t) {
    if (t == NIL)
        return;
    cout << " " << t->key;
    preorder(t->left);
    preorder(t->right);
}

int main() {
    int n, v;
    string s;
    root = NIL;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "insert") {
            cin >> v;
            insert(v);
        }
        if (s == "print") {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

    return 0;
}
