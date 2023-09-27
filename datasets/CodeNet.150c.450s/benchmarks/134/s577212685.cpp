// -*- mode:c++; coding:utf-8; c-basic-offset:2; -*-
// ALDS1_7_B: Tree Walk

#include <cstdio>

class BinaryTree {
public:
  static const int NIL = -1;

  struct Node {
    // id is index of nodes_
    int parent = NIL;
    int left = NIL;
    int right = NIL;
  };

private:
  unsigned int n_;
  Node* nodes_;
  
public:
  BinaryTree(unsigned int n) : n_(n), nodes_(new Node[n]) { }

  ~BinaryTree() { delete[] nodes_; }

  Node& operator[](unsigned int id) { return nodes_[id]; }

  void pre_order() const
  {
    std::printf("Preorder\n");
    pre_parse(root());
    std::printf("\n");
  }

  void in_order() const
  {
    std::printf("Inorder\n");
    in_parse(root());
    std::printf("\n");
  }

  void post_order() const
  {
    std::printf("Postorder\n");
    post_parse(root());
    std::printf("\n");
  }

private:
  int root() const
  {
    for (auto id = 0u; id < n_; ++id) {
      const auto& node = nodes_[id];
      if (node.parent == NIL) {
        return id;
      }
    }
    return NIL;
  }

  void pre_parse(int id) const
  {
    if (id == NIL) {
      return;
    }
    const auto& node = nodes_[id];
    print_id(id);
    pre_parse(node.left);
    pre_parse(node.right);
  }

  void in_parse(int id) const
  {
    if (id == NIL) {
      return;
    }
    const auto& node = nodes_[id];
    in_parse(node.left);
    print_id(id);
    in_parse(node.right);
  }

  void post_parse(int id) const
  {
    if (id == NIL) {
      return;
    }
    const auto& node = nodes_[id];
    post_parse(node.left);
    post_parse(node.right);
    print_id(id);
  }

  void print_id(int id) const
  {
    std::printf(" %u", id);
  }
};

int main()
{
  unsigned int n;
  std::scanf("%u", &n);
  BinaryTree tree(n);

  for (auto i = 0u; i < n; ++i) {
    unsigned int id;
    int left, right;
    std::scanf("%u %d %d", &id, &left, &right);

    tree[id].left = left;
    if (left != BinaryTree::NIL) {
      tree[left].parent = id;
    }
    tree[id].right = right;
    if (right != BinaryTree::NIL) {
      tree[right].parent = id;
    }
  }

  tree.pre_order();
  tree.in_order();
  tree.post_order();
}

// eof