///
// File:  dsl_1_a.cpp
// Author: ymiyamoto
//
// Created on Thu Oct 19 00:53:31 2017
//

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct tree_t {
  tree_t *parent;
  vector<tree_t *> children;
  uint32_t val;

  tree_t(uint32_t v)
  {
    parent = this;
    val = v;
  }
};

#define SIZE 10000
static vector<tree_t *> trees(SIZE, NULL);
static vector<uint32_t> height(SIZE, 1);

tree_t *find_root(tree_t *t)
{
  if (t == t->parent) {
    return t;
  } else {
    return find_root(t->parent);
  }
}

void unite(uint32_t x, uint32_t y)
{
  tree_t *x_root = find_root(trees[x]);
  tree_t *y_root = find_root(trees[y]);

  if (height[x_root->val] < height[y_root->val]) {
    x_root->parent = y_root;
    y_root->children.push_back(x_root);
  } else {
    y_root->parent = x_root;
    x_root->children.push_back(y_root);
  }
}

bool same(uint32_t x, uint32_t y)
{
  tree_t *x_root = find_root(trees[x]);
  tree_t *y_root = find_root(trees[y]);

  return x_root->val == y_root->val;
}

int32_t main()
{
  uint32_t n, q;
  cin >> n >> q;

  for (uint32_t i = 0; i < n; i++) {
    tree_t *t = new tree_t(i);
    trees[i] = t;
  }

  for (uint32_t i = 0; i < q; i++) {
    string str;
    uint32_t x, y;
    cin >> str >> x >> y;
    if (str[0] == '0') {
      unite(x, y);
    } else {
      if (same(x, y)) {
        cout << 1 << endl;
      } else {
        cout << 0 << endl;
      }
    }
  }

  return 0;
}