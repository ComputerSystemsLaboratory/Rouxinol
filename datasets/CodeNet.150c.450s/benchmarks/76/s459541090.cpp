#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;
struct Node{
    int key;
    Node *parent,*left,*right;
};
Node *root,*NIL;
void insert(int k){
    Node *y=NIL;
    Node *x=root;
    Node *z;

    z=(Node *)malloc(sizeof(Node));
    z->key=k;
    z->left=NIL;
    z->right=NIL;

    while(x!=NIL){
        y=x;
        if(z->key<x->key) x=x->left;
        else x=x->right;
    }
    z->parent=y;
    if(y==NIL) root=z;
    else{
        if(z->key<y->key) y->left=z;
        else y->right=z;
    }
}
void find(int k){
    Node *x=root;
    Node *y=NIL;
    while(x!=NIL){
        y=x;
        if(x->key>k) x=x->left;
        else if(x->key<k) x=x->right;
        else{cout<<"yes"<<endl; return;}
    }
    cout<<"no"<<endl;
}
void inorder(Node *u){
    if(u==NIL) return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}
void preorder(Node *u){
    if(u==NIL) return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}
int main(){
    int n,x;
    string com;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>com;
        if(com=="insert"){
            scanf("%d",&x);
            insert(x);
        }
        else if(com=="print"){
            inorder(root);
            cout<<endl;
            preorder(root);
            cout<<endl;
        }
        else if(com=="find"){
            scanf("%d",&x);
            find(x);
        }
    }
    return 0;
}
