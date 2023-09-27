#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
const long long mod = 1e9 + 7;

struct node{int key; node *p, *l, *r;};

node *nil, *root;

void preparse(node *root){
    if(root == nil) return;
    cout << " " << root->key;
    preparse(root->l);
    preparse(root->r);
}

void inparse(node *root){
    if(root == nil) return;
    inparse(root->l);
    cout << " " << root->key;
    inparse(root->r);
}

void insert(int k){
    node *y = nil;
    node *x = root;
    node *z;
    z = (node *)malloc(sizeof(node));
    z->key = k;
    z->l = nil;
    z->r = nil;
    while(x != nil){
        y = x;
        if(z->key < x->key) x = x->l;
        else x = x->r;
    }
    z->p = y;
    if(y == nil) root = z;
    else if(z->key < y->key) y->l = z;
    else y->r = z;
}

int main(){
    int n, d;
    string com;
    cin >> n;
    rep(i, n){
        cin >> com;
        if(com == "insert"){
            cin >> d;
            insert(d);
        }else if(com == "print"){
            inparse(root);
            cout << endl;
            preparse(root);
            cout << endl;
        }
    }
}
