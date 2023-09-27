#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct node {
    int key;
    struct node *parent, *left, *right;
} Node;

Node *root;

void Insert(int key) {
    Node *x = root, *y = NULL, *z;    
    z = (Node *)malloc(sizeof(Node));
    z->left = NULL;
    z->right = NULL;
    z->parent = NULL;
    z->key = key;
    //cout << root << endl;
    while (x != NULL) {
        //cout << x << endl;
        y = x;
        if (z->key < x->key) x = x->left;
        else x = x->right;
    }
    //cout << "ok" << endl;
    z->parent = y;
    //cout << y << endl;

    if (y == NULL) root = z;
    else if (z->key < y->key) y->left = z;
    else y->right = z;
}

void mid_dfs(Node *x) {
    if (x->left != NULL) mid_dfs(x->left);
    cout << " " << x->key;
    if (x->right != NULL) mid_dfs(x->right);
}

void pre_dfs(Node *x) {
    cout << " " << x->key;
    if (x->left != NULL) pre_dfs(x->left);
    if (x->right != NULL) pre_dfs(x->right);
}

void print() {
    mid_dfs(root);
    cout << endl;
    pre_dfs(root);
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string ope;
        cin >> ope;

        if (ope == "insert") {
            int k;
            cin >> k;
            Insert(k);
        }
        else {
            print();
        }
    }
}

