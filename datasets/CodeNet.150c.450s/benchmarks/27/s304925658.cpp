#include<stdio.h>
#include<iostream>
#include<string>
using namespace  std;

struct Node{    //リストのような扱い
    int key;
    Node* left;
    Node* right;
    Node* parent;
};

Node* root, *NIL;   //代表的なポインタを記録しておく

void insert(int k){
    Node* y = NIL;
    Node* x = root;
    Node* z;

    //kのキーを持つ節点を生成
    z = new Node;
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while(x!=NIL){  //根から降りてくる
        y = x;  //ひとつ前の節点を保持
        if(z->key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    z->parent = y;
    if(y==NIL){
        root = z;
    }else{
        //場所が分かった構造体に情報を書き込む；
        if(z->key < y->key){
            y->left = z;
        }else{
            y->right = z;
        }
    }
}

void inParse(Node* u){
    if(u==NIL) return;
    inParse(u->left);
    printf(" %d", u->key);
    inParse(u->right);
}

void preParse(Node* u){
    if(u==NIL) return;
    printf(" %d", u->key);
    preParse(u->left);
    preParse(u->right);
}

int main(){

    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        if(str == "insert"){
            int key;
            scanf("%d", &key);
            insert(key);
        }else if(str == "print"){
            inParse(root);
            printf("\n");
            preParse(root);
            printf("\n");
        }
    }


    return 0;
}
