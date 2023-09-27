#include <bits/stdc++.h> 

using namespace std;

typedef long long ll;

struct Node {
    int key;
    Node *p, *l, *r;
};

Node *root, *NIL;

Node* find(Node* u, int k) {
    while (u != NIL && k != u->key) {
        if (k < u->key)
            u = u->l;
        else
            u = u->r;
    }
    return u;
}

void insert(int k) {
    Node *y = NIL, *x = root, *z;
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->l = NIL;
    z->r = NIL;

    while (x != NIL) {
        y = x;
        if (z->key < x->key)
            x = x->l;
        else
            x = x->r;
    }

    z->p = y;
    if (y == NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->l = z;
        } else {
            y->r = z;
        }
    }
}

void inorder(Node* u) {
    if (u == NIL) return;
    inorder(u->l);
    cout << " " << u->key;
    inorder(u->r);
}

void preorder(Node* u) {
    if (u == NIL) return;
    cout << " " << u->key;
    preorder(u->l);
    preorder(u->r);
}

int main() {
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        string com; cin >> com;

        if (com[0] == 'f') {
            int x; cin >> x;
            Node* t = find(root, x);
            if (t != NIL) cout << "yes" << endl;
            else cout << "no" << endl;
        } else if (com == "insert") {
            int x; cin >> x;
            insert(x);
        } else if (com == "print") {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
}

