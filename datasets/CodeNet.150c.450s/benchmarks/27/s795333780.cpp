// binary search tree 1
// input command "insert" or "print", print is output in-order tree walk and pre-order tree walk
#include<iostream>
#include<stdlib.h>
#include<string>
typedef struct node{
  struct node *left, *right, *parent;
  int key;
}node;
node *T;
void Insert(int);
void Inorder(node*);
void Preorder(node*);
void Free(node*);
int main(){
  int n, i, key;
  std::string func, ins="insert", pri="print";
  T = new node;;
  T->parent = T->left = T->right = NULL, T->key = -1;
  std::cin >> n;
  for(i=0; i<n; i++){
    std::cin >> func;
    if(func == ins){
      std::cin >> key;
      Insert(key);
    }
    else if(func == pri){
      Inorder(T); std::cout << "\n";
      Preorder(T); std::cout << "\n";
    }
  }
  Free(T);
  return 0;
}
void Inorder(node* X){
  if(X != NULL){
    Inorder(X->left);
    std::cout << " " << X->key;
    Inorder(X->right);
  }
}
void Preorder(node* X){
  if(X != NULL){
    std::cout << " " << X->key;
    Preorder(X->left);
    Preorder(X->right);
  }
}
void Free(node* X){
  if(X != NULL){
    Free(X->left);
    Free(X->right);
    delete X;
  }
}
void Insert(int key){
  node *x, *y, *S;
  if(T->key == -1){
    T->key = key;
    return;
  }
  S = new node;
  S->key = key;
  S->parent = S->left = S->right = NULL;
  x = T;
  while(x != NULL){
    y = x;
    if(key < x->key) x = x->left;
    else x = x->right;
  }
  S->parent = y;
  if(S->key < y->key) y->left = S;
  else y->right = S;
}