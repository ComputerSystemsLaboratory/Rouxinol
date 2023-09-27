#include<bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  Node *parent, *left, *right;
};

Node *NIL, *root;
bool flag;

void init(void){
  root=(Node*)malloc(sizeof(Node));
  
  root->key=INT_MAX;
  root->left=NIL;
  root->right=NIL;
}

void insert(int key){
  Node *in=(Node*)malloc(sizeof(Node));
  Node *tmp=root;
  Node *par;
  
  in->key=key;
  in->left=NIL;
  in->right=NIL;

  if(root->key == INT_MAX) root=in;
  else{
    while(tmp != NIL){
      par=tmp;
      if(tmp->key > in->key) tmp=tmp->left;
      else tmp=tmp->right;
    }
    in->parent=par;
    if(in->parent->key > in->key) in->parent->left=in;
    else in->parent->right=in;
  }
}

void find(Node *point, int key){
  if(point == NIL) return;
  if(point->key == key){
    flag=true;
    return;
  }
  
  if(key < point->key) find(point->left, key); 
  else find(point->right, key);
}


void preorder(Node *point){
  if(point == NIL) return;

  printf(" %d", point->key);
  preorder(point->left);
  preorder(point->right);
}

void inorder(Node *point){
  if(point == NIL) return;

  inorder(point->left);
  printf(" %d", point->key);
  inorder(point->right);
}

void print(){
  inorder(root);
  printf("\n");
  preorder(root);
  printf("\n");
}

int main(){
  int  i, n, key;
  char com[7];

  scanf("%d", &n);
  init();

  for(i=0; i<n; i++){
    scanf("%s %d", com, &key);
    if(com[0] == 'i') insert(key);
    else if(com[0] == 'f'){
      flag=false;
      find(root, key);
      if(flag) printf("yes\n");
      else printf("no\n");
    }
    else print();
    
  }
  
}

