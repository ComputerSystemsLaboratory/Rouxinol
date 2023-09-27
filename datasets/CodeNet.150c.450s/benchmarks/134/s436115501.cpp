///
// File:  alds1_7_c.cpp
// Author: ymiyamoto
//
// Created on Sat Oct 14 18:52:33 2017
//

#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

struct tree_t {
  int32_t parent;
  int32_t left;
  int32_t right;
  tree_t()
  {
    parent = -1;
    left = -1;
    right = -1;
  }
};

#define SIZE 100
#define NIL -1

static tree_t tree[SIZE];
static vector<int32_t> preorder;
static vector<int32_t> inorder;
static vector<int32_t> postorder;

void walk(int32_t index)
{
  preorder.push_back(index);
  if (tree[index].left != NIL) {
    walk(tree[index].left);
  }
  inorder.push_back(index);
  if (tree[index].right != NIL) {
    walk(tree[index].right);
  }
  postorder.push_back(index);
}

int32_t main()
{
  int32_t n;
  cin >> n;

  for (int32_t i = 0; i < n; i++) {
    int32_t id, left, right;
    cin >> id >> left >> right;
    tree[id].left = left;
    tree[id].right = right;
    if (left != NIL) {
      tree[left].parent = id;
    }
    if (right != NIL) {
      tree[right].parent = id;
    }
  }

  int32_t root = NIL;
  for (int32_t i = 0; i < n; i++) {
    if (tree[i].parent == NIL) {
      root = i;
    }
  }

  walk(root);

  cout << "Preorder" << endl;
  for (uint32_t i = 0; i < preorder.size(); i++) {
    cout << " " << preorder[i];
  }
  cout << endl;

  cout << "Inorder" << endl;
  for (uint32_t i = 0; i < inorder.size(); i++) {
    cout << " " << inorder[i];
  }
  cout << endl;

  cout << "Postorder" << endl;
  for (uint32_t i = 0; i < postorder.size(); i++) {
    cout << " " << postorder[i];
  }
  cout << endl;

  return 0;
}