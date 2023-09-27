#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

struct Node_t {
  int id_, left_, right_, parent_;
  Node_t() { id_ = left_ = right_ = parent_ = -1; }
};

void preorder(vector<Node_t>& nodes, int id, vector<int>& ids)
{
  if (id == -1) { return; }
  ids.push_back(id);
  preorder(nodes, nodes[id].left_, ids);
  preorder(nodes, nodes[id].right_, ids);
}

void inorder(vector<Node_t>& nodes, int id, vector<int>& ids)
{
  if (id == -1) { return; }
  inorder(nodes, nodes[id].left_, ids);
  ids.push_back(id);
  inorder(nodes, nodes[id].right_, ids);
}

void postorder(vector<Node_t>& nodes, int id, vector<int>& ids)
{
  if (id == -1) { return; }
  postorder(nodes, nodes[id].left_, ids);
  postorder(nodes, nodes[id].right_, ids);
  ids.push_back(id);
}

void print(vector<int> ids)
{
  int n = ids.size();
  for (int i = 0; i < n; ++i) {
    fprintf(stdout, " %d", ids[i]);
  }
  fprintf(stdout, "\n");
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<Node_t> nodes(n);
  for (int i = 0; i < n; ++i) {
    int id, l, r;
    fscanf(stdin, "%d %d %d", &id, &l, &r);
    nodes[id].id_ = id;
    nodes[id].left_ = l;
    nodes[id].right_ = r;
    if (l != -1) { nodes[l].parent_ = id; }
    if (r != -1) { nodes[r].parent_ = id; }
  }
  int root_id = -1;
  for (int i = 0; i < n; ++i) {
    if (nodes[i].parent_ == -1) {
      root_id = nodes[i].id_;
      break;
    }
  }

  vector<int> pre, in, post;
  preorder(nodes, root_id, pre);
  fprintf(stdout, "Preorder\n");
  print(pre);
  inorder(nodes, root_id, in);
  fprintf(stdout, "Inorder\n");
  print(in);
  postorder(nodes, root_id, post);
  fprintf(stdout, "Postorder\n");
  print(post);
  return 0;
}