#include<cstdio>
#include<vector>
#include<cstdlib>
#include<iostream>
using namespace std;
struct Node{
Node *parent,*left,*right;
int key;
};
Node *NIL,*root;
Node *find(Node*u,int k){
   while(u!=NIL&&k!=u->key){
    if(k<u->key)u=u->left;
    else u=u->right;
   }
   return u;
}

void prin_in(Node* node){
    if(node==NIL)return;
    prin_in(node->left);
    printf(" %d",node->key);
    prin_in(node->right);
}
void prin_pre(Node* node){
    if(node==NIL)return;
    printf(" %d",node->key);
    prin_pre(node->left);
    prin_pre(node->right);

}
void insert(int key)
{
    Node *y=NIL;
    Node *x=root;
    Node *z;
    z=(Node*)malloc(sizeof(Node));
    z->key=key;
    z->left=NIL;
    z->right=NIL;
    while(x!=NIL){
        y=x;
        if(z->key<x->key)
           x=x->left;
        else
            x=x->right;
    }
    z->parent=y;
    if(y==NIL){
        root=z;
    } else{
            if(z->key<y->key)
                y->left=z;
            else {
                y->right=z;
            }
    }
}
int main(){
   int n,i,x;
   string s;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       cin>>s;
       if(s[0]=='i'){
        scanf("%d",&x);
        insert(x);
       }
       else if(s[0]=='f'){
        scanf("%d",&x);
        Node*t=find(root,x);
        if(t!=NIL)printf("yes\n");
        else printf("no\n");
       }
       else if(s[0]=='p'){
       prin_in(root);
       printf("\n");
       prin_pre(root);
       printf("\n");
       }
   }
   return 0;
}