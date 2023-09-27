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
    if (T == NIL) return;
    inorder(T->left);
    cout << ' ' << T->key;
    inorder(T->right);
}

void preorder(Node *T){
    if (T == NIL) return;
    cout << ' ' << T->key;
    preorder(T->left);
    preorder(T->right);
}

void infree(Node *T){
    if (T == NIL) return;
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
        if (x->key < z->key) x = x->right;
        else x = x->left;
    }
    z->parent = y;
    if (y == NIL) root = z;
    else if (z->key > y->key) y->right = z;
    else y->left = z;
    return;
}

Node* find(int k){
    Node *a = root;
    while (a != NIL){
        if (a->key == k){
            //cout << "yes" << endl;
            //return;
            return a;
        }
        else if (a->key < k) a = a->right;
        else if (a->key > k) a = a->left;
    }
    //cout << "no" << endl;
    return NIL;
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
        else if (s == "find"){
            cin >> k;
            //find(k);
            if (find(k) != NIL) cout << "yes" << endl;
            else cout << "no" << endl;
        }
        else if (s == "delete")
            cin >> k;
    }
    infree(root);
    return 0;
}
