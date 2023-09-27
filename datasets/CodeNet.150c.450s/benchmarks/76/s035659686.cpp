#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node *parent,*left,*right;
    int key;
};
Node *root=NULL,*NIL=NULL;
void insert(int k){
    Node* x_parent=NIL;//xの親
    Node* x=root;//挿入する場所
    Node* node=NIL;//新しく挿入するノード
    node=(Node*)malloc(sizeof(Node));
    node->key=k;
    node->right=NIL;
    node->left=NIL;
    while(x!=NIL){
        x_parent=x;
        if(node->key<x->key) x=x->left;
        else x=x->right;
    }
    node->parent=x_parent;
    if(x_parent==NIL) root=node;//木が空の場合
    else{
        if(node->key<x_parent->key) x_parent->left=node;
        else x_parent->right=node;
    }
}
void pre(Node* u){
    if(u==NIL) return;
    printf(" %d",u->key);
    pre(u->left);
    pre(u->right);
}
void in(Node* u){
    if(u==NIL) return;
    in(u->left);
    printf(" %d",u->key);
    in(u->right);
}
Node* find(Node* u,int k){
    while(u!=NIL&&u->key!=k){
        if(k<u->key) u=u->left;
        else u=u->right;
    }
    return u;
}
int main(){
    int m,k;
    scanf("%d",&m);
    string com;
    for(int i=0;i<m;++i){
        cin>>com;
        if(com=="insert"){
            scanf("%d",&k);
            insert(k);
        }else if(com=="print"){
            in(root);
            putchar('\n');
            pre(root);
            putchar('\n');
        }else if(com=="find"){
            scanf("%d",&k);
            printf("%s\n",find(root,k)!=NIL?"yes":"no");
        }
    }
    return 0;
}