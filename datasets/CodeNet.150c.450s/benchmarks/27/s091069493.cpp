#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
using namespace std;

struct Node{
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;
    
    z = (Node* )malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    
    while(x != NIL) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        }else {
            x = x->right;
        }
    }
    
    z->parent = y;
    if(y == NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

void inParse(Node *a) {
    if (a == NIL) return;
    inParse(a->left);
    cout << " " << a->key;
    inParse(a->right);
}
void preParse(Node *a) {
    if (a == NIL) return;
    cout << " " << a->key;
    preParse(a->left);
    preParse(a->right);
}

int main() {
    int n, i, x;
    string com;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        cin >> com;
        if (com == "insert" ) {
            scanf("%d", &x);
            insert(x);
        } else if (com == "print") {
            inParse(root);
            cout << endl;
            preParse(root);
            cout << endl;
        }
    }
    
    return 0;
}
