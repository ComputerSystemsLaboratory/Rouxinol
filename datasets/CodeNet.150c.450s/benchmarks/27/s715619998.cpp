#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#define MAX 10000
using namespace std;

struct Node{
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k){
    Node* y = NIL; //xの親
    Node* x = root;
    Node* z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    while(x != NIL){
        y = x; //親の設定
        if(z->key < x->key) x = x->left;//左の子へ移動
        else x = x->right;
    }
    z->parent = y;

    if( y == NIL) root = z;
    else if(z->key < y->key ) y->left = z; //z を y の左の子にする
    else y->right = z; //z を y の右の子にする
}

void preorder(Node* z){//先行順巡回
    printf(" %d", z->key);
    if(z->left != NIL) preorder(z->left);
    if(z->right != NIL) preorder(z->right);
}

void inorder(Node* z){
    if(z->left != NIL) inorder(z->left);
    printf(" %d", z->key);
    if(z->right != NIL) inorder(z->right);
}

void print(){
    Node* z = root;
    inorder(z);
    printf("\n");
    preorder(z);
    printf("\n");
}

int main(){
    int n, k;
    string com;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> com;
        if(com == "insert"){
            scanf("%d", &k);
            insert(k);
        }else if( com == "print"){
            print();
        }
    }

    return 0;
}
