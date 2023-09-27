// binary search tree 2
// input command "insert", "print" or "find", print is output in-order tree walk and pre-order tree walk, find is output "yes" or "no"
#include<iostream>
#include<string>
typedef struct node{
  struct node *left, *right, *parent;
  int key;
}node;
node *T;
void Insert(int);
void Inorder(node*);
void Preorder(node*);
int Find(int);
void Free(node*);
int main(){
  int n, i, key;
  std::string func, ins="insert", pri="print", fin="find";
  T = new node;
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
    else if(func == fin){
      std::cin >> key;
      std::cout << (Find(key) ? "yes\n" : "no\n");
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
int Find(int key){
  node *X;
  for(X=T; X != NULL;){
    if(X->key > key) X = X->left;
    else if(X->key < key) X = X->right;
    else return 1;
  }
  return 0;
}