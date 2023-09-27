#include<iostream>
#include<string>
using namespace std;

class Node {
public:    
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int key) {
  Node *x, *y, *z;

  z = new Node;
  z->key = key;
  z->left = z->right = NIL;
  y = NIL;
  x = root;

  while (x != NIL) {
    y = x;
    if (z->key < y->key) x = x->left;
    else x = x->right;
  }

  z->parent = y;
  if (y == NIL) root = z;
  else if (z->key < y->key) y->left = z;
  else y->right = z;
}

void preorder(Node *node) {
  if (node == NIL) return;
  cout << " " << node->key;
  preorder(node->left);
  preorder(node->right);
}

void inorder(Node *node) {
  if (node == NIL) return;
  inorder(node->left);
  cout << " " << node->key;
  inorder(node->right);
}

void print() {
  inorder(root);
  cout << endl;
  preorder(root);
  cout << endl;
};

bool find(int key) {
  Node *x = root;

  while (x != NIL) {
    if (key < x->key) x = x->left;
    else if (key > x->key)  x = x->right;
    else return true;
  }
  
  return false;
}

int main() {
  int i, m, key;
  string command;

  cin >> m;
  for (i = 0; i < m; i++) {
    cin >> command;
    if (command[0] == 'i') {
      cin >> key;
      insert(key);
    } else if (command[0] == 'f') {
      cin >> key;
      if (find(key)) cout << "yes" << endl;
      else cout << "no" << endl;
    } else {
      print();
    }
  }
    
  return 0;
}

