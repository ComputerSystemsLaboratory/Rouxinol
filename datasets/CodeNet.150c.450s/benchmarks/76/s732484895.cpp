// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <numeric>
#include <set>
#include <queue>
#include <cstdio>
using namespace std;
#define rep(i, n) for(int i=0;i<n;i++)
#define irep(i, n) for(int i=n-1;i>=0;i--)
#define lrep(i, n) for(long long i=0;i<n;i++)
typedef long long ll;
typedef vector<long long> llv;
typedef vector<vector<long long> > llvv;
#define MAX 100000

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
        if(z->key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    z->parent = y;
    if(y == NIL) root = z;
    else{
        if(z->key < y->key){
            y->left = z;
        }else{
            y->right = z;
        }
    }
}

Node * find(Node *u, int k){
    while(u != NIL && k != u->key){
        if(k < u->key){
            u = u->left;
        }else{
            u = u->right;
        }
    }
    return u;
}

void inorder(Node *u){
    if(u == NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u){
    if(u == NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main(){
    int n,i,x;
    string com;
    scanf("%d", &n);
    rep(i,n){
        cin >> com;
        if (com[0] == 'f'){
            scanf("%d", &x);
            Node *t = find(root, x);
            if(t!=NIL)printf("yes\n");
            else printf("no\n");
        }else if(com == "insert"){
            scanf("%d", &x);
            insert(x);
        }else if (com == "print"){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
}
