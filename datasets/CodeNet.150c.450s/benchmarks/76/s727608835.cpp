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
    if(z->key > cur->key)
      cur = cur->right;
    else
      cur = cur->left;
  }
  if(z->key > x->key)
    x->append_right(z);
  else
    x->append_left(z);
}
bool find(Node* root,int key) {
  Node* cur = root;
  while(cur != NULL) {
    if(key == cur->key)
      return true;
    else if(key > cur->key)
      cur = cur->right;
    else
      cur = cur->left;
  }
  return false;
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
  Node* root = NULL;
  for(int i=0;i<n;i++) {
    string command; cin >> command;
    if(command == "insert") {
      int key; cin >> key;
      if(root == NULL) {
        root = new Node(key);
      }
      else {
        Node* z = new Node(key);
        insert(root,z);
      }
    }
    else if(command == "find") {
      int key; cin >> key;
      if(find(root,key)) cout << "yes" << endl;
      else cout << "no" << endl;
    }
    else if(command == "print") {
      print_crawl_inorder(root); cout << endl;
      print_crawl_preorder(root); cout << endl;
    }
  }
}