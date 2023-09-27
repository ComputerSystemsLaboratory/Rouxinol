// 二分探索木：探索
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

Node *find(Node *u, int k) {
    while (u != NIL && k != u->key) {
        if(k < u->key) 
            u = u->left;
        else
            u = u->right;
    }
    return u;
}

void insert(int k) {
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
        } else {
            x = x->right;
        }
    }

    z->parent = y;
    if (y == NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

void inoder(Node *u) {
    if (u == NIL) return;
    inoder(u->left);
    printf(" %d", u->key);
    inoder(u->right);
}

void preoder(Node *u) {
    if (u == NIL) return;
    printf(" %d", u->key);
    preoder(u->left);
    preoder(u->right);
}

int main() {
    int n, i, x;
    string com;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        cin >> com;
        if(com == "insert") {
            scanf("%d", &x);
            insert(x);
        }

        else if (com == "print") {
            inoder(root);
            printf("\n");
            preoder(root);
            printf("\n");
        }

        else if (com == "find") {
            scanf("%d", &x);
            Node *t = find(root, x);
            if (t != NIL) printf("yes\n");
            else printf("no\n");
        }
    }

    return 0;
}

