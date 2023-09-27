#include <bits/stdc++.h>

using namespace std;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int key) {
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = key;
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
  } else {
    if (z->key < y->key) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

void find(int k) {
  Node *node = root;
  while (node != NIL) {
    if (k == node->key) {
      printf("yes\n");
      return;
    }
    if (k < node->key) {
      node = node->left;
    } else if (k > node->key) {
      node = node->right;
    }
  }
  printf("no\n");
  return;
}

void inorder(Node *node) {
  if (node == NIL) return;
  inorder(node->left);
  printf(" %d", node->key);
  inorder(node->right);
}
void preorder(Node *node) {
  if (node == NIL) return;
  printf(" %d", node->key);
  preorder(node->left);
  preorder(node->right);
}

int main() {
  int n; cin >> n;

  for (int i = 0; i < n; i++) {
    string s; int key;
    cin >> s;
    if (s == "insert") {
      cin >> key;
      insert(key);
    } else if (s == "find") {
      cin >> key;
      find(key);
    } else if (s == "print") {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}

