#include <bits/stdc++.h>
using namespace std;

struct Node {
  int key;
  Node *right, *left, *parent;  
};

Node  *NIL;

struct BST {
  Node *root;

  BST() {
    root = NIL;
  }

  void insert(int k) {
    Node *y = NIL;
    Node *x = root;
    Node *z = (Node *)malloc(sizeof(Node));    
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while ( x != NIL ) {
      y = x;
      if ( z->key < x->key ) {
	x = x->left;
      } else {
	x = x->right;
      }
    }

    z->parent = y;
    if ( y == NIL ) {
      root = z;
    } else {
      if ( z->key < y->key ) {
	y->left = z;	
      } else {
	y->right = z;
      }
    }
  }

  bool find(int k) {
    Node *u = root;
    while ( u != NIL ) {
      if ( k == u->key ) {
	return true;
      } else if ( k < u->key ) {
	u = u->left;
      } else {
	u = u->right;
      }
    }

    return false;
  }
};

void inorder(Node *u) {
  if ( u == NIL ) return;
  inorder(u->left);
  cout << " " << u->key;
  inorder(u->right);  
}

void preorder(Node *u) {
  if ( u == NIL ) return;
  cout << " " << u->key;
  preorder(u->left);
  preorder(u->right);  
}

int main() {
  int m;
  cin >> m;

  BST bst;
  while ( m-- ) {
    string c;
    cin >> c;
    int n;
    if ( c == "insert" ) {      
      cin >> n;
      bst.insert(n);      
    } else if ( c == "find" ) {
      cin >> n;
      if ( bst.find(n) ) cout << "yes" << endl;
      else cout << "no" << endl;
    } else {
      inorder(bst.root);
      cout << endl;
      preorder(bst.root);
      cout << endl;      
    }
  }
  
  return 0;
}


