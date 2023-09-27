#include <stdio.h>

#define MAX 10000
#define NIL -1

struct Node {int p,l,r;};
struct Node A[MAX];
int n;

void preparse(int);
void inparse(int);
void postparse(int);

int main(){
  int i,v,l,r,root;

  scanf("%d",&n);
  for(i=0;i<n;i++)
    A[i].p=NIL;
  for(i=0;i<n;i++){
    scanf("%d %d %d",&v,&l,&r);
    A[v].l=l;
    A[v].r=r;
    if(l!=NIL)
      A[l].p=v;
    if(r!=NIL)
      A[r].p=v;
	}
  for(i=0;i<n;i++)
    if(A[i].p==NIL)root=i;

  printf("Preorder\n");
  preparse(root);
  printf("\n");

  printf("Inorder\n");
  inparse(root);
  printf("\n");

  printf("Postorder\n");
  postparse(root);
  printf("\n");

  return 0;
}
void preparse(int a){
  if(a==NIL)return;
  printf(" %d",a);
  preparse(A[a].l);
  preparse(A[a].r);
}
void inparse(int a){
  if(a==NIL)return;
  inparse(A[a].l);
  printf(" %d",a);
  inparse(A[a].r);
}
void postparse(int a){
   if(a==NIL)return;
   postparse(A[a].l);
   postparse(A[a].r);
   printf(" %d",a);

}

