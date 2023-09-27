#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *right, *left, *parent;
};

Node *root, *nil;

void insert(int k){
    Node *y = nil; // xの親
    Node *x = root; // 現在の節点
    Node *z; // 挿入する節点

    // zの初期化
    z = new Node;
    z->key = k;
    z-> left = nil;
    z-> right = nil;

    // xを一番下まで持っていく
    while(x != nil){
        y = x;
        if(z->key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }

    z->parent = y;
    if(y == nil) root = z;
    else{
        if(z->key < y->key) y->left = z;
        else y->right = z;
    }
}

void inorder(Node *u){
    if(u == nil) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u){
    if(u == nil) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main(){
    int m, x;
    cin >> m;

    for(int i=0; i<m; ++i){
        string com;
        cin >> com;
        if(com == "insert"){
            scanf("%d", &x);
            insert(x);
        }else if(com == "print"){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
        
    }

    return 0;
}
