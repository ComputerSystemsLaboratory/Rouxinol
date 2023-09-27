#include<stdio.h>

#define MAX 10001
#define NIL -1

void Preorder(int);
void Inorder(int);
void Postorder(int);
typedef struct Node{int p,l,r;}Node;
Node T[MAX];
int n;
 
int main(){
  int i,u,l,r,id;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    T[i].p = NIL;
  }
  for(i = 0; i < n; i++){
    scanf("%d %d %d",&id,&l,&r);
    T[id].l = l;
    T[id].r = r;
    if(l != NIL) T[l].p = id;
    if(r != NIL) T[r].p = id;
  }
  for(i = 0; i < n; i++) if(T[i].p == NIL) u = i;
  printf("Preorder\n");
  Preorder(u);
  printf("\nInorder\n");
  Inorder(u);
  printf("\nPostorder\n");
  Postorder(u);
  printf("\n");
  return 0;
}
 
 
void Preorder(int u){
  if(u == NIL) return;
  printf(" %d",u);
  Preorder(T[u].l);
  Preorder(T[u].r);
}
 
void Inorder(int u){
  if(u == NIL) return;
  Inorder(T[u].l);
  printf(" %d",u);
  Inorder(T[u].r);
}
 
void Postorder(int u){
  if(u == NIL) return;
  Postorder(T[u].l);
  Postorder(T[u].r);
  printf(" %d",u);
}