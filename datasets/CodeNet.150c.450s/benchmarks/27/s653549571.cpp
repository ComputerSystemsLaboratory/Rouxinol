#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repr(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define FORR(i, m, n) for (int i = (m); i >= (n); --i)
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const ll mod2 = 998244353;
const int INF = 1000000005;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int k) {
  Node *y = NIL, *x = root, *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while (x != NIL) {
    y = x;
    if (z->key < x->key) {
      x = x->left;
    }
    else {
      x = x->right;
    }
  }

  z->parent = y;
  if (y == NIL) {
    root = z;
  }
  else {
    if (z->key < y->key) {
      y->left = z;
    }
    else {
      y->right = z;
    }
  }
}

void preorder(Node *u) {
  if (u == NIL) return;
  cout << " " << u->key;
  preorder(u->left);
  preorder(u->right);
}

void inorder(Node *u) {
  if (u == NIL) return;
  inorder(u->left);
  cout << " " << u->key;
  inorder(u->right);
}

void print() {
  inorder(root);
  cout << endl;
  preorder(root);
  cout << endl;
}

int main() {
  int q, k;
  cin >> q;
  string com;
  rep(i, q) {
    cin >> com;
    if (com[0] == 'i') {
      cin >> k;
      insert(k);
    }
    else print();
  }


  
  return 0;
}
