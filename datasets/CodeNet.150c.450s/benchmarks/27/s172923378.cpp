#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Node{
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;
    z = (Node*)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while(x!=NIL){
        y = x;
        if(z->key < x->key) x = x->left;
        else x = x->right;
    }
    z->parent = y;
    if(y==NIL) root = z;
    else{
        if(y->key > z->key) y->left = z;
        else y->right = z;
    }

}

void inorder(Node *u){
    if(u==NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u){
    if(u==NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        string str;
        int d;
        cin>>str;
        if(str=="insert"){
            scanf("%d", &d);
            insert(d);
        }
        else{
            inorder(root);
            cout<<endl;
            preorder(root);
            cout<<endl;
        }
        
    }
}

