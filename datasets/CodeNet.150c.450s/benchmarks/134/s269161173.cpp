#include <cstdio>

typedef struct Node {
  int parent;
  int left;
  int right;
} Node;

const int N = 25, NIL = -1;
Node node[N];

void preOrder(int id) {
  if (id == NIL) {
        return;
  }
  printf(" %d", id);
  preOrder(node[id].left);
  preOrder(node[id].right);
}

void inOrder(int id) {
  if (id == NIL) {
        return;
  }
  inOrder(node[id].left);
  printf(" %d", id);
  inOrder(node[id].right);
}

void postOrder(int id) {
  if (id == NIL) {
        return;
  }
  postOrder(node[id].left);
  postOrder(node[id].right);
  printf(" %d", id);
}

int main() {
  for (int i = 0; i < N; i++) {
        node[i].parent = NIL;
  }
  int n, id, left, right, root;

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &id, &left, &right);
        node[id].left = left;
        node[id].right = right;
        if (left != NIL) {
                node[left].parent = id;
        }
        if (right != NIL) {
                node[right].parent = id;
        }
  }
  root = 0;
  while (node[root].parent != NIL) {
        root++;
  }
  printf("Preorder\n");
  preOrder(root);
  printf("\n");
  printf("Inorder\n");
  inOrder(root);
  printf("\n");
  printf("Postorder\n");
  postOrder(root);
  printf("\n");

  return 0;
}