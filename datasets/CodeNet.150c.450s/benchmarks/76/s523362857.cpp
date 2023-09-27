#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
using namespace std;

struct Node {
    int key = 0;
    Node *parent, *left, *right;
};

Node *NIL;

struct Tree {
    Node *root;
};

void insert(Tree *T, int key) {
    Node *n = (Node *)malloc(sizeof(Node));
    n->key = key;
    n->parent = NIL;
    n->left = NIL;
    n->right = NIL;
    
    if (T->root == NIL) {
        T->root = n;
        return;
    }
    
    Node *x;
    x = T->root;
    bool continued = true;
    while (continued) {
        if (x->key >= key) {
            if (x->left != NIL) {
                x = x->left;
                continue;
            }
            
            n->parent = x;
            x->left = n;
            continued = false;
            return;
        }
        
        if (x->key <= key) {
            if (x->right != NIL) {
                x = x->right;
                continue;
            }
            
            n->parent = x;
            x->right = n;
            continued = false;
            return;
        }
    }
};

bool find(Node *N, int key) {
    Node *x;
    x = N;
    
    while(x != NIL && x->key != key) {
        if (key <= x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    
    if (x == NIL) {
        return false;
    }

    return true;
}

void inorder(Node *N) {
    if (N == NIL) {
        return;
    }

    inorder(N->left);
    cout << " " << N->key;
    inorder(N->right);
}

void preorder(Node *N) {
    if (N == NIL) {
        return;
    }
    
    cout << " " << N->key;
    preorder(N->left);
    preorder(N->right);
}

int main() {
    int N;
    scanf("%d", &N);
    Tree *T = (Tree *)malloc(sizeof(Tree));
    T->root = NIL;

    char command[10];
    int key;
    
    for (int i = 0; i < N; i++) {
        scanf("%s %d", command, &key);
        
        if (!strcmp(command, "insert")) {
            insert(T, key);
            continue;
        }
        
        if (!strcmp(command, "find")) {
            bool result = find(T->root, key);
            if (result) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
            continue;
        }
        
        if (!strcmp(command, "print")) {
            inorder(T->root);
            cout << endl;
            preorder(T->root);
            cout << endl;
            continue;
        }
    }
    
    return 0;
}

