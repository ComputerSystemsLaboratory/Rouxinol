#include <iostream>
#include <cstdio>
#include <cstdlib>

struct Node {
  struct Node *right;
  struct Node *left;
  struct Node *parent;
  int key;
};

struct Node *insertNode(struct Node *root, int k){
  struct Node *y = NULL;
  struct Node *x = root;
  struct Node *newNode;

  newNode = (struct Node *) std::malloc(sizeof(struct Node));
  
  newNode->right = NULL;
  newNode->left = NULL;
  newNode->parent = NULL;
  newNode->key = k;

  while (x != NULL) {
    y = x;
    
    if (newNode->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }

  newNode->parent = y;

  if (y == NULL) {
    root = newNode;
  } else if (newNode->key < y->key) {
    y->left = newNode;
  } else {
    y->right = newNode;
  }

  return root;
}

void printByInorder(struct Node *root) {
  if (root == NULL) {
    return;
  }

  if ((root->left == NULL) && (root->right == NULL)) {
    std::cout << " " << root->key;
    return;
  }

  printByInorder(root->left);
  std::cout << " " << root->key;
  printByInorder(root->right);
}

void printByPreorder(struct Node *root) {
  if (root == NULL) {
    return;
  }

  if ((root->left == NULL) && (root->right == NULL)) {
    std::cout << " " << root->key;
    return;
  }
  
  std::cout << " " << root->key;
  printByPreorder(root->left);
  printByPreorder(root->right);
}

int main(){
  int n = 0;
  struct Node *root = NULL;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::string command;
    
    std::cin >> command;
    
    if (command.at(0) == 'p') {
      printByInorder(root);
      std::cout << std::endl;


      printByPreorder(root);
      std::cout << std::endl;
    } else if (command.at(0) == 'i') {
      int k = 0;

      std::cin >> k;
      
      root = insertNode(root, k);
    }
  }

  return 0;
}