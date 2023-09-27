#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ---------------------
// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

// debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// ---------------------
#define INF 922337203685477580
typedef long long ll;
#define NIL -INF

typedef struct Node_t {
  ll key;
  Node_t *parent;
  Node_t *left;
  Node_t *right;
} Node;

Node *root = NULL;

void insert(ll key) {
  Node *y = NULL;
  Node *x = root;

  Node *z = (Node*)malloc(sizeof(Node));
  z->key = key;
  z->parent = NULL;
  z->left = NULL;
  z->right = NULL;

  while(x != NULL) {
    y = x;
    if (z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  z->parent = y;

  if (y == NULL) {
    root = z;
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
}

int find(Node *r, ll key) {
  if (r == NULL) return 0;
  if (r->key == key) return 1;

  if (key < r->key) {
    return find(r->left, key);
  } else {
    return find(r->right, key);
  }
}

void inorder(Node *n) {
  if (n == NULL) return;

  inorder(n->left);
  cout << " " << n->key;
  inorder(n->right);
}

void preorder(Node *n) {
  if (n == NULL) return;

  cout << " " << n->key;
  preorder(n->left);
  preorder(n->right);
}

int main() {
  int n;
  cin >> n;

  // REP(i, 500500) {
  //   Node n = {NIL, NIL, NIL, NIL};
  //   T[i] = n;
  // }

  REP(i, n) {
    string cmd;
    cin >> cmd;

    if (cmd == "insert") {
      ll key;
      cin >> key;
      insert(key);
    } else if (cmd == "find") {
      ll key;
      cin >> key;
      if (find(root, key)) {
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    } else {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }

  return 0;
}