#include<iostream>
#include<memory>
#include<vector>
#include<algorithm>

using namespace std;

void traverse_inorder(vector<class node *>&, int);
void traverse_preorder(vector<class node *>&, int);
void traverse_postorder(vector<class node *>&, int);
int k = 2;

class node {
 public:
  vector<int> child_idxs;
  int id;
  int depth;
  explicit node(int id) :id{id} {}
};

int main() {
  int n; cin >> n;
  vector<node*> nodes(n);
  int id, cidx;
  for (int i = 0; i < n; ++i) nodes[i] = new node(i);

  for (int i = 0; i < n; ++i) {
    cin >> id;
    nodes[id]->child_idxs = vector<int>();
    for (int ci = 0; ci < k; ++ci) {
      cin >> cidx;
      nodes[id]->child_idxs.push_back(cidx);
    }
  }

  vector<int> parents(n, -1);

  for (auto &v : nodes) {
    for (auto c : v->child_idxs) {
      if (c != -1) parents[c] = v->id;
    }
  }

  int root_id = static_cast<int>(
      distance(parents.begin(), find(parents.begin(), parents.end(), -1))
      );

  cout << "Preorder\n";
  traverse_preorder(nodes, root_id);
  cout << "\nInorder\n";
  traverse_inorder(nodes, root_id);
  cout << "\nPostorder\n";
  traverse_postorder(nodes, root_id);
  cout << endl;
}

void traverse_inorder(vector<class node *>& nodes, int curr) {
  if (curr == -1) return;
  int nch = nodes[curr]->child_idxs.size();
  if (nch) traverse_inorder(nodes, nodes[curr]->child_idxs[0]);
  cout << ' ' << curr;
  if (nch > 1) traverse_inorder(nodes, nodes[curr]->child_idxs[1]);
}
void traverse_preorder(vector<class node *>& nodes, int curr) {
  if (curr == -1) return;
  int nch = nodes[curr]->child_idxs.size();
  cout << ' ' << curr;
  if (nch) traverse_preorder(nodes, nodes[curr]->child_idxs[0]);
  if (nch > 1) traverse_preorder(nodes, nodes[curr]->child_idxs[1]);
}
void traverse_postorder(vector<class node *>& nodes, int curr) {
  if (curr == -1) return;
  int nch = nodes[curr]->child_idxs.size();
  if (nch) traverse_postorder(nodes, nodes[curr]->child_idxs[0]);
  if (nch > 1) traverse_postorder(nodes, nodes[curr]->child_idxs[1]);
  cout << ' ' << curr;
}

