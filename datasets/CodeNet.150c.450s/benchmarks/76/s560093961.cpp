#include <cstdio>
#include <cstdlib>
#include <iostream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
struct Node {int key;Node *right,*left,*parent;};
Node *root,*NIL;
Node *find(Node *u,int k){
  while(u!=NIL&&k!=u->key){
    if(k<u->key) u=u->left;
    else u=u->right;
  }
  return u;
}
void insert(int k){
  Node *y=NIL,*x=root,*z;
  z=(Node *)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
  while(x!=NIL){
    y=x;
    if(z->key < x->key) x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NIL) root=z;
  else {
    if(z->key < y->key) y->left=z;
    else y->right=z;
  }
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
  char com[6];
  scanf("%d",&n);
  REP(i,n){
    scanf("%s",com);
    if(com[0]=='i'){
      scanf("%d",&x);
      insert(x);
    } else if(com[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if(com[0]=='f'){
      scanf("%d",&x);
      Node *t=find(root,x);
      if(t!=NIL) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}