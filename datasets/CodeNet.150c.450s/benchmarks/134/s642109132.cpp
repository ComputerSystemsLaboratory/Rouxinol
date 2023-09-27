#include<iostream>
using namespace std;

struct Node {
  int parent, left, right;
};

const int N = 25;
const int NIL = -1;

int find_root(int n, Node T[]) {
  int root = 0;
  for (int i = 0; i < n; i++) {
    if (T[i].parent == NIL) root = i;
  }
  return root;
}

void preorder(int id, Node T[]) {
  cout << " " << id;
  if (T[id].left != NIL) preorder(T[id].left, T);
  if (T[id].right != NIL) preorder(T[id].right, T);
}

void inorder(int id, Node T[]) {
  if (T[id].left != NIL) inorder(T[id].left, T);
  cout << " " << id;
  if (T[id].right != NIL) inorder(T[id].right, T);
}

void postorder(int id, Node T[]) {
  if (T[id].left != NIL) postorder(T[id].left, T);
  if (T[id].right != NIL) postorder(T[id].right, T);
  cout << " " << id;
}

int main() {
  int i, n, id, left, right;
  Node T[N];

  cin >> n;
  for (i = 0; i < n; i++) T[i].parent = NIL;
  // input
  for (i = 0; i < n; i++) {
    cin >> id >> left >> right;
    T[id].left = left;
    T[id].right = right;
    if (left != NIL) T[left].parent = id;
    if (right != NIL) T[right].parent = id;
  }

  int root = find_root(n, T);
  // output
  cout << "Preorder" << endl;
  preorder(root, T);
  cout << endl;
  cout << "Inorder" << endl;
  inorder(root, T);
  cout << endl;
  cout << "Postorder" << endl;
  postorder(root, T);
  cout << endl;
  
  return 0;
}

