#include <iostream>
#include <vector>
using namespace std;

typedef struct{
  int num;
  int left;
  int right;
} nodeinfo;

vector<nodeinfo> nodes;

void output_preorder(int from, int n){
  if(from == -1) return;
  int idx;
  for(int i = 0; i < n; i++) if(nodes[i].num == from) idx = i;
  int left = nodes[idx].left;
  int right = nodes[idx].right;
  cout << " " << from;
  output_preorder(left, n);
  output_preorder(right, n);
}

void output_inorder(int from, int n){
  if(from == -1) return;
  int idx;
  for(int i = 0; i < n; i++) if(nodes[i].num == from) idx = i;
  int left = nodes[idx].left;
  int right = nodes[idx].right;
  output_inorder(left, n);
  cout << " " << from;
  output_inorder(right, n);
}

void output_postorder(int from, int n){
  if(from == -1) return;
  int idx;
  for(int i = 0; i < n; i++) if(nodes[i].num == from) idx = i;
  int left = nodes[idx].left;
  int right = nodes[idx].right;
  output_postorder(left, n);
  output_postorder(right, n);
  cout << " " << from;
}

int main(){
  int n;
  cin >> n;
  vector<bool> root(n, true);
  for(int i = 0; i < n; i++){
    nodeinfo node;
    int num, left, right;
    cin >> num >> left >> right;
    if(left != -1) root[left] = false;
    if(right != -1) root[right] = false;
    node.num = num;
    node.left = left;
    node.right = right;
    nodes.push_back(node);
  }
  int idx;
  for(int i = 0; i < n; i++) if(root[i]) idx = i;
  cout << "Preorder" << endl;
  output_preorder(idx, n);
  cout << endl;
  cout << "Inorder" << endl;
  output_inorder(idx, n);
  cout << endl;
  cout << "Postorder" << endl;
  output_postorder(idx, n);
  cout << endl;
  return 0;
}