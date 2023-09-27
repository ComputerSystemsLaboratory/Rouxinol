#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
#define NIL -1


struct Node{
  int parent, left, right;
};

Node T[MAX];
int n, D[MAX], H[MAX];

void setDepth(int u, int d) {
  if (u == NIL) return;
  D[u] = d;
  setDepth(T[u].left, d+1);
  setDepth(T[u].right, d+1);
}

int setHeight(int u) {
  int h1 = 0, h2 = 0;
  if (T[u].left != NIL) {
    h1 = setHeight(T[u].left) + 1;
  }
  if (T[u].right != NIL) {
    h2 = setHeight(T[u].right) + 1;
  }
  H[u] = max(h1, h2);
  return H[u];
}

int getSibling(int u) {
  if (T[u].parent == NIL) return NIL;
  if (T[T[u].parent].left != u && T[T[u].parent].left != NIL) {
    return T[T[u].parent].left;
  }
  if (T[T[u].parent].right != u && T[T[u].parent].right != NIL) {
    return T[T[u].parent].right;
  }
  return NIL;
}

void preParse(int u) {
  if (u == NIL) return;
  printf(" %d", u);
  preParse(T[u].left);
  preParse(T[u].right);
}

void inOrder(int u) {
  if (u == NIL) return;
  inOrder(T[u].left);
  printf(" %d", u);
  inOrder(T[u].right);
}

void postParse(int u) {
  if (u == NIL) return;
  postParse(T[u].left);
  postParse(T[u].right);
  printf(" %d", u);
}

int main () {
  int v, l, r, root = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) T[i].parent = NIL;

  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &v, &l, &r);
    T[v].left = l; T[v].right = r;

    if (l != NIL) T[l].parent = v;
    if (r != NIL) T[r].parent = v;
  }

  for (int i = 0; i < n; i++) {
    if (T[i].parent == NIL) root = i;
  }

  setDepth(root, 0);
  setHeight(root);

  cout << "Preorder" << endl;
  preParse(root); printf("\n");
  cout << "Inorder" << endl;
  inOrder(root); printf("\n");
  cout << "Postorder" << endl;
  postParse(root); printf("\n");

  return 0;
}

