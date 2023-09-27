#include <cstdlib>
#include <iostream>
using namespace std;

struct Node {
  long key;
  Node *parent, *left, *right;
};

Node *root, *nil;

void insert(long k) {
  Node *y = nil;
  Node *x = root;

  Node *z;
  z = (Node*)malloc(sizeof(Node));
  z->key = k;
  z->parent = nil;
  z->left = nil;
  z->right = nil;

  while (x != nil) {
    y = x;
    if (z->key < x->key) x = x->left;
    else x = x->right;
  }

  z->parent = y;

  if (y == nil) {
    root = z;
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
}

void in(Node* n) {
  if (n == nil) return;
  in(n->left);
  cout << ' ' << n->key;
  in(n->right);
}

void pre(Node* n) {
  if (n == nil) return;
  cout << ' ' << n->key;
  pre(n->left);
  pre(n->right);
}

void find(long k) {
  Node* x = root;
  while (x != nil && x->key != k) {
    if (k < x->key) x = x->left;
    else x = x->right;
  }
  if (x == nil) cout << "no";
  else cout << "yes";
  cout << endl;
}

void print() {
  in(root); cout << endl;
  pre(root); cout << endl;
}

int main() {

  long l; cin >> l;

  while (l--) {
    string s; cin >> s;

    if (s == "insert") {
      long k; cin >> k;
      insert(k);
    } else if (s == "find") {
      long k; cin >> k;
      find(k);
    } else {
      print();
    }
  }

  return 0;
}