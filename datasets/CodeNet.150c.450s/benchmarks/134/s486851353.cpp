
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
#define NIL -1

struct Node {
  int parent;  // 節点の親
  int left;    // 節点の一番左の子
  int right;   // 節点の右隣の兄弟
};

void preParse(Node T[], int u) {
  if(u == NIL) return;
  cout << " " << u;
  preParse(T, T[u].left);
  preParse(T, T[u].right);
}

void inParse(Node T[], int u) {
  if(u == NIL) return;
  inParse(T, T[u].left);
  cout << " " << u;
  inParse(T, T[u].right);
}

void postParse(Node T[], int u) {
  if(u == NIL) return;
  postParse(T, T[u].left);
  postParse(T, T[u].right);
  cout << " " << u;
}

int main() {
  int n; cin>>n;
  Node T[n];
  // 初期化
  rep(i, n) T[i].parent = T[i].left = T[i].right = NIL;

  rep(i, n) {
    int u;cin>>u;
    cin >> T[u].left >> T[u].right;
    if(T[u].left != NIL) T[T[u].left].parent = u;
    if(T[u].right != NIL) T[T[u].right].parent = u;
  }

  int root;
  rep(i, n) if(T[i].parent == NIL) root = i;

  cout << "Preorder" << endl;
  preParse(T, root);
  cout << endl;
  cout << "Inorder" << endl;
  inParse(T, root);
  cout << endl;
  cout << "Postorder" << endl;
  postParse(T, root);
  cout << endl;

  return 0;
}
