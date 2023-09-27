#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Node {
    int key;
    Node *r, *l, *p;
};

Node *root, *NIL;

void insert(int k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;
    
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->l = NIL;
    z->r = NIL;
    
    while(x != NIL) {
        y = x;
        if(z->key < x->key) x = x->l;
        else x = x->r;
    }
    z->p = y;
    if(y == NIL) {
        root = z;
    } else {
        if(z->key < y->key) y->l = z;
        else y->r = z;
    }
}

void inorder(Node *u) {
    if(u != NIL) {
        inorder(u->l);
        cout << ' ' << u->key;
        inorder(u->r);
    }
}

void preorder(Node *u) {
    if(u != NIL) {
        cout << ' ' << u->key;
        preorder(u->l);
        preorder(u->r);
    }
}

Node *find(Node *u, int k) {
    while(u != NIL && k != u->key) {
        if(k <u->key) u = u->l;
        else u = u->r;
    }
    return u;
}

int main(void) {
    int n, x;
    string order;
    
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> order;
        if(order == "insert") {
            cin >> x;
            insert(x);
        } else if(order == "print") {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        } else if(order[0] == 'f') {
            cin >> x;
            Node *t = find(root,x);
            if(t != NIL) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
    
    return 0;
    
}
