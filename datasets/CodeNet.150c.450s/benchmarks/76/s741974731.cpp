#include <bits/stdc++.h>
using namespace std;

struct Node {
  int key;
  Node *p, *l, *r;
};

Node *null, *root;

void Print_P(Node *n) {
  if (n == null)
    return;
  printf(" %d", n->key);
  Print_P(n->l);
  Print_P(n->r);
}

void Print_M(Node *n) {
  if (n == null)
    return;
  Print_M(n->l);
  printf(" %d", n->key);
  Print_M(n->r);
}

const char *Find(Node *n, int k) {
  while (n != null && k != n->key) {
    if (k < n->key)
      n = n->l;
    else
      n = n->r;
  }
  if (n != null)
    return "yes";
  else
    return "no";
}

void Insert(int k) {
  Node *y = null, *x = root, *z = (Node *)malloc(sizeof(Node));
  z->key = k, z->l = null, z->r = null;
  while (x != null) {
    y = x;
    if (z->key < x->key)
      x = x->l;
    else
      x = x->r;
  }
  z->p = y;

  if (y == null)
    root = z;
  else if (z->key < y->key)
    y->l = z;
  else
    y->r = z;
}

int main() {
  int m;
  scanf("%d", &m);
  for (int i = 0; i < m; ++i) {
    char o[7];
    scanf("%s", o);
    if (strcmp(o, "insert") == 0) {
      int k;
      scanf("%d", &k);
      Insert(k);
    } else if (strcmp(o, "find") == 0) {
      int k;
      scanf("%d", &k);
      printf("%s\n", Find(root, k));
    } else {
      Print_M(root);
      printf("\n");
      Print_P(root);
      printf("\n");
    }
  }
}
