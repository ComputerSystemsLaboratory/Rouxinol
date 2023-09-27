#include <cstdio>
using std::scanf;
using std::printf;

struct Node { int parent, left, right; };

void Preorder(Node tree[], int i) {
  printf(" %d", i);
  if (tree[i].left != -1) { Preorder(tree, tree[i].left); }
  if (tree[i].right != -1) { Preorder(tree, tree[i].right); }
}

void Inorder(Node tree[], int i) {
  if (tree[i].left != -1) { Inorder(tree, tree[i].left); }
  printf(" %d", i);
  if (tree[i].right != -1) { Inorder(tree, tree[i].right); }
}

void Postorder(Node tree[], int i) {
  if (tree[i].left != -1) { Postorder(tree, tree[i].left); }
  if (tree[i].right != -1) { Postorder(tree, tree[i].right); }
  printf(" %d", i);
}

int main() {
  int n;
  scanf("%d", &n);
  Node tree[n];
  for (int i = 0; i < n; ++i) { tree[i].parent = -1; }
  for (int i = 0; i < n; ++i) {
    int id, left, right;
    scanf("%d %d %d", &id, &left, &right);
    tree[id].left = left;
    tree[id].right = right;
    if (left != -1) { tree[left].parent = id; }
    if (right != -1) { tree[right].parent = id; }
  }
  int root;
  for (int i = 0; i < n; ++i) {
    if (tree[i].parent == -1) {
      root = i;
      break;
    }
  }

  printf("Preorder\n");
  Preorder(tree, root);
  printf("\n");
  printf("Inorder\n");
  Inorder(tree, root);
  printf("\n");
  printf("Postorder\n");
  Postorder(tree, root);
  printf("\n");

  return 0;
}