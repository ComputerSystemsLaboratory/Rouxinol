#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define RFOR(i, a, b) for (int i = (b)-1, i##_min = (a); i >= i##_min; --i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define RREP(i, n) for (int i = (n)-1; i >= 0; --i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;
using vi = vector<int>;
using vd = vector<double>;
using i64 = int64_t;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

template <typename T>
void print(vector<T> &v) {
  REP(i, v.size()) {
    if (i) cout << " ";
    cout << v[i];
  }
  cout << endl;
}

struct Node;
using NodeP = shared_ptr<Node>;
struct Node {
  int key;
  NodeP right, left, parent;
};

NodeP root, NIL;

void insert(int k) {
  auto y = NIL;
  auto x = root;
  auto z = make_shared<Node>();
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while (x != NIL) {
    y = x;
    x = (z->key < x->key) ? x->left : x->right;
  }
  z->parent = y;
  if (y == NIL) {
    root = z;
  } else {
    if (z->key < y->key) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

NodeP find(NodeP u, int k) {
  while (u != NIL && k != u->key) {
    u = (k < u->key) ? u->left : u->right;
  }
  return u;
}

void inorder(NodeP &u) {
  if (u == NIL) return;
  inorder(u->left);
  cout << " " << u->key;
  inorder(u->right);
}

void preorder(NodeP &u) {
  if (u == NIL) return;
  cout << " " << u->key;
  preorder(u->left);
  preorder(u->right);
}

int main() {
  int n, i, x;
  string com;
  cin >> n;
  REP(i, n) {
    cin >> com;
    if (com == "insert") {
      cin >> x;
      insert(x);
    } else if (com == "find") {
      cin >> x;
      cout << ((find(root, x) != NIL) ? "yes" : "no") << endl;
    } else if (com == "print") {
      inorder(root);
      cout << endl;
      preorder(root);
      cout << endl;
    }
  }
}
