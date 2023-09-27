#include <iostream>
using namespace std;
#define NIL -1

struct node {
  int parent, left, right;
};

node T[30];

void preorder(int u) {
  cout << " " << u;
  if (T[u].left != NIL) {
    preorder(T[u].left);
  }
  if (T[u].right != NIL) {
    preorder(T[u].right);
  }
}
void inorder(int u) {
  if (T[u].left != NIL) {
    inorder(T[u].left);
  }
  cout << " " << u;
  if (T[u].right != NIL) {
    inorder(T[u].right);
  }
}
void postorder(int u) {
  if (T[u].left != NIL) {
    postorder(T[u].left);
  }
  if (T[u].right != NIL) {
    postorder(T[u].right);
  }
  cout << " " << u;
}

int main() {
  int n, id, l, r, root;
  cin >> n;
  for (int i = 0; i < n; i++) T[i].parent = T[i].left = T[i].right = NIL;
  for (int i = 0; i < n; i++) {
    cin >> id >> l >> r;
    if (l != -1) {
      T[id].left = l;
      T[l].parent = id;
    }
    if (r != -1) {
      T[id].right = r;
      T[r].parent = id;
    }
  }
  root = 0;
  while (T[root].parent != NIL) {
    root = T[root].parent;
  }
  cout << "Preorder" << endl;
  preorder(root);
  cout << endl << "Inorder" << endl;
  inorder(root);
  cout << endl << "Postorder" << endl;
  postorder(root);
  cout << endl;
}
