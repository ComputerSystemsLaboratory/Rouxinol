//
//  ALDS1_8_A.cpp
//  AizuOnlineJudge
//
//  Created by jiji on 2019/09/12.
//  Copyright © 2019 jiji4000. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node{
    int key;
    Node *parent,*left,*right;
};

Node *root,*NIL;

void insert(int key){
    Node* y = NIL;
    Node* x = root;
    Node* z = (Node*)malloc(sizeof(Node));
    z->key = key;
    z->left = NIL;
    z->right = NIL;
    
    // 挿入するノードの探索
    while(x != NIL){
        // 親の設定
        y = x;
        // 挿入する位置を決定する
        if(key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    
    // 親の設定
    z->parent = y;
    
    // 親が空の場合(2分木が空の場合)
    if(y == NIL){
        root = z;
    }
    else if(key < y->key){
        y->left = z;
    }
    else{
        y->right = z;
    }
}

/**
    根→左→右の順番で出力する
*/
void preOrder(Node* node){
    if(node == NIL){
        return;
    }
    // 根である自身を出力する
    cout << " " << node->key;
    // 左
    if(node->left != NIL){
        preOrder(node->left);
    }
    // 右
    if(node->right != NIL){
        preOrder(node->right);
    }
}

/**
    左部分木 → 根節点 → 右部分木の順番で節点をまわること
*/
void inOrder(Node* node){
    if(node == NIL){
        return;
    }
    // 左を探す
    if(node->left != NIL){
        inOrder(node->left);
    }
    // 左がなくなったら左を出力する
    cout << " " << node->key;
    // 右
    if(node->right != NIL){
        inOrder(node->right);
    }
}

int main(void){
    int n,key;
    
    cin >> n;
    
    for(int i = 0;i < n;++i){
        string input;
        cin >> input;
        // insert
        if(input[0] == 'i'){
            cin >> key;
            insert(key);
        }
        else{
            inOrder(root);
            cout << endl;
            preOrder(root);
            cout << endl;
        }
    }
    return 0;
}

