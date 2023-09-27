#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

struct node{
    int key;
    node* parent,*left,*right;
};

node* root, *nil;

void insert(int k){
    node* x = root;
    node* it = nil;
    node* z;

    z = (node*)malloc(sizeof(node));
    z->key = k;
    z->left = nil;
    z->right = nil;

    while(x != nil){
        it = x;
        if(z->key < x->key)
            x = x->left;
        else
            x = x->right;
    }

    z->parent = it;
    if(it == nil)
        root = z;
    else{
        if(z->key < it->key)
            it->left = z;
        else
            it->right = z;
    }
}

void inorder(node* u){
    if(u == nil)
        return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}

void preorder(node* u){
    if(u == nil)
        return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}

int main(){
    int n,x;
    string cmd;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> cmd;
        if(cmd == "insert"){
            scanf("%d",&x);
            insert(x);
        }else if(cmd == "print"){
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }
}
