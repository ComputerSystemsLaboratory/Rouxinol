#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;
struct node{
  node *r;
  node *l;
  node *p;
  int key;
};


node *root,*NIL;


void insert(int k){
  node *y;
  node *x;
  node *z;

  z = (node *)malloc(sizeof(node));
  
  z->r = NIL;
  z->l = NIL;
  z->key = k;
  
  y = NIL;
  x = root;
  
  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x -> l;
    else if(z->key > x->key) x = x -> r;
    z->p = y;
  }

    
  if(y == NIL) root = z;
  else if(z->key < y->key) y->l = z;
  else if(z->key > y->key) y->r = z;
}

void inorder(node *z){
  if(z == NIL) return;
  inorder(z->l);
  cout <<" "<< z->key;
  inorder(z->r);
}

void preorder(node *z){
  if(z == NULL) return;
  cout << " " <<z->key;
  preorder(z->l);
  preorder(z->r);
}

int main(){

  int n;
  int x;
  string com;


  // root->p = NIL;
  
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> com;
    if(com == "insert"){
      scanf("%d",&x); 
      // cout << "x = " << x << endl;
      // printf("a\n");
      insert(x);
    }
    else if(com == "print"){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
}