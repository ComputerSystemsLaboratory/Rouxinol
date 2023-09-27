#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;
//二叉搜索树的搜索

struct Node {
    int key;
    Node *p, *l, *r;
};

Node *root, *NIL;

void insert(int k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;
    
    z = (Node*)malloc(sizeof(Node));
    z->key = k;
    z->l = NIL;
    z->r = NIL;

    while (x != NIL)  {
        y = x;
        if (x->key > z->key) {
            x = x->l;
        } else if (x->key < z->key) {
            x = x->r;
        }
    }
    
    z->p = y;
    if (y== NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->l = z;
        } else if (z->key > y->key) {
            y->r = z;
        }
    }
}

void Inorder(Node *u) {
    if (u == NIL) return;
    
    Inorder(u->l);
    cout << " " << u->key;
    Inorder(u->r);
}

void preorder(Node *u) {
    if (u == NIL) return;
    
    cout << " " << u->key;
    preorder(u->l);
    preorder(u->r);
}

Node* find(Node *u, int k) {
    while ( u != NIL && k != u->key) {
        if (k < u->key) u = u->l;
        else if (k > u->key) u = u->r;
    }
    return u;
}

int main() {
    int n, k;
    cin >> n;
    
    string com;
    for (int i = 0; i < n; i++) {
        cin >> com;
        if (com == "insert"){
            cin >> k;
            insert(k);
        } else if (com == "find") {
            cin >> k;
            if (find(root, k) == NIL) {
                cout << "no" << "\n";
            } else {
                cout << "yes" << "\n";
            }
        } else if (com == "print") {
            Inorder(root);
            cout << "\n";
            preorder(root);
            cout << "\n";
        }
    }
    
    return 0;
}

