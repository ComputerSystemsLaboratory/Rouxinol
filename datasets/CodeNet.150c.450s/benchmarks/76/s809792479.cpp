#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

struct Node{
    int key;
    Node *left,*right,*parent;
};

Node *nill,*root;

void insertkey(int key){
    Node *x,*y,*z;
    x=(Node*)malloc(sizeof(Node));
    x->key=key;
    x->left=nill;x->right=nill;
    y=root;
    z=nill;
    while(y!=nill){
        z=y;
        if(key>y->key)y=y->right;
        else if(key<y->key)y=y->left;
    }
    x->parent=z;
    if(z==nill)root=x;
    else {
        if(key>z->key)z->right=x;
        else z->left=x;
    }
    return;
}
void inorder(Node* node){
    if(node==nill)return;
    inorder(node->left);
    printf(" %d",node->key);
    inorder(node->right);
    return;
}

void preorder(Node* node){
    if(node==nill)return;
    printf(" %d",node->key);
    preorder(node->left);
    preorder(node->right);
    return;
}

bool findkey(int key){
    Node *x=root;
    while(x!=nill){
        if(x->key==key)return true;
        else if(x->key>key)x=x->left;
        else x=x->right;
    }
    return false;
}

int main(){
    int n,key;cin>>n;
    char s[10];
    rep(i,n){
        scanf("%s",s);
        if(s[0]=='i'){
            scanf("%d",&key);
            insertkey(key);
        }
        if(s[0]=='f'){
            scanf("%d",&key);
            if(findkey(key))printf("yes\n");
            else printf("no\n");
        }
        if(s[0]=='p'){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
}
