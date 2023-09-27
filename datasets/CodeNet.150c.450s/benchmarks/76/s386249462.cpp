#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

struct Node{
    int key;
    Node* parent;
    Node* left;
    Node* right;
};

Node* root, *NIL;

void insert(int _key){

    Node* y = NIL;
    Node* x = root;
    Node* z;

    z = new Node;
    z->key = _key;
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
    if(y==NIL){
        root = z;
    }else{
        if(z->key < y->key){
            y->left = z;
        }else{
            y->right = z;
        }

    }
}

Node* find(Node* _root, int _key){
    while((_root!=NIL)&&(_key!=_root->key)){
        if(_key < _root->key){
            _root = _root->left;
        }else{
            _root = _root->right;
        }
    }
    return _root;
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
        }else if(str == "find"){
            int key;
            scanf("%d", &key);
            Node* t = find(root, key);
            if(t ==NIL) printf("no\n");
            else printf("yes\n");
        }else if(str == "print"){
            inParse(root);
            printf("\n");
            preParse(root);
            printf("\n");
        }
    }

    return 0;
}
