/*
 * c.cc: 
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

const int MAX_N = 25;

/* typedef */

typedef vector<int> vi;

struct Node {
  int id, prt, lc, rc;
  Node(): prt(-1), lc(-1), rc(-1) {}
};

/* global variables */

Node nds[MAX_N];

/* subroutines */

void preorder(int u, vi &v) {
  v.push_back(nds[u].id);
  if (nds[u].lc >= 0) preorder(nds[u].lc, v);
  if (nds[u].rc >= 0) preorder(nds[u].rc, v);
}

void inorder(int u, vi &v) {
  if (nds[u].lc >= 0) inorder(nds[u].lc, v);
  v.push_back(nds[u].id);
  if (nds[u].rc >= 0) inorder(nds[u].rc, v);
}

void postorder(int u, vi &v) {
  if (nds[u].lc >= 0) postorder(nds[u].lc, v);
  if (nds[u].rc >= 0) postorder(nds[u].rc, v);
  v.push_back(nds[u].id);
}

void print_vec(vi &v) {
  for (int i = 0; i < v.size(); i++) printf(" %d", v[i]);
  putchar('\n');
}

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int id, lc, rc;
    cin >> id >> lc >> rc;

    nds[id].id = id;
    if (lc >= 0) {
      nds[id].lc = lc;
      nds[lc].prt = id;
    }
    if (rc >= 0) {
      nds[id].rc = rc;
      nds[rc].prt = id;
    }
  }

  int root = -1;
  for (int i = 0; i < n; i++)
    if (nds[i].prt < 0) {
      root = i;
      break;
    }

  vi v;

  puts("Preorder");
  v.clear();
  preorder(root, v);
  print_vec(v);
  
  puts("Inorder");
  v.clear();
  inorder(root, v);
  print_vec(v);

  puts("Postorder");
  v.clear();
  postorder(root, v);
  print_vec(v);
return 0;
}