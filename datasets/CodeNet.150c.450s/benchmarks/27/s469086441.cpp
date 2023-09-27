#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *NIL, *root;

void insert(int x) {
    Node *p = NIL;
    Node *u = root;
    Node *in = (Node *)malloc(sizeof(Node));
    in->key = x;
    in->left = NIL;
    in->right = NIL;

    while (u != NIL) {
        p = u;
        if (in->key < u->key) {
            u = u->left;
        } else {
            u = u->right;
        }
    }

    in->parent = p;
    if (p == NIL) {
        root = in;
    } else if (in->key < p->key) {
        p->left = in;
    } else {
        p->right = in;
    }
}

void printPre(Node *u) {
    if (u == NIL) {
        return;
    }

    printf(" %d", u->key);
    printPre(u->left);
    printPre(u->right);
}

void printIn(Node *u) {
    if (u == NIL) {
        return;
    }

    printIn(u->left);
    printf(" %d", u->key);
    printIn(u->right);
}

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string com;
        cin >> com;
        if (com == "insert") {
            int x;
            scanf("%d", &x);
            insert(x);
        } else if (com == "find") {
            int x;
            scanf("%d", &x);
            
        } else {
            printIn(root);
            printf("\n");
            printPre(root);
            printf("\n");
        }
    }
}
