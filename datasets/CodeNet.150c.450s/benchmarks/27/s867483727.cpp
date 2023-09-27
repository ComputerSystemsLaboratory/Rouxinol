#include <iostream>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;

struct Node {
  int key;
  Node *parent, *left, *right;
};

Node* NIL;

int m;
Node* root;

void init() {
  NIL = new Node;
  NIL->parent = NIL;
  NIL->left = NIL;
  NIL->right = NIL;
  root = NIL;
}

void insert(Node* z) {
  Node* y = NIL;
  Node* x = root;
  while (x != NIL) {
    y = x;
    if (z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if (y == NIL) root = z;
  else if (z->key < y->key) y->left = z;
  else y->right = z;
}

void preParse(Node* u) {
  if (u == NIL) return;
  cout << " " << u->key;
  preParse(u->left);
  preParse(u->right);
}

void inParse(Node* u) {
  if (u == NIL) return;
  inParse(u->left);
  cout << " " << u->key;
  inParse(u->right);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  init();
  cin >> m;
  rep(i, m) {
    string com;
    int key;
    cin >> com;
    if (com == "print") {
      inParse(root);
      cout << endl;
      preParse(root);
      cout << endl;
    } else {
      cin >> key;
      Node* z = new Node {key, NIL, NIL, NIL};
      insert(z);
    }
  }
}

