#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node {
    int key;
    Node *right, *left, *parent;
};

Node *root, *nil;

Node *find(Node *u, int k){
    while(u != nil && k != u->key){
        if(k < u->key) u = u->left;
        else u = u->right;
    }

    return u;
}

void insert(int k){
    Node *y = nil; // xの親
    Node *x = root; // 現在の接点(挿入するべき場所)
    Node *z; // 挿入する接点

    // zの初期化
    z = new Node;
    z->key = k;
    z->left = nil;
    z->right = nil;

    while(x != nil){
        y = x;
        if(z->key < x->key){
            x = x->left;
        }
        else{
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
    int n;    
    scanf("%d", &n);

    for(int i=0; i<n; ++i){
        string com;
        cin >> com;

        if(com == "find"){
            int x;
            scanf("%d", &x);
            Node *t = find(root, x);
            if(t != nil) printf("yes\n");
            else printf("no\n");
        }
        else if(com == "insert"){
            int x;
            scanf("%d", &x);
            insert(x);
        }
        else{
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }

    return 0;
}
