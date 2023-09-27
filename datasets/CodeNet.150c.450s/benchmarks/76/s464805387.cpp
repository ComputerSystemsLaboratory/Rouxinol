#include<cstdlib>
#include<iostream>
#include<string>

using namespace std;

struct Node {
  int key;
  Node* right;
  Node* left;
  Node* parent;
};

Node* root;
Node* NIL;

Node* find(Node* u, int k) {
  while (u != NIL && k != u->key) {
    if (k < u->key) {
      u = u->left;
    } else {
      u = u->right;
    }
  }
  return u;
}

void insert(int k) {
  Node* y = NIL;
  Node* x = root;
  Node* z;

  z = (Node*) malloc(sizeof(Node));
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
  } else {
    if (z->key < y->key) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

void preOrder(Node* u) {
  if (u == NIL) {
    return;
  }
  cout << " " << u->key;
  preOrder(u->left);
  preOrder(u->right);
}

void inOrder(Node* u) {
  if (u == NIL) {
    return;
  }
  inOrder(u->left);
  cout << " " << u->key;
  inOrder(u->right);
}

int main() {
  int N;
  cin >> N;

  int x;
  string com;
  for (int i = 0; i < N; i++) {
    cin >> com;
    if (com == "insert") {
      cin >> x;
      insert(x);
    } else if (com == "find") {
      cin >> x;
      Node* f = find(root, x);
      if (f != NIL) {
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    } else if (com == "print") {
      inOrder(root);
      cout << endl;
      preOrder(root);
      cout << endl;
    }
  }

  return 0;
}
