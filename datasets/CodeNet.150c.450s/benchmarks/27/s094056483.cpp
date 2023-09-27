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

// Node T[500500]; // ??????????¶???????????????§?????????????????????
Node *root = NULL;

void insert(Node *z) {
  Node *y = NULL;
  Node *x = root;
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
      Node *child = (Node*)malloc(sizeof(Node));
      child->key = key;
      child->parent = NULL;
      child->left = NULL;
      child->right = NULL;
      insert(child);
    } else {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }

  return 0;
}