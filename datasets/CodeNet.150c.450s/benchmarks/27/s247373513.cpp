#include<bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  Node *p, *l, *r;
};

Node *root, *NIL;

void insert(int k){
  Node *y=NIL;
  Node *x=root;
  Node *z;
 
  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;
  while(x != NIL) {
    y = x;
    if(z->key < x->key) {
      x = x->l;
    }else{
      x = x->r;
    }
  }
 
  z->p = y;
  if(y == NIL) {
    root = z;
  }else{
    if(z->key < y->key){
      y->l = z;
    }else{
      y->r = z;
    }
  }
}

void inorder(Node *k){
  if(k == NIL){
    return;
  }
  inorder(k->l);
  cout << " " << k->key;
  inorder(k->r);
}

void preorder(Node *k){
  if(k == NIL){
    return;
  }
  cout << " " << k->key;
  preorder(k->l);
  preorder(k->r);
}

int main(){
  int n,k;
  string s;

  cin >> n;

  for(int i = 0 ; i < n ; i++){
    cin >> s;
    if(s == "insert"){
      cin >> k;
      insert(k);
    }else if(s == "print"){
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }
  return 0;
}