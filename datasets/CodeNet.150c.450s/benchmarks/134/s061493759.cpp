#include<stdio.h>
#define N 25
typedef struct{
  int p;
  int l;
  int r;
}Node;
 
void preorder(int);
void inorder(int);
void postorder(int);
 
Node T[N];
int main(){
  int n, i, j, id, left, right;
  scanf("%d\n",&n);
  for(i = 0 ; i < n ; i++){
    T[i].p = -1;
    T[i].l = -1;
    T[i].r = -1;
  }
  for(i = 0 ; i < n ; i++){
    scanf("%d%d%d", &id, &left, &right);
    T[id].l = left;
    T[left].p = id;
    T[id].r = right;
    T[right].p = id;
  }
  printf("Preorder\n");
  for(i = 0 ; i < n ; i++){
    if(T[i].p == -1){
      preorder(i);
    }
  }
  printf("\n");
  printf("Inorder\n");
  for(i = 0 ; i < n ; i++){
    if(T[i].p == -1){
      inorder(i);
    }
  }
  printf("\n");
  printf("Postorder\n");
  for(i = 0 ; i < n ; i++){
    if(T[i].p == -1){
      postorder(i);
    }
  }
  printf("\n");
  return 0;
}
 
void preorder(int u)
{
  if(u == -1) return;
  printf(" %d", u);
  preorder(T[u].l);
  preorder(T[u].r);
}
void inorder(int u)
{
  if(u == -1) return;
  inorder(T[u].l);
  printf(" %d", u);
  inorder(T[u].r);
}
 
void postorder(int u)
{
  if(u == -1) return;
  postorder(T[u].l);
  postorder(T[u].r);
  printf(" %d", u);
}