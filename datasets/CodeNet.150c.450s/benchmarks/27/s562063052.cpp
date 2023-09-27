#include <iostream>
#include <string>
using namespace std;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int key) {
  Node *y = NIL;
  Node *x = root;
  Node *z = new Node();
  z->key = key;

  while (x != NIL) {
    y = x;
    if (z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  z->parent = y;

  if (y == NIL) {
    root = z;
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
}

void printPreorder(Node *node) {
  cout << " " << node->key;
  if (node->left != NIL) printPreorder(node->left);
  if (node->right != NIL) printPreorder(node->right);
}

void printInorder(Node *node) {
  if (node->left != NIL) printInorder(node->left);
  cout << " " << node->key;
  if (node->right != NIL) printInorder(node->right);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  string command;
  int v;
  for (int i = 0; i < n; i++) {
    cin >> command;
    if (command == "insert") {
      cin >> v;
      insert(v);
    } else if (command  == "print") {
      printInorder(root);
      cout << endl;
      printPreorder(root);
      cout << endl;
    }
  }

  return 0;
}