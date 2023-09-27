#include <bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int a){
  Node *y=NIL, *x=root, *z;
  z = (Node *)malloc(sizeof(Node));
  z->key=a;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->key<x->key) x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NIL) root=z;
  else if(z->key<y->key) y->left=z;
  else y->right=z;
}

void inorder(Node *p){
  if(p==NIL) return;
  inorder(p->left);
  cout << " " << p->key;
  inorder(p->right);
}

void preorder(Node *p){
  if(p==NIL) return;
  cout << " " << p->key;
  preorder(p->left);
  preorder(p->right);
}

int main(){
  int n,x;
  string str;

  cin >> n;

  for(int i=0;i<n;i++){
    cin >> str;
    if(str=="insert"){
      cin >> x;
      insert(x);
    }
    else if(str=="print"){
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }
  return 0;
}
