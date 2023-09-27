#include <bits/stdc++.h>
#define NIL -1
#define MAX 30
using namespace std;

struct Node { int parent, left, right, sibling; };

Node defaultNode = { NIL, NIL, NIL, NIL };

vector<Node> T(MAX, defaultNode);

vector<int> D(MAX, 0);
vector<int> H(MAX, 0);

void setDepth(int u, int p) {
  D[u] = p;
  if (T[u].left != NIL) {
    setDepth(T[u].left, p + 1);
  }
  if (T[u].right != NIL) {
    setDepth(T[u].right, p + 1);
  }
};

int setHeight(int u) {
  int h1, h2;
  h1 = h2 = 0;
  if (T[u].left != NIL) {
    h1 = setHeight(T[u].left) + 1;
  }
  if (T[u].right != NIL) {
    h2 = setHeight(T[u].right) + 1;
  }
  return H[u] = max(h1, h2);
};

vector<int> Pre(MAX), In(MAX), Post(MAX);

int pre = 0;
int in = 0;
int post = 0;

void PreParse(int u) {
  Pre[pre] = u;
  pre++;
  if (T[u].left != NIL) {
    PreParse(T[u].left);
  }
  if (T[u].right != NIL) {
    PreParse(T[u].right);
  }
}

void InParse(int u) {
  if (T[u].left != NIL) {
    InParse(T[u].left);
  }
  In[in] = u;
  in++;
  if (T[u].right != NIL) {
    InParse(T[u].right);
  }
};

void PostParse(int u) {
  if (T[u].left != NIL) {
    PostParse(T[u].left);
  }
  if (T[u].right != NIL) {
    PostParse(T[u].right);
  }
  Post[post] = u;
  post++;
};

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int u, l, r;
    cin >> u >> l >> r;
    T[u].left = l;
    T[u].right = r;
    if (l != NIL) {
      T[l].parent = u;
      if (r != NIL) T[l].sibling = r;
    }
    if (r != NIL) {
      T[r].parent = u;
      if (l != NIL) T[r].sibling = l;
    }
  }

  int root;

  for (int i = 0; i < n; i++) {
    if (T[i].parent == NIL) root = i;
  }

  setDepth(root, 0);
  setHeight(root);

  PreParse(root);
  InParse(root);
  PostParse(root);

  cout << "Preorder" << endl;
  for (int i = 0; i < n; i++) {
    if (i < n - 1) cout << ' ' << Pre[i];
    else cout << ' ' << Pre[i] << endl;
  }
  cout << "Inorder" << endl;
  for (int i = 0; i < n; i++) {
    if (i < n - 1) cout << ' ' << In[i];
    else cout << ' ' << In[i] << endl;
  }
  cout << "Postorder" << endl;
  for (int i = 0; i < n; i++) {
    if (i < n - 1) cout << ' ' << Post[i];
    else cout << ' ' << Post[i] << endl;
  }

};

