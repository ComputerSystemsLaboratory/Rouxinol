#include <iostream>
#include <bits/stdc++.h>
#define MAX_SIZE 500010
#define INFTY 2000000000
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k) {
    Node *z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    Node *y = NIL;
    Node *x = root;
    while (x != NIL) {
        y = x;
        if (z->key < x->key) x = x->left;
        else x = x->right;
    }
    z->parent = y;
    if (y == NIL) root = z;
    else if (z->key < y->key) y->left = z;
    else y->right = z;
}

Node* find(int k) {
    Node *x = root;
    while (x != NIL && k != x->key) {
        if (k < x->key) x = x->left;
        else x = x->right;
    }
    return x;
}

void findPrint(int k) {
    if (find(k) == NIL) cout << "no";
    else cout << "yes";
    cout << endl;
}

void preorder(Node* u) {
    if (u == NIL) return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}

void inorder(Node* u) {
    if (u == NIL) return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);    
}

void postorder(Node* u) {
    if (u == NIL) return;
    postorder(u->left);
    postorder(u->right);
    cout << " " << u->key;
}

void print() {
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
}

int main(){
    int n, k;
    char cmd[10];
    root = NIL;
    cin >> n;
    for (int i=0; i < n; i++) {
        scanf("%s%d\n", cmd, &k);
        // cout << cmd << k << endl;
        if (cmd[0] == 'i') insert(k);
        else if (cmd[0] == 'f') findPrint(k);
        else if (cmd[0] == 'p') print();
    }
    return 0;
} 
