#include <bits/stdc++.h>

#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

#define NIL -1
#define MAX_N 25

struct Node {
  int parent, left, right;
};
Node T[MAX_N + 5];

int findRoot(int n) {
  rep(i, n) {
    if (T[i].parent == NIL) return i;
  }
  return NIL;
}

void preorder(int i) {
  cout << " " << i;
  if (T[i].left != NIL) preorder(T[i].left);
  if (T[i].right != NIL) preorder(T[i].right);
}

void inorder(int i) {
  if (T[i].left != NIL) inorder(T[i].left);
  cout << " " << i;
  if (T[i].right != NIL) inorder(T[i].right);
}

void postorder(int i) {
  if (T[i].left != NIL) postorder(T[i].left);
  if (T[i].right != NIL) postorder(T[i].right);
  cout << " " << i;
}

int main() {
  int n;
  cin >> n;
  rep(i, n) {
    T[i].parent = NIL;
    T[i].left = NIL;
    T[i].right = NIL;
  }

  rep(i, n) {
    int pid, left, right;
    cin >> pid >> left >> right;
    T[pid].left = left;
    T[pid].right = right;
    if (left != NIL) T[left].parent = pid;
    if (right != NIL) T[right].parent = pid;
  }
  int root_id = findRoot(n);

  cout << "Preorder" << endl;
  preorder(root_id);
  cout << endl;

  cout << "Inorder" << endl;
  inorder(root_id);
  cout << endl;

  cout << "Postorder" << endl;
  postorder(root_id);
  cout << endl;
  return 0;
}

