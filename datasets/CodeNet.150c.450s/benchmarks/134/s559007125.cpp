#include <iostream>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

using namespace std;

struct Node {
  int p, l, r;
};

Node t[25];

void preorder(int i) {
  std::cout << ' ' << i;
  if (t[i].l != -1) preorder(t[i].l);
  if (t[i].r != -1) preorder(t[i].r);
}

void inorder(int i) {
  if (t[i].l != -1) inorder(t[i].l);
  std::cout << ' ' << i;
  if (t[i].r != -1) inorder(t[i].r);
}

void postorder(int i) {
  if (t[i].l != -1) postorder(t[i].l);
  if (t[i].r != -1) postorder(t[i].r);
  std::cout << ' ' << i;
}

int main() {
  int n;
  std::cin >> n;
  int id, left, right;

  rep(i, n) t[i] = Node{-1, -1, -1};

  rep(i, n) {
    std::cin >> id >> left >> right;
    t[id].l = left;
    t[id].r = right;
    if (left != -1) t[left].p = id;
    if (right != -1) t[right].p = id;
  }

  int root = 0;
  rep(i, n) {
    if (t[i].p == -1) root = i;
  }

  cout << "Preorder" << '\n';
  preorder(root);
  cout << endl;

  cout << "Inorder" << '\n';
  inorder(root);
  cout << endl;

  cout << "Postorder" << '\n';
  postorder(root);
  cout << endl;

  return 0;
}
