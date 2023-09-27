#include <bits/stdc++.h>
using namespace std;

struct Node {
    long key;
    Node *parent, *left, *right;
};

struct Node *root, *NIL;

void preParse(struct Node *id) {
    if (id == NIL) {
        return;
    }
    cout << " " << id->key;
    preParse(id->left);
    preParse(id->right);
}

void inParse(struct Node *id) {
    if (id == NIL) {
        return;
    }
    inParse(id->left);
    cout << " " << id->key;
    inParse(id->right);
}

 Node * find(long k) {
    Node *x = root;

    while (x != NIL) {
        if (x->key == k) {
            return x;
        }
        else {
            if(k < x->key) {
                x = x->left;
            }
            else {
                x = x->right;
            }
        }
    }
    return x;
}

void insert(long k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        }
        else {
            x = x->right;
        }
    }

    z->parent = y;
    if (y == NIL) {
        root = z;
    }
    else {
        if (z->key < y->key) {
            y->left = z;
        }
        else {
            y->right = z;
        }
    }
}

int main() {
    long m;
    cin >> m;

    char com[10];

    for (long i = 0; i < m; i++) {
        cin >> com;
        if (com[0] == 'p') {
            inParse(root);
            cout << endl;
            preParse(root);
            cout << endl;
        }
        else if (com[0] == 'f') {
            long key;
            cin >> key;
            Node *t = find(key);
            if (t != NIL) {
                cout << "yes" << endl;
            }
            else {
                cout << "no" << endl;
            }
        }
        else if (com[0] == 'i'){
            long key;
            cin >> key;
            insert(key);
        }
    }

    return 0;
}

