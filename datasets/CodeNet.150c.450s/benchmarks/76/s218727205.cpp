#include<iostream>
#include<string>
using namespace std;

struct Node{
    int key;
    Node *parent,*left,*right;
};

Node *nil,*root=nil;

void insert(int key){
    Node *x=root;
    Node *y=nil;
    Node *z=new Node;
    z->key=key;
    z->left=z->right=nil;
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

bool find(Node *u,int key){
    while(u!=nil&&u->key!=key){
        if(key<u->key) u=u->left;
        else u=u->right;
    }
    if(u!=nil) return true;
    else return false;
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
        if(com=="insert"){
            cin>>k;
            insert(k);
        }
        else if(com=="find"){
            cin>>k;
            if(find(root,k)) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        else if(com=="print"){
            inorder(root);
            cout<<endl;
            preorder(root);
            cout<<endl;
        }
    }
}
