#include<iostream>
#include<string>
using namespace std;

struct Node{
    int key;
    Node *right,*left,*parent;
};

Node *nil,*root;

void insert(int k){
    Node *y=nil;
    Node *x=root;
    Node *z=new Node;
    z->key=k;
    z->right=nil;
    z->left=nil;
    while(x!=nil){
        y=x;
        if(z->key<x->key) x=x->left;
        else x=x->right;
    }
    z->parent=y;
    if(y==nil) root=z;
    else if(z->key<y->key) y->left=z;
    else y->right=z;
}

void inorder(Node *u){
    if(u==nil) return;
    inorder(u->left);
    cout<<' '<<u->key;
    inorder(u->right);
}

void preorder(Node *u){
    if(u==nil) return;
    cout<<' '<<u->key;
    preorder(u->left);
    preorder(u->right);
}

int main(){
    int m,k;
    string com;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>com;
        if(com[0]=='i'){
            cin>>k;
            insert(k);
        }
        else if(com[0]=='p'){
            inorder(root);
            cout<<endl;
            preorder(root);
            cout<<endl;
        }
    }
}
