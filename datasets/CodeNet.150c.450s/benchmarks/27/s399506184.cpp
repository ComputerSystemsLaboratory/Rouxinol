#include <iostream>
using namespace std;

struct Node{
    int key;
    Node *parent;
    Node *left;
    Node *right;
};

Node *root, *NIL;

void inorder(Node *T){
    if (T == NIL)
        return;
    inorder(T->left);
    cout << ' ' << T->key;
    inorder(T->right);
}

void preorder(Node *T){
    if (T == NIL)
        return;
    cout << ' ' << T->key;
    preorder(T->left);
    preorder(T->right);
}

void infree(Node *T){
    if (T == NIL)
        return;
    infree(T->left);
    delete T;
    infree(T->right);
}

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;
    z = new Node;
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    while (x != NIL){
        y = x;
        if (x->key < z->key)
            x = x->right;
        else
            x = x->left;
    }
    z->parent = y;
    if (y == NIL)
        root = z;
    else if (z->key > y->key)
        y->right = z;
    else
        y->left = z;
}

int main(){
    int m;
    cin >> m;
    string s;
    int k;
    for (int i = 0; i < m; i++){
        cin >> s;
        if (s == "insert"){
            cin >> k;
            insert(k);
        }
        else if (s == "print"){
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
    infree(root);
    return 0;
}
