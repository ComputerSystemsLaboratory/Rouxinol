#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

struct Node {
  int parent = -1;
  int left_child = -1;
  int right_child = -1;
};
map<int, Node> nodes;
int n;

void set_parent() {
  for (map<int, Node>::iterator it = nodes.begin(), end = nodes.end();
       it != end; ++it) {
    int parent_number = it->first;
    Node parent_node = it->second;
    if (parent_node.left_child != -1) {
      nodes[parent_node.left_child].parent = parent_number;
    }
    if (parent_node.right_child != -1) {
      nodes[parent_node.right_child].parent = parent_number;
    }
  }
}

int get_root_number() {
  for (map<int, Node>::iterator it = nodes.begin(), end = nodes.end();
       it != end; ++it) {
    if (it->second.parent == -1) {
      return it->first;
    }
  }
  std::cout << "no root!!!" << '\n';
  return -1;
}

void preorder(int i) {
  if (nodes.at(i).left_child == -1 && nodes.at(i).right_child == -1) {
    std::cout << " " << i;
    return;
  }
  std::cout << " " << i;
  if (nodes.at(i).left_child != -1)
    preorder(nodes.at(i).left_child);
  if (nodes.at(i).right_child != -1)
    preorder(nodes.at(i).right_child);
}

void inorder(int i) {
  if (nodes.at(i).left_child == -1 && nodes.at(i).right_child == -1) {
    std::cout << " " << i;
    return;
  }
  if (nodes.at(i).left_child != -1)
    inorder(nodes.at(i).left_child);
  std::cout << " " << i;
  if (nodes.at(i).right_child != -1)
    inorder(nodes.at(i).right_child);
}

void postorder(int i) {
  if (nodes.at(i).left_child == -1 && nodes.at(i).right_child == -1) {
    std::cout << " " << i;
    return;
  }
  if (nodes.at(i).left_child != -1)
    postorder(nodes.at(i).left_child);
  if (nodes.at(i).right_child != -1)
    postorder(nodes.at(i).right_child);
  std::cout << " " << i;
}

int main() {
  cin >> n;
  rep(i, n) {
    int number;
    cin >> number;
    Node node;
    cin >> node.left_child;
    cin >> node.right_child;
    nodes[number] = node;
  }

  set_parent();
  int root = get_root_number();

  std::cout << "Preorder" << '\n';
  preorder(root);
  std::cout << '\n';
  std::cout << "Inorder" << '\n';
  inorder(root);
  std::cout << '\n';
  std::cout << "Postorder" << '\n';
  postorder(root);
  std::cout << '\n';
  //
  // for (map<int, Node>::iterator it = nodes.begin(), end = nodes.end();
  //      it != end; ++it) {
  //   std::cout << it->first << " ";
  // }
  // std::cout << '\n';

  return 0;
}

