#include <stdio.h>

#define N 100
#define NIL -1

int Pre(int t);
int In(int t);
int Post(int t);

struct Node{
  int p, left, right;
};
struct Node A[N];

int main(){

  int i, j;
  int n, id, h, d;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
   A[i].p = NIL;
   A[i].left = NIL;
   A[i].right = NIL;
  }

  for(i = 0; i < n; i++){
    scanf("%d %d %d", &id, &h, &d);
    A[h].p = id;
    A[d].p = id;
    A[id].left = h;
    A[id].right = d;
  }

  for(i = 0; i < n; i++)
    if(A[i].p == NIL) break;

  printf("Preorder\n");
  Pre(i);
  printf("\n");

  printf("Inorder\n");
  In(i);
  printf("\n");

  printf("Postorder\n");
  Post(i);
  printf("\n");

  return 0;
}

int Pre(int t){

  printf(" %d",t);

  if(t != NIL){
    if(A[t].left != NIL)Pre(A[t].left);
    if(A[t].right != NIL)Pre(A[t].right);
  }

 return 0;
}

int In(int t){

  if(t != NIL){
    if(A[t].left != NIL) In(A[t].left);

    printf(" %d",t);

    if(A[t].right != NIL) In(A[t].right);
  }

  return 0;
}

int Post(int t){

  if(t != NIL){
    if(A[t].left != NIL)Post(A[t].left);

    if(A[t].right != NIL)Post(A[t].right);
  }

  printf(" %d",t);
  
  return 0;
}