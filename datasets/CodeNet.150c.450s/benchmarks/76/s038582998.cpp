#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

struct Node {
  int data;
  Node *left, *right;
} *NIL, *root = NIL;
int in[500001], pre[500001], _in, _pre;

void insert (Node *node) {
  Node *y = NIL;
  Node *x = root;

  while (x != NIL) {
    y = x;

    if (node->data < x->data)
      x = x->left;
    else
      x = x->right;
  }

  if (y == NIL)
    root = node;
  else if (node->data < y->data)
    y->left = node;
  else
    y->right = node;
}

void inorder (Node *node) {
  if (node == NIL)
    return;

  inorder(node->left);

  in[_in++] = node->data;

  inorder(node->right);
}

void preorder (Node *node) {
  if (node == NIL)
    return;
  
  pre[_pre++] = node->data;

  preorder(node->left);
  preorder(node->right);
}

void printArrary (int arr[], int length) {
  for (int i = 0; i < length; i++)
    cout << " " << arr[i];

  cout << endl;
}

void print () {
  _in = 0;
  _pre = 0;
  inorder(root);
  printArrary(in, _in);
  preorder(root);
  printArrary(pre, _pre);
}

void find (int n) {
  Node *node = root;
  bool found = false;

  while (node != NIL) {
    if (node->data == n) {
      found = true;
      break;
    }

    if (node->data > n)
      node = node->left;
    else
      node = node->right;
  }

  if (found)
    cout << "yes" << endl;
  else
    cout << "no" << endl;
}

int main () {
  int n, m;
  char s[100];

  scanf("%d\n", &n);

  for (int i = 0; i < n; i++) {
    cin >> s;

    if (s[0] == 'i') {
      cin >> m;

      Node *node = (Node *)malloc(sizeof(Node));

      node->left = NIL;
      node->right = NIL;
      node->data = m;

      insert(node);
    } else if (s[0] == 'f') {
      cin >> m;
      
      find(m);
    } else {
      print();
    }
  }

  return 0;
}
