#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int key) {
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = new Node;
    z->key = key;
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

// void find(Node *u, int key) {
//     if (key == u->key) {
//         printf("yes\n");
//         return;
//     } else if (key < u->key && u->left != NIL) {
//         find(u->left, key);
//     } else if (key > u->key && u->right != NIL) {
//         find(u->right, key);
//     } else {
//         printf("no\n");
//         return;
//     }
// }

Node *find(Node *u, int key) {
    while (u != NIL && key != u->key) {
        if (key < u->key) { u = u->left; }
        else { u = u->right; }
    }
    return u;
}

void inorder(Node *u) {
    if (u == NIL) { return; }
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u) {
    if (u == NIL) { return; }
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        int key;
        if (command == "insert") {
            scanf("%d", &key);
            insert(key);
        } else if (command == "find") {
            scanf("%d", &key);
            // find(root, key);
            if (find(root, key) != NIL) { printf("yes\n"); }
            else { printf("no\n"); }
        } else if (command == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }

    return 0;
}
