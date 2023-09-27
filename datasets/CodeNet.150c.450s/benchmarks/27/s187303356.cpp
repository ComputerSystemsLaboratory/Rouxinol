#include<iostream>
using namespace std;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *NIL, *root;

void preorder(Node *node) {
  cout << " " << node->key;
  if (node->left != NIL) preorder(node->left);
  if (node->right != NIL) preorder(node->right);
}

void inorder(Node *node) {
  if (node->left != NIL) inorder(node->left);
  cout << " " << node->key;
  if (node->right != NIL) inorder(node->right);
}

void print() {
  inorder(root);
  cout << endl;
  preorder(root);
  cout << endl;  
}

void insert(int key) {
  Node *x, *y, *z;
  y = NIL;
  x = root;
  z = new Node;
  
  while (x != NIL) {
    y = x;
    if (key < x->key) x = x->left;
    else x = x->right;
  }
  
  z->parent = y;
  if (y == NIL) root = z;
  else if (key < y->key) y->left = z;
  else y->right = z;
  z->key = key;
  z->left = NIL;
  z->right = NIL;
}

int main() {
  int m, key;
  string com;
  // init
  NIL = new Node;
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

