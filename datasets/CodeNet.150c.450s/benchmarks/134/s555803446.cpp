#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 10000
#define NIL -1

struct Node {
  int parent;
  int left;
  int right;
};

Node T[MAX];
int n;

void preParse(int root) {
  if ( root == NIL ) return;
  printf(" %d", root);
  if ( T[root].left != NIL ) {
    preParse(T[root].left);
  }
  if ( T[root].right != NIL ) {
    preParse(T[root].right);
  }
}

void inParse(int root) {
  if ( root == NIL ) return;
  if ( T[root].left != NIL ) {
    inParse(T[root].left);
  }
  printf(" %d", root);
  if ( T[root].right != NIL ) {
    inParse(T[root].right);
  }
}

void postParse(int root) {
  if ( root == NIL ) return;
  if ( T[root].left != NIL ) {
    postParse(T[root].left);
  }
  if ( T[root].right != NIL ) {
    postParse(T[root].right);

  }
  printf(" %d", root);
}

int main() {
  int id, left, right, root;

  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    T[i].parent = NIL;
  }

  for ( int i = 0; i < n; i++ ) {
    scanf("%d %d %d", &id, &left, &right);
    T[id].left = left;
    T[id].right = right;

    if ( left != NIL ) T[left].parent = id;
    if ( right != NIL ) T[right].parent = id;
  }

  for ( int i = 0; i < n; i++ ) {
    if ( T[i].parent == NIL ) root = i;
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