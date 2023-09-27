#include <iostream>
using namespace std;

struct Node {
  int key;
  Node *right, *left, *parent;
};

Node *root, *NIL;

void preParse(Node *u) {
  if (u == NIL) {
    return;
  }
  cout << " " << u->key;
  preParse(u->left);
  preParse(u->right);
}

void inParse(Node *u) {
  if (u == NIL) {
    return;
  }
  inParse(u->left);
  cout << " " << u->key;
  inParse(u->right);
}

void insert(int k) {
  Node* y = NIL;
  Node* x = root;
  Node* z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->right = NIL;
  z->left = NIL;

  while(x != NIL) {
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
    if ( z->key < y->key ) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

Node* find(Node *u, int k) {
  while (u != NIL && k != u->key) {
    if (k < u->key) {
      u = u->left;
    } else {
      u = u->right;
    }
  }
  return u;
}

int main() {
  int m;
  cin >> m;
  for (int i = 0; i < m; i ++) {
    string command;
    int x;
    cin >> command;
    if (command == "insert") {
      cin >> x;
      insert(x);
    } else if (command == "find") {
      cin >> x;
      Node* t = find(root, x);
      if (t != NIL) {
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    } else if (command == "print") {
      inParse(root);
      cout << endl;
      preParse(root);
      cout << endl;
    }
  }
}

