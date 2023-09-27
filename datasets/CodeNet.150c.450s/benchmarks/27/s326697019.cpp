#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

typedef struct BiTNode{
public:
  int key;
  struct BiTNode *parent;
  struct BiTNode *left;
  struct BiTNode *right;

  BiTNode(int key){
    this->key = key;
    this->parent = NULL;
    this->left = NULL;
    this->right = NULL;
  }
} BiTNode;

typedef struct BiT{
public:
  int max;
  int min;
  struct BiTNode *root;
  BiT(){
    this->max = 0;
    this->min = 0;
    this->root = NULL;
  }
}BiT;

void insert(BiT *T,int key){

  BiTNode *y;
  BiTNode *x;
  BiTNode *z;

  y = NULL;
  x = T->root;
  z = new BiTNode(key);

  while(1){
    if(x == NULL){
      break;
    }
    y = x;
    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }

  z->parent = y;

  if(y == NULL){
    T->root = z;
  }
  else if(z->key < y->key){
    y->left = z;
  }
  else {
    y->right = z;
  }

  if(T->max < key){
    T->max = key;
  }
  if(T->min > key){
    T->min = key;
  }
}


void inorderTreeWalk(BiTNode *node){

  if(node != NULL){
    inorderTreeWalk(node->left);
    cout << " " << node->key;
    inorderTreeWalk(node->right);
  }
}

void preorderTreeWalk(BiTNode *node){

  if(node != NULL){
    cout << " " << node->key;
    preorderTreeWalk(node->left);
    preorderTreeWalk(node->right);
  }
}

void print(BiT T){

  inorderTreeWalk(T.root);
  cout << endl;
  preorderTreeWalk(T.root);
  cout << endl;
}


int main(){

  int i;
  int n;
  int k;
  BiT T;
  char order[10];

  cin >> n;

  for(i = 0;i < n;i++){
    cin >> order;
    if(strcmp(order,"insert") == 0){
      cin >> k;
      insert(&T,k);
    }
    else if(strcmp(order,"print") == 0){
      print(T);
    }
  }

  return 0;
}