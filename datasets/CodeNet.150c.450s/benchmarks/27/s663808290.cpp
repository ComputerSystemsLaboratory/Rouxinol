#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while(x!=NIL){ // zを挿入する位置を探索
        y = x;
        if(z->key < x->key){ // 左部分木
            x = x->left;
        }
        else{   // 右部分木
            x = x->right;
        }
    }
    z->parent = y;
    if(y==NIL){
        root = z;
    }
    else{
        if(z->key < y->key){
            y->left = z;
        }
        else{
            y->right = z;
        }
    }
}
void inorder(Node *u){
    if(u ==NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}
void preorder(Node *u){
    if(u ==NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    string com;
    int x;
    for(int i=0; i<n;i++){
        cin >> com;
        if(com == "insert"){
            scanf("%d", &x);
            insert(x);
        }
        else if(com == "print"){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
    return 0;
}

