
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
// #define NIL -1

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k) {
  Node *y = NIL;  // zの親を指す
  Node *x = root; // rootからzの親をたどるためのポインタ
  Node *z;

  z = new Node;
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while (x != NIL) {
    y = x;
    if (z->key < x-> key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }

  z->parent = y;
  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void inorder(Node *u) {
  if (u == NIL) return;
  inorder(u->left);
  cout << " " << u->key;
  inorder(u->right);
}

void preorder(Node *u) {
  if (u == NIL) return;
  cout << " " << u->key;
  preorder(u->left);
  preorder(u->right);
}

bool find(int k) {
  Node *x = root;

  while (x != NIL && x->key != k) {
    if(x->key > k) {
      x = x->left;
    } else {
      x = x-> right;
    }
  }

  return x != NIL;
}

int main() {
  int n;cin>>n;
  Node T[n];

  rep(i, n) {
    string cmd; cin>> cmd;
    if (cmd == "insert") {
      int key; cin >> key;
      insert(key);
    } else if (cmd == "print") {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    } else {
      int key; cin >> key;
      if(find(key)) cout << "yes" << endl;
      else cout << "no" << endl;
    }
  }
  return 0;
}

