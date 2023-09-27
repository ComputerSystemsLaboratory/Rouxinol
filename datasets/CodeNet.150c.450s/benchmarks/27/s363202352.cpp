#include <iostream>
#include <stdlib.h> //malloc
using namespace std;

#define M_MAX 500001

struct Node {
    int key;
    Node *right, *left, *parent;
};

void insert(int v);
void preorder(Node *u);
void inorder(Node *u);

Node *root = NULL;

int main(){
    int m, x;
    string command;

    cin >> m;

    while (m > 0) {
        cin >> command;

        if (command == "insert") {
            cin >> x;
            insert(x);
        } else if (command == "print"){
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        } else {
            cout << "Unknown command" << endl;
        }

        m--;
    }

    //dumpPreorder(root);
    return 0;
}

void insert(int v) {
    Node *n, *x, *p;
    n = (Node *)malloc(sizeof(Node));
    n->key = v;
    n->parent = n->left = n->right = NULL;

    x = root;
    p = NULL;
    while (x != NULL) {
        p = x;
        if (v < x->key)
            x = x->left;
        else
            x = x->right;
    }

    if (p == NULL) {
        root = n;
        return;
    }

    x = n;
    n->parent = p;

    if (n->key < p->key)
        p->left = n;
    else
        p->right = n;
}

void preorder(Node *u){
    if (u == NULL) return;

    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}

void inorder(Node *u){
    if (u == NULL) return;

    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}