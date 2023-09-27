#include<bits/stdc++.h>
using namespace std;


struct Node {
    int key;
    Node *parent,*left,*right;
    };

Node *root,*NIL;

void insert(int key) {
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->right = NIL;
    z->left = NIL;

    while(x != NIL) {
        y = x;
        if(z->key < x->key) {
            x = x->left;
        }else {
            x = x->right;
        }
    }

    z->parent = y;
    if(y == NIL) {
        root = z;
    }else {
        if(z->key < y->key) {
            y->left = z;
        }else {
            y->right = z;
        }
    }
}

Node *find(Node *u,int key) {
    while(u != NIL && key != u->key) {
        if(key < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

void inorder(Node *u) {
    if(u == NIL) return;
    inorder(u->left);
    cout << " " << u->key;
    inorder(u->right);
}

void preorder(Node *u) {
    if(u == NIL) return;
    cout << " " << u->key;
    preorder(u->left);
    preorder(u->right);
}




int main() {

    int N,k;
    cin >> N;
    string s;
    

    for(int i = 0;i < N; i++) {
        cin >> s;
        if(s == "find") {
            cin >> k;
            Node *t = find(root,k);
            if(t != NIL) cout << "yes" << endl;
            else cout << "no" << endl;
        }else if(s == "insert") {
            cin >> k;
            insert(k);
        }else {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

}

