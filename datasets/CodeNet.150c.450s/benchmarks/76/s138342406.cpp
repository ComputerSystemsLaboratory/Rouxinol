#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;   // 宣言時ポインタにはNULL(0x0)が入っているため, 木の根が設定されていなければroot == NILとなる.

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
        }
        else {
            y->right = z;
        }
    }
}

bool find(int k) {
    Node *u = root;
    while (u != NIL) {
        if (u->key > k) u = u->left;
        else if (u->key < k) u = u->right;
        else return true;
    }
    return false;
}

void inorder(Node *u) {
    if (u == NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u) {
    if (u == NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main() {
    int n, i, x;
    string com;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        cin >> com;
        if (com == "insert") {
            scanf("%d", &x);
            insert(x);
        } else if (com == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } else {
            scanf("%d", &x);
            if (find(x)) printf("yes\n");
            else printf("no\n");
        }
    }

    return 0;
}
