#include <iostream>
#include <string>
using namespace std;

struct Node {
  int parent;
  int left;
  int right;
};
Node T[25];
const int NIL = -1;

void printPreorder(int id) {
  cout << " " << id;
  if (T[id].left != NIL) printPreorder(T[id].left);
  if (T[id].right != NIL) printPreorder(T[id].right);
}

void printInorder(int id) {
  if (T[id].left != NIL) printInorder(T[id].left);
  cout << " " << id;
  if (T[id].right != NIL) printInorder(T[id].right);
}

void printPostorder(int id) {
  if (T[id].left != NIL) printPostorder(T[id].left);
  if (T[id].right != NIL) printPostorder(T[id].right);
  cout << " " << id;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    T[i].parent = T[i].left = T[i].right = NIL;
  }

  int id, left, right;
  for (int i = 0; i < n; i++) {
    cin >> id;
    cin >> left >> right;
    T[id].left = left;
    T[id].right = right;
    if (left != NIL) T[left].parent = id;
    if (right != NIL) T[right].parent = id;
  }

  int root = NIL;
  for (int i = 0; i < n; i++) {
    if (T[i].parent == NIL) {
      root = i;
      break;
    }
  }

  cout << "Preorder" << endl;
  printPreorder(root);
  cout << endl;
  cout << "Inorder" << endl;
  printInorder(root);
  cout << endl;
  cout << "Postorder" << endl;
  printPostorder(root);
  cout << endl;

  return 0;
}