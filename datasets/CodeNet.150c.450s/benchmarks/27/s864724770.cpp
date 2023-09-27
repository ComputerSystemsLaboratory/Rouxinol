#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)

typedef long long ll;

class Node {
 public:
  int key;
  Node* parent;
  Node* left;
  Node* right;

  Node() {}
};

Node* NIL;
Node* root;

void Insert(const int& key) {
  Node* y = NIL;
  Node* x = root;
  Node* z = new Node();
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
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
}

void PrintInorder(const Node* node) {
  if (node == NIL) return;
  PrintInorder(node->left);
  cout << " " << node->key;
  PrintInorder(node->right);
}

void PrintPreorder(const Node* node) {
  if (node == NIL) return;
  cout << " " << node->key;
  PrintPreorder(node->left);
  PrintPreorder(node->right);
}

int main() {
  root = NIL;
  int n;
  cin >> n;
  FOR(i, 0, n) {
    string str;
    cin >> str;
    if (str == "insert") {
      int key;
      cin >> key;
      Insert(key);
    } else if (str == "print") {
      PrintInorder(root);
      cout << endl;
      PrintPreorder(root);
      cout << endl;
    }
  }
  return 0;
}
