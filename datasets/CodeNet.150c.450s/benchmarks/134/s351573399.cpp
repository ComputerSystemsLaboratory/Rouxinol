#include <iostream>
using namespace std;

struct Node {
  int parent;
  int left;
  int right;
};

const int NIL = -1;
const int MAX = 30;
Node T[MAX];

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

int main() {
  int n, v, r;
  cin >> n;

  // initialize the node with NIL
  for (int i = 0; i < n; i++) {
    T[i].parent = NIL;
    T[i].left = NIL;
    T[i].right = NIL;
  }

  for (int i = 0; i < n; i++) {
    cin >> v;
    cin >> T[v].left >> T[v].right;
    if (T[v].left != NIL) {
      T[T[v].left].parent = v;
    }
    if (T[v].right != NIL) {
      T[T[v].right].parent = v;
    }
  }

  // find the root noce
  for (int i = 0; i < n; i++) {
    if (T[i].parent == NIL) {
      r = i;
    }
  }

  cout << "Preorder" << endl;
  preParse(r);
  cout << endl << "Inorder" << endl;
  inParse(r);
  cout << endl << "Postorder" << endl;
  postParse(r);
  cout << endl;
  return 0;
}

