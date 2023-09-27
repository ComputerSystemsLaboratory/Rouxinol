#include<cstdio>
#include<vector>
#include<cstring>

using namespace std;


struct Node {
  int key;
  Node *left, *right, *parent;
};


Node *root, *NIL;

void insert(int n) {
  Node *x = root;
  Node *y = NIL;
  Node *z;

  z = new Node;
  z->key = n;
  z->left = NIL;
  z->right = NIL;

  while (x != NIL) {
    y = x;
    if (z->key < x->key)
      x = x->left;
    else
      x = x->right;
  }

  z->parent = y;  
  if (y == NIL) {
    root = z;
  }
  else {
    if (z->key < y->key)
      y->left = z;
    else
      y->right = z;
  }
}


Node* _find(Node *u, int k) {
  while (u != NIL && k != u->key) {
    if (k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}

void find(int n) {
  Node *t = _find(root, n);
  if (t != NIL) printf("yes\n");
  else printf("no\n");
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

void print() {
  inorder(root);
  printf("\n");
  preorder(root);
  printf("\n");
}


void solve(int n) {
  char cmd[20];
  int num;
  
  for (int i = 0; i < n; ++i) {
    scanf("%s %d ", cmd, &num);
    if (strcmp(cmd, "print") == 0)
      print();
    else if (strcmp(cmd, "insert") == 0)
      insert(num);
    else if (strcmp(cmd, "find") == 0)
      find(num);
  }
}

int main() {

  int n;
  scanf("%d ", &n);

  solve(n);
  return 0;
}

