#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct node{
    int key;
    node *right,*left,*parent;
};
node *root,*nil;
node *find(node *u,int k){
    while(u!=nil && k!=u->key){
        if(k<u->key)u=u->left;
        else u=u->right;
    }
    return u;
}

void insert(int k){
    node *y=nil;
    node *x=root;
    node *z;
    
    z=(node *)malloc(sizeof(node));
    z->key =k;
    z->left = nil;
    z->right = nil;
    
    while(x!=nil){
        y=x;
        if(z->key < x->key){
            x= x->left;
        }else{
            x = x->right;
        }
    }
    z->parent =y;
    if(y==nil){
        root=z;
    }else{
        if(z->key<y->key){
            y->left=z;
        }else{
            y->right=z;
        }
    }
}

void inorder(node *u){
    if(u==nil)return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}

void preorder(node *u){
    if(u==nil)return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}
int main(){
    int n,x;
    string  com;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>com;
        if(com[0]=='f'){
            cin>>x;
            node *t=find(root,x);
            if(t != nil)cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
        else if(com=="insert"){
            cin>>x;
            insert(x);
        }else if(com=="print"){
            inorder(root);
            cout<<endl;
            preorder(root);
            cout<<endl;
        }
    }
    return 0;
}
