#include <bits/stdc++.h>
using namespace std;

#define NIL -1
#define MAX 25

class node{
public:
  int parent;
  int left;
  int right;
  int depth;
  int height;

  node(){
    parent = NIL;
    left = NIL;
    right = NIL;
    depth = NIL;
  }
};

node T[MAX];

void preOrder(int id){
  printf(" %d",id);
  if(T[id].left != NIL) preOrder(T[id].left);
  if(T[id].right != NIL) preOrder(T[id].right);
};

void inOrder(int id){
  if(T[id].left != NIL) inOrder(T[id].left);
  printf(" %d",id);
  if(T[id].right != NIL) inOrder(T[id].right);
}

void postOrder(int id){
  if(T[id].left != NIL) postOrder(T[id].left);
  if(T[id].right != NIL) postOrder(T[id].right);
  printf(" %d",id);
}

int main(){

  int n;
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    int id, left, right;
    scanf("%d %d %d",&id,&left,&right);
    T[id].left = left != -1 ? left : NIL;
    T[id].right = right != -1 ? right : NIL;
    if(left != -1) T[left].parent = id;
    if(right != -1)T[right].parent = id;
  }

  // Find root id.
  int root;
  for(int i=0; i<n; i++){
    if(T[i].parent == NIL){
      root = i;
      break;
    }
  }

  //print result
  printf("Preorder\n");
  preOrder(root);
  printf("\n");

  printf("Inorder\n");
  inOrder(root);
  printf("\n");

  printf("Postorder\n");
  postOrder(root);
  printf("\n");

  return 0;
}

