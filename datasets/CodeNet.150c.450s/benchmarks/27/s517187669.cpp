///
// File:  alds1_8_a.cpp
// Author: ymiyamoto
//
// Created on Sun Oct 15 00:50:39 2017
//

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct tree_t {
  tree_t *left;
  tree_t *right;
  int64_t value;
  tree_t(int64_t val)
  {
    left = NULL;
    right = NULL;
    value = val;
  }
};

static tree_t *tree;
static vector<int64_t> pre, in;

void insert(tree_t *top, int64_t val)
{
  if (top == NULL) {
    tree = new tree_t(val);
    return;
  }

  if (val < top->value) {
    if (top->left == NULL) {
      tree_t *node = new tree_t(val);
      top->left = node;
    } else {
      insert(top->left, val);
    }

  } else if (val > top->value) {
    if (top->right == NULL) {
      tree_t *node = new tree_t(val);
      top->right = node;
    } else {
      insert(top->right, val);
    }
  }
}

void walk(tree_t *top)
{
  if (top == NULL) return;
  pre.push_back(top->value);
  walk(top->left);
  in.push_back(top->value);
  walk(top->right);
}

void print()
{
  pre.clear();
  in.clear();
  walk(tree);
  for (uint32_t i = 0; i < in.size(); i++) {
    cout << " " << in[i];
  }
  cout << endl;

  for (uint32_t i = 0; i < pre.size(); i++) {
    cout << " " << pre[i];
  }
  cout << endl;
}

int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    string str;
    int64_t val;
    cin >> str;
    if (str[0] == 'i') {
      cin >> val;
      insert(tree, val);
    } else {
      print();
    }
  }

  return 0;
}