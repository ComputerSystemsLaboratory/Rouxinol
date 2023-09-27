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

//Node nodes[500005];

void init(int key){
    nil = (Node *) malloc(sizeof(Node));
    nil->parent = nil->left = nil->right = nil;
    nil->key = -1;
    
    root = (Node *) malloc(sizeof(Node));
    root->key = key;
    root->left = root->right = nil;
//    nodes[0] = *root;
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
    
    //is this necessary?
//    if (y == nil) root = z;
    
    
    if(y==nil) root = z;
    else if (z->key < y->key) y->left = z;
    else y->right = z;
    
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
    int n, i, key;
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
        else{
            scanf("%d", &key);
            if(i==ini) init(key);
            else {
                Node* z = init_node(key);
                insert(z);
            }
        }
    }
    
//    in_parse(root);
//    cout << root->key <<endl << root->left->key <<endl;
//    std::cout << "Hello, World!\n";
    return 0;
}