#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

struct Node{
    int key;
    Node *parent, *left, *right;
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

    while(x != NIL){
        y = x;
        if(z->key < x->key) x = x->left; 
        else x = x->right;
    }

    z->parent = y;

    if(y == NIL) root = z;
    else if(z->key < y->key) y->left = z;
    else y->right = z;
}

void inorder(Node *u){
    if(u == NIL) return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}

void preorder(Node *u){
    if(u == NIL) return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}

int main(){
    int n;
    cin >> n;

    char com[10];
    int x;

    

    rep(i,n){
        scanf("%s",com);
        if(com[0] == 'i'){
            scanf("%d", &x);
            insert(x);
        }else{
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

    return 0;
}
