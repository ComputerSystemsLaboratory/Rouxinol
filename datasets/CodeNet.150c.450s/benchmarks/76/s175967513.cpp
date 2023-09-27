#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct node {
    struct node *right;
    struct node *left;
    struct node *parent;
    int key;
};

typedef struct node *Node;
#define NIL NULL
Node root;

void insert(int k) {
    Node y = NIL;
    Node x = root;
    Node z;

    z = static_cast<Node>(malloc(sizeof(struct node)));
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
    } else if (z->key < y->key) {
        y->left = z;
    } else {
        y->right = z;
    }
}

int Inorder(node *x) {
    if (x->left != NIL) {
        Inorder(x->left);
    }
    cout << " " << x->key;
    if (x->right != NIL) {
        Inorder(x->right);
    }
    return 0;
}

int Preorder(node *x) {
    cout << " " << x->key;
    if (x->left != NIL) {
        Preorder(x->left);
    }
    if (x->right != NIL) {
        Preorder(x->right);
    }
    return 0;
}

bool find(node *x, int k) {
    while (x != NIL) {
        if(k == x->key){
            return true;
        }
        else if (k < x->key) {
            x = x->left;
        }
        else {
            x = x->right;
        }
    }
    return false;
}

int main() {
    int n, tmp;
    string com;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> com;
        if (com == "insert") {
            cin >> tmp;
            insert(tmp);
        } else if (com == "print") {
            Inorder(root);
            cout << endl;
            Preorder(root);
            cout << endl;
        } else if (com == "find") {
            cin >> tmp;
            find(root, tmp);
            if (find(root, tmp)) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }


    return 0;
}

