#include<iostream>
#include<cstdlib>
using namespace std;
#define MAX 500000

struct Node{
  int key;
  Node *p, *r, *l;
};

int m;
Node *root, *NIL;

void inorder(Node* r){
  if ( r->l != NIL){
    inorder(r->l);
  }
  cout << " " << r->key;
  if ( r->r != NIL){
    inorder(r->r);
  }
}

void preorder(Node* r){
  cout << " " << r->key;
  if ( r->l != NIL){
    preorder(r->l);
  }
  if ( r->r != NIL){
    preorder(r->r);
  }
}

void print(){
  inorder(root);
  cout << endl;
  preorder(root);
  cout << endl;
}

void insert(int key){
  Node *y = NIL; // xの親
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));

  z->key = key;
  z->l = NIL;
  z->r = NIL;
  while( x != NIL){
    y = x;
    if ( z->key < x->key){
      x = x->l;
    } else {
      x = x->r;
    }
  }

  z->p = y;
  if ( y == NIL){
    root = z;
  } else if ( z->key < y->key){
    y->l = z;
  } else {
    y->r = z;
  }
}

int main(){
  cin >> m;
  string order;
  int key;
  for ( int i = 0; i < m; i++){
    cin >> order;
    if (order == "insert"){
      cin >> key;
      insert(key);
    } else {
      print();
    }
  }

  return 0;
}
