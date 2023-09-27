/*
 * b.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

/* typedef */

typedef vector<int> vi;

struct Node {
  int key;
  struct Node *l, *r;
  Node(): l(NULL), r(NULL) {}
  Node(int _k): key(_k), l(NULL), r(NULL) {}
};

/* global variables */

/* subroutines */

void insert(Node *(&root), Node *z) {
  Node *y = NULL, *x = root;

  while (x != NULL) {
    y = x;
    if (z->key < x->key) x = x->l;
    else x = x->r;
  }

  if (y == NULL) root = z;
  else if (z->key < y->key) y->l = z;
  else y->r = z;
}

bool find(Node *root, int key) {
  Node *x = root;

  while (x != NULL) {
    if (key == x->key) return true;
    x = (key < x->key) ? x->l : x->r;
  }
  return false;
}

void inorder(Node *nd, vi &v) {
  if (nd != NULL) {
    inorder(nd->l, v);
    v.push_back(nd->key);
    inorder(nd->r, v);
  }
}

void preorder(Node *nd, vi &v) {
  if (nd != NULL) {
    v.push_back(nd->key);
    preorder(nd->l, v);
    preorder(nd->r, v);
  }
}

void print_vec(vi &v) {
  for (int i = 0; i < v.size(); i++) printf(" %d", v[i]);
  putchar('\n');
}

/* main */

int main() {
  Node *root = NULL;

  int m;
  cin >> m;

  while (m--) {
    string op;
    cin >> op;

    if (op[0] == 'i') {
      int key;
      cin >> key;
      insert(root, new Node(key));
    }
    else if (op[0] == 'f') {
      int key;
      cin >> key;
      cout << (find(root, key) ? "yes" : "no") << endl;
    }
    else {
      vi v;

      v.clear();
      inorder(root, v);
      print_vec(v);

      v.clear();
      preorder(root, v);
      print_vec(v);
    }
  }
  return 0;
}