#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;

const int NIL = -1;

struct Node {
  int parent, left, right;
};
vector<Node> T;
int n;

void preParse(int u) {
  if (u == NIL) return;
  cout << " " << u;
  preParse(T[u].left);
  preParse(T[u].right);
}

void inParse(int u) {
  if (u == NIL) return;
  inParse(T[u].left);
  cout << " " << u;
  inParse(T[u].right);
}

void postParse(int u) {
  if (u == NIL) return;
  postParse(T[u].left);
  postParse(T[u].right);
  cout << " " << u;
}

int getRoot() {
  int u = 0;
  while (T[u].parent != NIL) {
    u = T[u].parent;
  }
  return u;
}

int main() {
  cin >> n;
  T.resize(n);
  rep(i, n) T[i].parent = T[i].left = T[i].right = NIL;
  rep(i, n) {
    int id, left, right;
    cin >> id;
    cin >> left >> right;
    if (left != NIL) {
      T[id].left = left;
      T[left].parent = id;
    }
    if (right != NIL) {
      T[id].right = right;
      T[right].parent = id;
    }
  }
  int root = getRoot();
  cout << "Preorder" << endl;
  preParse(root);
  cout << endl;
  cout << "Inorder" << endl;
  inParse(root);
  cout << endl;
  cout << "Postorder" << endl;
  postParse(root);
  cout << endl;
}

