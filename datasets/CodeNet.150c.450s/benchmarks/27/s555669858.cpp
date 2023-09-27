#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node {
public:
  int key;
  Node* left;
  Node* right;
  Node(int key) {
    this->key = key;
    this->left = NULL;
    this->right = NULL;
  }
  void append_left(Node* left) {
    this->left = left;
  }
  void append_right(Node* right) {
    this->right = right;
  }
};

void insert(Node* root,Node* z) {
  Node* cur = root;
  Node* x = root;
  while(cur != NULL) {
    x = cur;
    if(z->key > cur->key) {
      cur = cur->right;
    }
    else {
      cur = cur->left;
    }
  }

  if(z->key > x->key) {
    x->append_right(z);
  }
  else {
    x->append_left(z);
  }
}

void print_crawl_preorder(Node* node) {
  cout << " " << node->key;
  if(node->left != NULL) {
    print_crawl_preorder(node->left);
  }
  if(node->right != NULL) {
    print_crawl_preorder(node->right);
  }
  return;
}
void print_crawl_inorder(Node* node) {
  if(node->left != NULL) {
    print_crawl_inorder(node->left);
  }
  cout << " " << node->key;
  if(node->right != NULL) {
    print_crawl_inorder(node->right);
  }
  return;
}

int main() {
  int n; cin >> n;
  Node* parent = NULL;
  for(int i=0;i<n;i++) {
    string command; cin >> command;
    if(command == "insert") {
      int key; cin >> key;
      if(parent == NULL) {
        parent = new Node(key);
      }
      else {
        Node* z = new Node(key);
        insert(parent,z);
      }
    }
    else if(command == "print") {
      print_crawl_inorder(parent); cout << endl;
      print_crawl_preorder(parent); cout << endl;
    }
  }
}