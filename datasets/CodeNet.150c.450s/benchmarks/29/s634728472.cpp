#include <bits/stdc++.h>

typedef struct Node {
  Node *left, *right;
  int data;
} Node;

Node base;

void Node_init() {
  base.right = &base;
  base.left  = &base;
  return;
}

void Node_insert(int x) {
  Node *node = new Node();
  node->data = x;
  node->right = base.right;
  node->left  = &base;
  base.right->left = node;
  base.right = node;
  return;
}

void Node_delete(int x) {
  Node *node = base.right;
  while( node != &base ) {
    if( node->data == x ) {
      node->right->left = node->left;
      node->left->right = node->right;
      delete node;
      return;
    }
    node = node->right;
  }
  return;
}

void Node_deleteFirst(void) {
  Node *node = base.right;
  node->right->left = node->left;
  node->left->right = node->right;
  delete node;
  return;
}

void Node_deleteLast(void) {
  Node *node = base.left;
  node->right->left = node->left;
  node->left->right = node->right;
  delete node;
  return;
}

void Node_print(void) {
  Node *node = base.right;
  while( node != &base ) {
    if( node->right == &base ) {
      printf("%d\n", node->data);
      return;
    }
    else {
      printf("%d ", node->data);
    }
    node = node->right;
  }
  return;
}

int main(void) {

  int N;
  char str[256];
  int x;

  Node_init();
  
  std::cin >> N;
  for(int i = 0; i < N; ++i) {
    scanf("%s", str);
    if( strcmp(str,"insert") == 0 ) {
      scanf("%d", &x);
      Node_insert(x);
    }
    else if( strcmp(str, "delete") == 0 ) {
      scanf("%d", &x);
      Node_delete(x);
    }
    else if( strcmp(str, "deleteFirst") == 0 ) {
      Node_deleteFirst();
    }
    else if( strcmp(str, "deleteLast") == 0 ) {
      Node_deleteLast();
    }
    else {
      std::cout << "Error : " << str << std::endl;
      exit(1);
    }
  }

  Node_print();

  return 0;
}