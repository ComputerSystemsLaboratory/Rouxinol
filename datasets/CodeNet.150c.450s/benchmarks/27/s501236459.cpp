#include <bits/stdc++.h>
using namespace std;
using ll=long long;
template<class T> using V = vector<T>;
template<class T, class U> using P = pair<T, U>;
using vll = V<ll>;
using vvll = V<vll>;
#define rep(i, k, n) for (ll i=k; i<(ll)n; ++i)
#define REP(i, n) rep(i, 0, n)

const ll MOD = (ll)1e9 + 7;
const ll HIGHINF = (ll)1e18;

struct Node {
  ll key;
  Node *parent, *left, *right;
};
Node *root, *NIL;

void insert(ll k) {
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while (x!=NIL) {
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
  ll n; cin >> n;
  string com;
  REP(i, n) {
    cin >> com;
    if (com == "insert") {
      ll x; cin >> x;
      insert(x);
    } else if (com == "print") {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

