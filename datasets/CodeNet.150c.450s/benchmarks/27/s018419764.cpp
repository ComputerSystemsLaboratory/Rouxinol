#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

struct Node{
  int key;
  Node *r, *l, *p;
};

Node *root, *NIL;

void insert(int k){
  Node *x = root,*y = NIL, *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->l;
    }
    else{
      x = x->r;
    }
  }

  z->p = y;
  if(y == NIL){
    root = z;
  }
  else{
    if(z->key < y->key){
      y->l = z;
    }
    else{
      y->r = z;
    }
  }
}

void inorder(Node *u){
  if(u == NIL) return;
  inorder(u->l);
  printf(" %d", u->key);
  inorder(u->r);
}

void preorder(Node *u){
  if(u == NIL) return;    
  printf(" %d", u->key);    
  preorder(u->l);
  preorder(u->r);
}


int main(){
  int n, i, x;
  string com;

  scanf("%d", &n);

  for(i = 0 ; i < n ; i++){
    cin >> com;
    if(com == "insert"){
      scanf("%d", &x);
      insert(x);
    }
    else if(com == "print"){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}
