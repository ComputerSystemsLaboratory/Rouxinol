#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

struct node {
  int key;
  node *parent, *right, *left;
};

node *NIL, *root;

void insert(int k) {
  node *y = NIL;
  node *x = root;
  node *z = (node *)malloc(sizeof(node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
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

void find(int k) {
  node *x = root;
  while (x != NIL) {
    if (x->key == k) {
      cout << "yes" << endl;
      return;
    } else if (k < x->key) {
      x = x->left;
    } else if (k > x->key) {
      x = x->right;
    }
  }
  cout << "no" << endl;
}

void inorderBody(node *u) {
  if (u == NIL) return;
  inorderBody(u->left);
  cout << " " << u->key;
  inorderBody(u->right);
}

void inorder() {
  inorderBody(root);
  cout << endl;
}

void preorderBody(node *u) {
  if (u == NIL) return;
  cout << " " << u->key;
  preorderBody(u->left);
  preorderBody(u->right);
}

void preorder() {
  preorderBody(root);
  cout << endl;
}

int main() {
  int m, tmp;
  string s;
  root = NIL;
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> s;
    if (s == "insert") {
      cin >> tmp;
      insert(tmp);
    } else if (s == "print") {
      inorder();
      preorder();
    } else if (s == "find") {
      cin >> tmp;
      find(tmp);
    }
  }
}
