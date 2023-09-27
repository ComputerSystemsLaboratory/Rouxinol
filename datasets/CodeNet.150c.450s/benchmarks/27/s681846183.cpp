#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;
  
  z= new Node;
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  
  while( x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  
  z->parent = y;
  if( y == NIL ) root = z;
  else{
    if( z->key < y->key ) y->left = z;
    else y->right = z;
  }
}

void inorder(Node *u){
  if(u==NIL) return;
  inorder(u->left);
  cout<<" "<<u->key;
  inorder(u->right);
}
void preorder(Node *u){
  if(u==NIL) return;
  cout<<" "<<u->key;
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int n,x;
  string com;
  
  cin>>n;
  
  rep(i,n){
    cin>>com;
    if(com=="insert"){
      cin>>x;
      insert(x);
    }
    else if(com=="print"){
      inorder(root);
      cout<<endl;
      preorder(root);
      cout<<endl;
    }
  } 
  
  return 0;
}
