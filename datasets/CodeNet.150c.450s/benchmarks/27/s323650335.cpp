#include<bits/stdc++.h>
using namespace std;

struct node{
  int key;
  node *l,*r,*p;
};

node* root;

node* make_node(int a){
  node* ret = new node();
  ret->key = a;
  ret->p = ret->l = ret->r = NULL;
  return ret;
}

void insert(node *z){
  node *y = NULL;
  node *x = root;
  while( x != NULL ){
    y = x;
    if( z->key < x->key )
      x = x->l;
    else
      x = x->r;
  }
  z->p = y;
  if( y == NULL )
    root = z;
  else if( z->key < y->key )
    y->l = z;
  else
    y->r = z;
}

bool find(int k){
  node* x = root;
  while( x != NULL ){
    if( k < x->key )
      x = x->l;
    else if( k > x->key )
      x = x->r;
    else
      return true;
  }
  return false;
}

void delete_node(node *x){
  if( x->l == NULL && x->r == NULL ){
    if( x->p != NULL ){
      if( x->p->l == x ) x->p->l = NULL;
      else x->p->r = NULL;
    }
    delete x;
  } else if( x->l == NULL ){
    x->r->p = x->p;
    if( x->p != NULL ){
      if( x->p->l == x ) x->p->l = x->r;
      else x->p->r = x->r;
    }
    delete x;
  } else if( x->r == NULL ){
    x->l->p = x->p;
    if( x->p != NULL ){
      if( x->p->l == x ) x->p->l = x->l;
      else x->p->r = x->l;
    }
    delete x;
  }
}

void del(int key){
  node* x = root;
  while( x != NULL ){
    if( key < x->key )
      x = x->l;
    else if( key > x->key )
      x = x->r;
    else
      break;
  }

  if( x->l && x->r ){
    node* y = x->r;
    while( y->l && y->r )
      y = y->l;
    x->key = y->key;
    delete_node(y);
  } else {
    delete_node(x);
  }
}

void inorder(node* n){
  if( n == NULL) return;
  inorder(n->l);
  cout << " " << n->key;
  inorder(n->r);
}

void preorder(node* n){
  if( n == NULL ) return;
  cout << " " << n->key;
  preorder(n->l);
  preorder(n->r);
}

int main(){
  int N;
  cin >> N;
  for(int i=0;i<N;i++){
    string s; int k;
    cin >> s;
    if( s[0] == 'i' ) {
      cin >> k;
      insert(make_node(k));
    } else if( s[0] == 'f' ){
      cin >> k;
      if( find(k) ) cout << "yes" << endl;
      else cout << "no" << endl;
    } else if( s[0] == 'p' ){
      inorder(root); cout << endl;
      preorder(root); cout << endl;
    } else {
      cin >> k;
      del(k);
    }
  }
}