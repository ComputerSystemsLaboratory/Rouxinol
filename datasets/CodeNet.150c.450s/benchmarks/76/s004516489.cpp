#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

struct node{
  node *p;
  node *r;
  node *l;
  int key;
};

node *root,*NIL;


void init(){
  NIL = (node *)malloc(sizeof(node));
  NIL->p = NIL;
  NIL->r = NIL;
  NIL->l = NIL;
  NIL->key = -1;
  root = (node *)malloc(sizeof(node));
  root = NIL;
  root->p = NIL;
  root->r = NIL;
  root->l = NIL;
  root->l->p = root->r->p = root;
}

void inorder(node *x){
  if(x == NIL) return;
  inorder(x->l);
  printf(" %d",x->key);
  inorder(x->r);
}

void preorder(node *x){
  if(x == NIL) return;
  printf(" %d",x->key);
  preorder(x->l);
  preorder(x->r);
}


void print(){
  inorder(root);
  printf("\n");
  preorder(root);
  printf("\n");
}

void insert(int k){
  //cout << k << endl;
  node *z;
  z = (node *)malloc(sizeof(node));
  z->r = NIL;
  z->l = NIL;
  z->key = k;

  node *x,*y;
  x = root;
  y = NIL;
  //printf("x->key = %d\n",x->key);
  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->l;
    else if(z->key > x->key) x = x->r;
    //printf("x->key1 = %d\n",x->key);
  }
  //printf("y->key = %d\n",y->key);
  if(y == NIL) root = z;
  else if(z->key < y->key) y->l = z;
  else if(z->key > y->key) y->r = z;

  z->p = y->p;
//  inorder(root);
  //printf("\n");
}


void find(int k){

  node *z;
  z = (node *)malloc(sizeof(node));
  z->key = k;
  z->r = NIL;
  z->l = NIL;

  node *x = root;
  while(1){
    if(z->key == x->key) {
      cout << "yes" << endl;
      return;
    }
    else if(x == NIL){
      cout << "no" << endl;
      return;
    }
    if(z->key < x->key) x = x->l;
    if(z->key > x->key) x = x->r;
  }
  //inorder(root);
  //printf("\n");
}


int main(){

  int m,k;
  string com;
  cin >> m;

  init();

  for(int i = 0;i < m;i++){
    cin >> com;
    if(com == "insert"){
      cin >> k;
      //cout << k << endl;
      insert(k);
    }
    else if(com == "find"){
      cin >> k;
      find (k);
    }
    else if(com == "print") print();
  }
}