#include <iostream>
#include <vector>

struct Tree {
  int parent = -1;
  int left;
  int right;
};

class Trees {
private:
  std::vector<Tree> trees_;
  int root_ = -1;
  void findRoot_();
  void r_preorderTreeWalk_(int n);
  void r_inorderTreeWalk_(int n);
  void r_postorderTreeWalk_(int n);
public:
  Trees(int n);
  void makeTree(int id, int left, int right);
  void preorderTreeWalk();
  void inorderTreeWalk();
  void postorderTreeWalk();
};

Trees::Trees(int n) {
  trees_ = std::vector<Tree>(n);
}

void Trees::makeTree(int id, int left, int right) {
  trees_[id].left = left;
  trees_[left].parent = id;
  trees_[id].right = right;
  trees_[right].parent = id;
}

void Trees::findRoot_() {
  for (int i = 0 ; i < (int)trees_.size(); ++i) {
    auto t = trees_[i];
    if (t.parent == -1) {
      root_ = i;
      return;
    }
  }
}

void Trees::r_preorderTreeWalk_(int n) {
  std::cout << " " << n;
  if (trees_[n].left != -1)
    r_preorderTreeWalk_(trees_[n].left);
  if (trees_[n].right != -1)
    r_preorderTreeWalk_(trees_[n].right);
}

void Trees::preorderTreeWalk() {
  if (root_ == -1)
    findRoot_();
  r_preorderTreeWalk_(root_);
  std::cout << std::endl;
}

void Trees::r_inorderTreeWalk_(int n) {
  if (trees_[n].left != -1)
    r_inorderTreeWalk_(trees_[n].left);
  std::cout << " " << n;
  if (trees_[n].right != -1)
    r_inorderTreeWalk_(trees_[n].right);
}

void Trees::inorderTreeWalk() {
  if (root_ == -1)
    findRoot_();
  r_inorderTreeWalk_(root_);
  std::cout << std::endl;
}

void Trees::r_postorderTreeWalk_(int n) {
  if (trees_[n].left != -1)
    r_postorderTreeWalk_(trees_[n].left);
  if (trees_[n].right != -1)
    r_postorderTreeWalk_(trees_[n].right);
  std::cout << " " << n;
}

void Trees::postorderTreeWalk() {
  if (root_ == -1)
    findRoot_();
  r_postorderTreeWalk_(root_);
  std::cout << std::endl;
}

int main() {
  int n;
  std::cin >> n;
  Trees t(n);
  for (int i = 0; i < n; ++i) {
    int id, left, right;
    std::cin >> id >> left >> right;
    t.makeTree(id, left, right);
  }
  std::cout << "Preorder" << std::endl;
  t.preorderTreeWalk();
  std::cout << "Inorder" << std::endl;
  t.inorderTreeWalk();
  std::cout << "Postorder" << std::endl;
  t.postorderTreeWalk();
}
   