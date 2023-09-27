#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;
using vi = vector<int>;
using i64 = int64_t;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

template <typename T>
void print(vector<T> v) {
  REP(i, v.size()) {
    if (i) cout << " ";
    cout << v[i];
  }
  cout << endl;
}

struct Node {
  int p, l, r;
};

void preorder(vector<Node> &T, int u) {
  if (u == -1) return;
  cout << " " << u;
  preorder(T, T[u].l);
  preorder(T, T[u].r);
}

void inorder(vector<Node> &T, int u) {
  if (u == -1) return;
  inorder(T, T[u].l);
  cout << " " << u;
  inorder(T, T[u].r);
}

void postorder(vector<Node> &T, int u) {
  if (u == -1) return;
  postorder(T, T[u].l);
  postorder(T, T[u].r);
  cout << " " << u;
}

int main() {
  int n, root;
  cin >> n;
  vector<Node> T(n);
  REP(i, n) T[i].p = -1;
  REP(i, n) {
    int id, l, r;
    cin >> id >> l >> r;
    T[id].l = l;
    T[id].r = r;
    if (l != -1) T[l].p = id;
    if (r != -1) T[r].p = id;
  }
  REP(i, n)  if (T[i].p == -1) root = i;
 
  cout << "Preorder" << endl;
  preorder(T, root);
  cout << endl << "Inorder" << endl;
  inorder(T, root);
  cout << endl << "Postorder" << endl;
  postorder(T, root);
  cout << endl;
}
