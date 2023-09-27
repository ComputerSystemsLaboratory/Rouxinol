#include<bits/stdc++.h>
using namespace std;

#define MAX 25
#define NIL -1

struct node{
  int parent, left, right;
};

node T[MAX];
int  n, D[MAX], H[MAX];

void insert(){
  int i;
  
  for(i=0; i<n; i++) T[i].parent=T[i].left=T[i].right=NIL;

  for(i=0; i<n; i++){
    int id;
    scanf("%d", &id);
    scanf("%d %d", &T[id].left, &T[id].right);

    T[T[id].right].parent=T[T[id].left].parent=id;
  }
}

void Preorder(int i){
  printf(" %d", i);
  if(T[i].left != NIL) Preorder(T[i].left);
  if(T[i].right != NIL) Preorder(T[i].right);
}

void Inorder(int i){
  if(T[i].left != NIL) Inorder(T[i].left);
  printf(" %d", i);
  if(T[i].right != NIL) Inorder(T[i].right);
}

void Postorder(int i){
  if(T[i].left != NIL) Postorder(T[i].left);
  if(T[i].right != NIL) Postorder(T[i].right);
  printf(" %d", i);
}

int main(void){
  int i, root;
  
  scanf("%d", &n);
  insert();
  for(i=0; i<n; i++){
    if(T[i].parent == NIL){
      root=i;
      break;
    }
  }

  printf("Preorder\n");
  Preorder(root);
  printf("\nInorder\n");
  Inorder(root);
  printf("\nPostorder\n");
  Postorder(root);
  printf("\n");
  
  return 0;
}

