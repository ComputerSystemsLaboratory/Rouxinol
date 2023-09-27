#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
  int value = -1;
  Node *parent = NULL;
  Node *left = NULL;
  Node *right = NULL;
};

Node* tree;

int find(Node* node, int p) {
  if (node == NULL) {
    return 0;
  } else if (node->value == p) {
    return 1;
  } else if (node->value < p) {
    return find(node->right, p);
  } else {
    return find(node->left, p);
  }
}

void insert(int p) {
  Node* z = new Node();
  z->value = p;
  
  if (tree == NULL) {
    tree = z;
    return;
  }

  Node* y = NULL;
  Node* x = tree;
  
  while (x != NULL) {
    y = x;
    if (z->value < x->value) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  z->parent = y;
  
  if (y == NULL) {
    tree = z;
  } else if (z->value < y->value) {
    y->left = z;
  } else {
    y->right = z;
  }
}

void inorder(Node* node) {
  if (node == NULL) return;
  inorder(node->left);
  cout << " " << node->value;
  inorder(node->right);
}

void print_inorder(Node* node) {
  inorder(node);
  cout << endl;
}

void preorder(Node* node) {
  if (node == NULL) return;
  cout << " " << node->value;
  preorder(node->left);
  preorder(node->right);
}

void print_preorder(Node* node) {
  preorder(node);
  cout << endl;
}

int main() {
  int N; cin >> N;
  string queue;
  int p;

  for (int i = 0; i < N; i++) {
    cin >> queue;
    if (queue == "insert") {
      cin >> p;
      insert(p);
    } else if (queue == "find") {
      cin >> p;
      cout << (find(tree, p) ? "yes" : "no") << endl;
    } else {
      print_inorder(tree);
      print_preorder(tree);
    }
  } 
}


