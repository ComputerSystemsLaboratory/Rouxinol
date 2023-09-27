#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k) {
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
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

  z->parent = x;
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

Node *find(Node *x, int k) {
  while (x != NIL && k != x->key) {
    if (k < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  return x;
}

void inorder(Node *u) {
  if (u == NIL) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(Node *u) {
  if (u == NIL) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

int main() {
  int n, x;
  string s;
  cin >> n;
  rep(i,n) {
    cin >> s;
    if (s == "insert") {
      cin >> x;
      insert(x);
    } else if (s == "print") {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    } else if (s == "find") {
      cin >> x;
      Node *ans = find(root, x);
      if (ans == NIL) cout << "no" << endl;
      else cout << "yes" << endl;
    } else {
      cout << "Invalid command: " << s << endl;
    }
  }
  return 0;
}

