#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

struct Node {
  int key_;
  Node *left_, *right_;
  Node *parent_;

  Node(int key) : key_(key), left_(0), right_(0) {}
  Node() : key_(0), left_(0), right_(0) {}
  ~Node()
  {
    if (left_) { delete left_; left_ = 0; }
    if (right_) { delete right_; right_ = 0; }
    parent_ = 0;
    //fprintf(stderr, "DEBUG: deleting %d\n", key_);
  }

  void print_inorder()
  {
    if (left_) { left_->print_inorder(); }
    fprintf(stdout, " %d", key_);
    if (right_) { right_->print_inorder(); }
  }

  void print_preorder()
  {
    fprintf(stdout, " %d", key_);
    if (left_) { left_->print_preorder(); }
    if (right_) { right_->print_preorder(); }
  }
};

class BST {
public:
  BST() : root_(0) {}
  ~BST() { delete root_; }

  void insert(Node *node)
  {
    Node *x = root_, *y = 0;
    while (x != 0) {
      y = x;
      if (node->key_ < x->key_) {
        x = x->left_;
      }
      else if (node->key_ > x->key_) {
        x = x->right_;
      }
      else {
        // duplicate node
        return;
      }
    }
    node->parent_ = y;

    if (y == 0) { root_ = node; }
    else if (node->key_ < y->key_) {
      y->left_ = node;
    }
    else if (node->key_ > y->key_) {
      y->right_ = node;
    }
  }

  Node *find(int key)
  {
    Node *p = root_;
    while (p) {
      if (key == p->key_) { return p; }
      else if (key < p->key_) { p = p->left_; }
      else { p = p->right_; }
    }
    return 0;
  }

  void print_inorder()
  {
    if (root_) {
      root_->print_inorder();
      fprintf(stdout, "\n");
    }
  }

  void print_preorder()
  {
    if (root_) {
      root_->print_preorder();
      fprintf(stdout, "\n");
    }
  }

private:
  Node *root_;
};

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  char buf[64] = { '\0' };
  int key = -1;
  BST tree;
  for (int i = 0; i < n; ++i) {
    fscanf(stdin, "%s", buf);
    if (buf[0] == 'i') {
      fscanf(stdin, "%d", &key);
      tree.insert(new Node(key));
    }
    else if (buf[0] == 'p') {
      tree.print_inorder();
      tree.print_preorder();
    }
    else if (buf[0] == 'f') {
      fscanf(stdin, "%d", &key);
      if (tree.find(key)) { fprintf(stdout, "yes\n"); }
      else { fprintf(stdout, "no\n"); }
    }
  }
  return 0;
}