#include <bits/stdc++.h>

template <typename T>
class BinarySearchTree {

  struct Node {
    T key;
    Node *par, *lhs, *rhs;
  };

  Node *root;

  // 入力：現在のノード curr, 中間順巡回のノードの順番を保存した配列 order
  // 出力：なし
  void inorder_dfs(Node *curr, std::vector<int> &order) {
    if (!curr) return;
    inorder_dfs(curr->lhs, order);
    order.push_back(curr->key);
    inorder_dfs(curr->rhs, order);
  }

  // 入力：現在のノード curr, 中間順巡回のノードの順番を保存した配列 order
  // 出力：なし
  void preorder_dfs(Node *curr, std::vector<int> &order) {
    if (!curr) return;
    order.push_back(curr->key);
    preorder_dfs(curr->lhs, order);
    preorder_dfs(curr->rhs, order);
  }

  // 入力：値 x、親のポインタ prev、左の子のポインタ l、右の子のポインタ r
  // 出力：新たに作成したノードのポインタ
  Node *make_node(const T &x, Node *p, Node *l = 0, Node *r = 0) {
    Node *res = new Node;
    res->key = x;
    res->par = p;
    res->lhs = l;
    res->rhs = r;
    return res;
  }

public:

  BinarySearchTree() : root(0) {}

  // 入力：なし
  // 出力：中間順巡回のノードの順番を保存した配列
  std::vector<int> inorder() {
    std::vector<int> res;
    inorder_dfs(root, res);
    return res;
  }

  // 入力：なし
  // 出力：先行順巡回のノードの順番を保存した配列
  std::vector<int> preorder() {
    std::vector<int> res;
    preorder_dfs(root, res);
    return res;
  }

  // 入力：値 x
  // 出力：なし
  void insert(const T &x) {
    Node *curr = root, *prev = 0;
    while (curr) {
      prev = curr;
      if (curr->key > x) curr = curr->lhs;
      else if (curr->key < x) curr = curr->rhs;
      else return;
    }
    (!prev ? root : (prev->key > x) ? prev->lhs : prev->rhs) = make_node(x, prev);
  }

};

void insert(BinarySearchTree<int> &BST) {
  int x;
  std::cin >> x;
  BST.insert(x);
}

void print(BinarySearchTree<int> &BST) {
  std::vector<int> inorder = BST.inorder();
  std::vector<int> preorder = BST.preorder();
  for (size_t i = 0; i < inorder.size(); i++) {
    std::cout << " " << inorder[i];
  }
  std::cout << std::endl;
  for (size_t i = 0; i < preorder.size(); i++) {
    std::cout << " " << preorder[i];
  }
  std::cout << std::endl;
}

void ALDS1_8_A() {
  BinarySearchTree<int> BST;
  size_t N;
  std::cin >> N;
  for (size_t i = 0; i < N; i++) {
    std::string s;
    std::cin >> s;
    if (s == "insert") insert(BST);
    else print(BST);
  }
}

int main() {

  ALDS1_8_A();

}
