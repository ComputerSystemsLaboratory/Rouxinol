//
//  main.cpp
//  binary_search_tree_1
//
//  Created by ???????????? on 2017/10/11.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cstdlib>

//#define NIL Nodes a.parent = -1
using namespace std;

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *nil;
Node *root;


void init(int key){
    nil = (Node *) malloc(sizeof(Node));
    nil->parent = nil->left = nil->right = nil;
    nil->key = -1;
    
    root = (Node *) malloc(sizeof(Node));
    root->key = key;
    root->left = root->right = nil;
}

Node* init_node(int key){
    Node *node = (Node *) malloc(sizeof(Node));
    node->parent = node->left = node->right = nil;
    node->key = key;
    return node;
}

void insert(Node* z){
    Node *y = nil;
    Node *x = root;
    while(x != nil){
        y = x;
        if(z->key  < x->key) x = x->left;
        else x = x->right;
    }
    
    z->parent = y;
    
    if(y==nil) root = z;
    else if (z->key < y->key) y->left = z;
    else y->right = z;
    
}

void find(Node* x,int key){
    while(x != nil && key != x->key ){
        if(key < x->key) x = x->left;
        else x = x-> right;
    }
    if (x==nil) cout << "no" << endl;
    else cout << "yes" << endl;
}

void in_parse(Node* u){
    if (u->key == -1) return;
    in_parse(u->left);
    cout <<" "<<u->key;
    in_parse(u->right);
}

void pre_order(Node* u){
    if (u->key == -1) return;
    cout <<" "<<u->key;
    pre_order(u->left);
    pre_order(u->right);
}


int main(int argc, const char * argv[]) {
    int n, i, key, find_num;
    int ini = 0;
    char command[10];
    scanf("%d", &n);
    //    Node nodes[n];
    for(i = 0; i < n; i++){
        scanf("%s", command);
        if(command[0] == 'p'){
            in_parse(root);
            cout <<endl;
            pre_order(root);
            cout<<endl;
            ini ++;
        }
        else if(command[0] == 'f') {
            scanf("%d",&find_num);
            find(root, find_num);
        }
        else{
            scanf("%d", &key);
            if(i==ini) init(key);
            else {
                Node* z = init_node(key);
                insert(z);
            }
        }
    }
    return 0;
}