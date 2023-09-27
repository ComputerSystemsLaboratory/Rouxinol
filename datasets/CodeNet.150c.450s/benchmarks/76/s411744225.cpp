#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node* NIL;

int m;
Node* root;

void init() {
  NIL = new Node;
  NIL->parent = NIL;
  NIL->left = NIL;
  NIL->right = NIL;
  root = NIL;
}

void insert(int k) {
  Node* z = new Node {k, NIL, NIL, NIL};
  Node* y = NIL;
  Node* x = root;
  while (x != NIL) {
    y = x;
    if (z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if (y == NIL) root = z;
  else if (z->key < y->key) y->left = z;
  else y->right = z;
}

void preParse(Node* u) {
  if (u == NIL) return;
  cout << " " << u->key;
  preParse(u->left);
  preParse(u->right);
}

void inParse(Node* u) {
  if (u == NIL) return;
  inParse(u->left);
  cout << " " << u->key;
  inParse(u->right);
}

bool find(int k) {
  Node* c = root;
  while (c != NIL) {
    if (c->key == k) return true;
    else if (k < c->key) c = c->left;
    else c = c->right;
  }
  return false;
}

int main() {
  cin >> m;
  rep(i, m) {
    string com;
    cin >> com;
    int key;
    if (com == "insert") {
      cin >> key;
      insert(key);
    } else if (com == "print") {
      inParse(root);
      cout << endl;
      preParse(root);
      cout << endl;
    } else if (com == "find") {
      cin >> key;
      if (find(key)) cout << "yes" << endl;
      else cout << "no" << endl;
    } else {
      cout << "error" << endl;
    }
  }
}

