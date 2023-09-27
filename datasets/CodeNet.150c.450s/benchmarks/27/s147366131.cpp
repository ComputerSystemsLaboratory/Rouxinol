#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e18;
const ll mod = 1000000007;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return 1;
  }
  return 0;
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
int ctoi(char c) {
  if (c >= '0' && c <= '9') {
    return c - '0';
  }
  return 0;
}
ll factorial(ll n) {
  if (n == 1) {
    return 1;
  }
  ll ans = factorial(n-1);
  return ans*n;
}
ll gcd(ll a, ll b) {
  if (a < b) {
    ll tmp = a;
    a = b;
    b = tmp;
  }
  ll r = a%b;
  while(r != 0) {
    a = b;
    b = r;
    r = a%b;
  }
  return b;
}
ll lcm(ll a, ll b) {
  return (a/gcd(a, b))*b;
}

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
  return;
}

void inorder(Node *u) {
  if (u == NIL) return;
  inorder(u->left);
  cout << ' ' << u->key;
  inorder(u->right);
}

void preorder(Node *u) {
  if (u == NIL) return;
  cout << ' ' << u->key;
  preorder(u->left);
  preorder(u->right);
}

int main() {
  ll n, m;
  string s;
  cin >> n;
  rep(i, n) {
    cin >> s;
    if (s.at(0) == 'i') {
      cin >> m;
      insert(m);
    } else {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }
}
