#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

int const MAX = 101;
int const NIL = -1;
struct Node {
  int parent, left, right;
} T[MAX];

void preParse(int u) {
  if (u == NIL) return;
  printf(" %d", u);
  preParse(T[u].left);
  preParse(T[u].right);
}

void inParse(int u) {
  if (u == NIL) return;
  inParse(T[u].left);
  printf(" %d", u);
  inParse(T[u].right);
}

void postParse(int u) {
  if (u == NIL) return;
  postParse(T[u].left);
  postParse(T[u].right);
  printf(" %d", u);
}

int main() {
  int n;
  cin >> n;
  rep(i,n) T[i].parent = T[i].left = T[i].right = NIL;

  int id, left, right;
  rep(i,n) {
    cin >> id >> left >> right;
    T[id].left = left;
    T[id].right = right;
    if (left != NIL) T[left].parent = id;
    if (right != NIL) T[right].parent = id;
  }
  int root;
  rep(i,n) {
    if (T[i].parent == NIL) root = i;
  }

  cout << "Preorder" << endl;
  preParse(root);
  cout << endl;
  cout << "Inorder" << endl;
  inParse(root);
  cout << endl;
  cout << "Postorder" << endl;
  postParse(root);
  cout << endl;
  
  return 0;
}

