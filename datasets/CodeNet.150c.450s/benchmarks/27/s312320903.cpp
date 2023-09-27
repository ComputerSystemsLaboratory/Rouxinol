#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

struct Node{
    int key;
    Node *left,*right,*parent;
};
Node *nill,*root;

void insertkey(int key){
    Node *y;
    Node* x=root;
    Node* z;
    z=(Node*)malloc(sizeof(Node));
    z->key=key;
    z->left=nill;
    z->right=nill;
    while(x!=nill){
        y=x;
        if(key>x->key)x=x->right;
        else x=x->left;
    }
    z->parent=y;
    if(y==nill)root=z;
    else{
        if(key<y->key)y->left=z;
        else y->right=z;
    }
}

void inorder(Node* node){
    if(node!=nill){
    inorder(node->left);
    printf(" %d",node->key);
    inorder(node->right);
    }
    return;
}
void preorder(Node* node){
    if(node!=nill){
        printf(" %d",node->key);
        preorder(node->left);
        preorder(node->right);
    }
    return;
}

void preorder(){}

int main(){
    int n;cin>>n;
    char s[10];
    rep(i,n){
        scanf("%s",s);
        if(s[0]=='i'){
            int key;
            scanf("%d",&key);
            insertkey(key);
        }
        else if(s[0]=='p'){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
}
