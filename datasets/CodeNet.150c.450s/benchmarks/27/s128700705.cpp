#include<iostream>
#include<string>
using namespace std;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int key) {
  Node *x, *y, *z;
  x = root;
  y = NIL;
  z = new Node;

  while (x != NIL) {
    y = x;
    if (key < x->key) x = x->left;
    else x = x->right;    
  }

  if (y == NIL) root = z;
  else if (key < y->key) y->left = z;
  else y->right = z;

  z->parent = y;
  z->key = key;
  z->left = NIL;
  z->right = NIL;
}

void inorder(Node *x) {
  if (x == NIL) return;
  inorder(x->left);
  cout << " " << x->key;
  inorder(x->right);
}

void preorder(Node *x) {
  if (x == NIL) return;
  cout << " " << x->key;
  preorder(x->left);
  preorder(x->right);
}

void print() {
  inorder(root);
  cout << endl;
  preorder(root);
  cout << endl;
}

int main() {
  int m, key;
  string com;

  // init
  root = NIL;

  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> com;
    if (com[0] == 'i') {
      cin >> key;
      insert(key);
    } else {
      print();
    }
  }  

  return 0;
}

