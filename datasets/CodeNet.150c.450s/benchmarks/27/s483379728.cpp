#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct Node { int key; Node *parent, *left, *right; };

Node *root, *NIL;

void insert(int k) {
  Node *y = NIL;
  Node *x = root;
  Node *z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->parent = NIL;
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
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
}

void Preorder(Node *p) {
  printf(" %d", p->key);
  if (p->left != NIL) Preorder(p->left);
  if (p->right != NIL) Preorder(p->right);
}

void Inorder(Node *p) {
  if (p->left != NIL) Inorder(p->left);
  printf(" %d", p->key);
  if (p->right != NIL) Inorder(p->right);
}

void Postorder(Node *p) {
  if (p->left != NIL) Postorder(p->left);
  if (p->right != NIL) Postorder(p->right);
  printf(" %d", p->key);
}

int main() {
	int n;
  scanf("%d", &n);

  char str[12];
  int key;
  for ( int i = 0; i < n; i++ ) {
    scanf("%s", str);
    if ( strcmp(str, "insert") == 0 ) {
      scanf("%d", &key);
      insert(key);
    } else if ( strcmp(str, "print") == 0 ) {
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
  }

  return 0;
}

