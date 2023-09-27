#include <bits/stdc++.h>
using namespace std;
struct Node {
  int parent, left, right;
};
using Nodes = vector<Node>;
void preWalk(const Nodes &nodes, int id) {
  if (id == -1) return;
  auto node = nodes[id];
  cout << ' ' << id;
  preWalk(nodes, node.left);
  preWalk(nodes, node.right);
}
void inWalk(const Nodes &nodes, int id) {
  if (id == -1) return;
  auto node = nodes[id];
  inWalk(nodes, node.left);
  cout << ' ' << id;
  inWalk(nodes, node.right);
}
void postWalk(const Nodes &nodes, int id) {
  if (id == -1) return;
  auto node = nodes[id];

  postWalk(nodes, node.left);
  postWalk(nodes, node.right);
  cout << ' ' << id;
}
int main() {
  int n, id;
  cin >> n;
  Nodes nodes(n, Node{-1, -1, -1});
  for (size_t i = 0; i < n; i++) {
    cin >> id;
    cin >> nodes[id].left >> nodes[id].right;
    if (nodes[id].left != -1) nodes[nodes[id].left].parent = nodes[id].left;
    if (nodes[id].right != -1) nodes[nodes[id].right].parent = nodes[id].right;
  }

  int rootId =
      distance(nodes.begin(), find_if(nodes.begin(), nodes.end(),
                                      [](Node x) { return x.parent == -1; }));

  cout << "Preorder" << endl;
  preWalk(nodes, rootId);
  cout << endl;
  cout << "Inorder" << endl;
  inWalk(nodes, rootId);
  cout << endl;
  cout << "Postorder" << endl;
  postWalk(nodes, rootId);
  cout << endl;
}
