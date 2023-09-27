#include<stdio.h>
#define NIL -1
#define MAX 500000
int root = NIL;
int key[MAX];
int left[MAX];
int right[MAX];
int p[MAX];
 
void tree_insert(int z){
  int a = NIL;
  int b = root;
  while(b != NIL){
    a = b;
    if(key[z] < key[b]){
      b = left[b];
    }
    else b = right[b];
  }
 
  p[z] = a;
  if(a == NIL){
    root = z;
  }
  else if(key[z]<key[a]){
    left[a] = z;
  }
  else{
    right[a] = z;
  }
}
 
void preorder(int t){
  if(t == NIL)return;
  printf(" %d",key[t]);
  preorder(left[t]);
  preorder(right[t]);
}
  
void inorder(int t){
  if(t == NIL)return;
  inorder(left[t]);
  printf(" %d",key[t]);
  inorder(right[t]);
}
  
void print(){
  inorder(root);
  printf("\n");
  preorder(root);
  printf("\n");
}
  
int tree_find(int t){
  int i = 0;
  int y = NIL;
  int b = root;
  while(b != NIL){
    if(key[b] == t)return 1;
    y = b;
    if(t < key[b]){
      b = left[b];
    }
    else b = right[b];
  }
  return 0;
}
  
int main(){
    
  int i,n,x;
  int z = 0;
  char A[10];
  scanf("%d",&n);
  for(i = 0;i < MAX;i++){
    key[i] = NIL;
    left[i] = NIL;
    right[i] = NIL;
    p[i] = NIL;
  }
 
  for(i = 0;i < n;i++){
    scanf("%s", A);
    if(A[0] == 'i'){
      scanf("%d",&x);
      key[z] = x;
      tree_insert(z);
      z++;
    }
    else if(A[0] == 'p')print();
    else if(A[0] == 'f'){
      scanf("%d",&x);
      if(tree_find(x) == 1)printf("yes\n");
      else printf("no\n");
    }
  }
    
  return 0;
}