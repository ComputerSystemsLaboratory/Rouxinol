#include <iostream>
#include <stdio.h>
using namespace std;

struct Node {
  Node* parent;
  Node* left;
  Node* right;
  int value;
  Node() : parent(NULL), left(NULL), right(NULL), value(-1) {
  }
};

Node* root = NULL;

void insert(int value) {
  if(root == NULL) {
    root = new Node();
    root->value = value;
    return;
  }

  Node* parent = root;
  Node* node = root;
  int left = 0;
  while(node != NULL) {
    parent = node;
    if(node->value < value) {
      left = 0;
      node = node->right;
    } else {
      left = 1;
      node = node->left;
    }
  }

  Node* newNode = new Node();
  newNode->value = value;
  newNode->parent = parent;
  if(left == 1) {
    parent->left = newNode;
  } else {
    parent->right = newNode;
  }
}

void printInOrder(Node* n) {
  if(n->left != NULL)
    printInOrder(n->left);
  cout << " " << n->value;
  if(n->right != NULL)
    printInOrder(n->right);
}

void printPreOrder(Node* n) {
  cout << " " << n->value;
  if(n->left != NULL)
    printPreOrder(n->left);
  if(n->right != NULL)
    printPreOrder(n->right);
}

void print() {
  printInOrder(root);
  cout << endl;
  printPreOrder(root);
  cout << endl;
}

void find(int value) {
  Node* n = root;
  while(n != NULL) {
    if(n->value == value) {
      cout << "yes" << endl;
      return;
    } else if(n->value < value) {
      n = n->right;
    } else {
      n = n->left;
    }
  }
  cout << "no" << endl;
}

int main() {
  int n;
  cin >> n;
  for(int i=0; i<n; i++) {
    string op;
    cin >> op;

    if(op.compare("insert") == 0) {
      int value;
      cin >> value;

      insert(value);
    } else if(op.compare("print") == 0) {
      print();
    } else if(op.compare("find") == 0) {
      int value;
      cin >> value;

      find(value);
    } else {
      cout << "unknown op: " << op << endl;
      return 1;
    }
  }
  return 0;
}