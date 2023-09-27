#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
constexpr auto INF = 2147483647;
typedef long long ll;

struct Node{
  int key;
  Node *right, *left, *parent;
};
//property
Node *root, *NIL;

void Insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z= new Node;
  z ->key = k;
  z ->left = NIL;
  z ->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key) x= x->left;
    else x = x-> right;
  }
  z->parent =y;
  if(y == NIL) root = z;
  else {
    if(z->key < y->key) y->left = z;
    else y->right = z;
  }
}

void Find(int k){
  Node *x = root;
  while (x != NIL){
    if (x->key == k){
      cout << "yes" ;
      return;
    }
    if(k < x->key) x = x->left;
    else x= x->right;
  }
  cout << "no" ;
  return;
}

void Inorder(Node *r){
  if(r == NIL) return;
  Inorder(r->left);
  cout << " " << r->key;
  Inorder(r->right);
}

void Preorder(Node *r){
  if(r == NIL) return;
  cout << " " << r->key;
  Preorder(r->left);
  Preorder(r->right);
}


int main(){

  int m, k;
  string com;
  cin >> m;
  rep(i,m){
    cin >> com;
    if (com == "insert"){
      cin >> k;
      Insert(k);  
    }else if(com == "find"){
      cin >> k;
      Find(k);
      cout << endl;
    }
    else {
      Inorder(root);
      cout << endl;
      Preorder(root);
      cout << endl;
    }
  }

  return 0;
}
