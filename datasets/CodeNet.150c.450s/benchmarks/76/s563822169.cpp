#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insertx (int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while(x != NIL){
        y = x;
        if(z->key < x->key){
            x = x->left;
        } else {
            x = x->right;
        }
    }

    z->parent = y;

    if(y == NIL){
        root = z;
    } else {
        if (z->key < y->key){
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

Node * findx(int k){
    Node *x = root;
    while(x != NIL && x->key != k){
        if(x->key > k){
            x = x->left;
        } else {
            x = x->right;
        }
    }
    return x;
}

void preOrder(Node *z){
    if (z == NIL){
        return;
    }
    cout << " " << z->key;
    preOrder(z->left);
    preOrder(z->right);
}

void inOrder(Node *z){
    if (z == NIL){
        return;
    }
    inOrder(z->left);
    cout << " " << z->key;
    inOrder(z->right);
}

int main() {
    int m; cin >> m;

    rep(i, m){
        string S; cin >> S;
        if(S == "insert"){
            int k; cin >> k;
            insertx(k);
        } else if(S == "print"){
            inOrder(root);
            cout << endl;
            preOrder(root);
            cout << endl;
        } else {
            int k; cin >> k;
            Node *x = findx(k);
            if(x == NIL){
                cout << "no" << endl;
            } else {
                cout << "yes" << endl;
            }
        }
    }

    return 0;
}
