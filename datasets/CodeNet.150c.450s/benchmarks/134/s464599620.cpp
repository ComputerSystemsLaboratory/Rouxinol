#include <bits/stdc++.h>
using namespace std;

struct Node {
  int parent;
  int left;
  int right;
};

Node tree[100010];
int depth[100010];
int height[100010];

// 先行順巡回
void preParse(int v) {
  if (v == -1) {
    return;
  }
  printf(" %d", v);
  preParse(tree[v].left);
  preParse(tree[v].right);
}

// 中間順巡回
void inParse(int v) {
  if (v == -1) {
    return;
  }
  inParse(tree[v].left);
  printf(" %d", v);
  inParse(tree[v].right);
}

// 後行順巡回
void postParse(int v) {
  if (v == -1) {
    return;
  }
  postParse(tree[v].left);
  postParse(tree[v].right);
  printf(" %d", v);
}

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    tree[i].parent = -1;
  }

  for (int i = 0; i < n; i++) {
    int id, left, right;
    cin >> id >> left >> right;
    tree[id].left = left;
    tree[id].right = right;
    if (left != -1) {
      tree[left].parent = id;
    }
    if (right != -1) {
      tree[right].parent = id;
    }
  }

  int root = 0;

  for (int i = 0; i < n; i++) {
    if (tree[i].parent == -1) {
      root = i;
    }
  }

  printf("Preorder\n");
  preParse(root);
  printf("\n");
  printf("Inorder\n");
  inParse(root);
  printf("\n");
  printf("Postorder\n");
  postParse(root);
  printf("\n");
  return 0;

}
