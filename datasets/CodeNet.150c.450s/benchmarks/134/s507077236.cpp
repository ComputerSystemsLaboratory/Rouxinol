#include <stdio.h>
#define NIL -1
struct Node{
  int parent,left,right;
};
struct Node R[10000];
int n;
void preorder(int);
void inorder(int);
void postorder(int);

void preorder(int x){
  if(x==NIL)
    return;
  printf(" %d",x);
  preorder(R[x].left);
  preorder(R[x].right);
}
void inorder(int x){
  if(x==NIL)
    return;
  inorder(R[x].left);
  printf(" %d",x);
  inorder(R[x].right);
}
void postorder(int x){
  if(x==NIL)
    return;
  postorder(R[x].left);
  postorder(R[x].right);
  printf(" %d",x);
}

int main(){
  int i,a,b,c,root;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    R[i].parent=NIL;
  for(i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    R[a].left=b;
    R[a].right=c;
    if(b!=NIL)R[b].parent=a;
    if(c!=NIL)R[c].parent=a;
  }
  for(i=0;i<n;i++){
    if(R[i].parent==NIL)
      root=i;
  }
  printf("Preorder\n");
  preorder(root);
  printf("\n");
  printf("Inorder\n");
  inorder(root);
  printf("\n");
  printf("Postorder\n");
  postorder(root);
  printf("\n");
  return 0;
}

  

