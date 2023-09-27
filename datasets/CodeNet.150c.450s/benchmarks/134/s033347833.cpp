#include <cstdio>
#define MAX 26
#define NIL -1

struct Node { int parent, left, right; };

Node T[MAX];

void preorderTreeWalk(int u) {
  if ( u == NIL ) return;
  printf( " %d", u);
  preorderTreeWalk(T[u].left);
  preorderTreeWalk(T[u].right);
}

void inorderTreeWalk(int u) {
  if ( u == NIL ) return;
  inorderTreeWalk(T[u].left);
  printf(" %d", u);
  inorderTreeWalk(T[u].right);
}

void postorderTreeWalk(int u) {
  if ( u == NIL ) return;
  postorderTreeWalk(T[u].left);
  postorderTreeWalk(T[u].right);
  printf(" %d", u);
}

int main() {
  int n, v, l, r;
  int root = 0;

  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) T[i].parent = NIL;

  for ( int i = 0; i < n; i++ ) {
    scanf("%d %d %d", &v, &l, &r);
    T[v].left = l;
    T[v].right = r;
    if ( l != NIL ) T[l].parent = v;
    if ( r != NIL ) T[r].parent = v;
  }

  for ( int i = 0; i < n; i++ ) if ( T[i].parent == NIL ) root = i;

  printf("Preorder\n");
  preorderTreeWalk(root);
  printf("\n");

  printf("Inorder\n");
  inorderTreeWalk(root);
  printf("\n");

  printf("Postorder\n");
  postorderTreeWalk(root);
  printf("\n");

  return 0;
}