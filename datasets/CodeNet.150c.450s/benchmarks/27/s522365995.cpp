#include<cstdio>
#include<string>
#include<cstdlib>
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
    if(z->key<x->key){
        x=x->left;
    }
    else x=x->right;
}
z->parent=y;
if(y==NIL){
    root=z;
}
else{
    if(z->key<y->key){
        y->left=z;
    }
    else y->right=z;
}
}

void inorder(Node* u){
    if(u==NIL) return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}

void preorder(Node* u){
    if(u==NIL)return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}
int main(){
    int n,i,x;
    char str[10];

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",str);
       
        if(str[0]=='i'){
            scanf("%d",&x);
            insert(x);
        }
        
        else if(str[0]=='p'){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
    return 0;
}


