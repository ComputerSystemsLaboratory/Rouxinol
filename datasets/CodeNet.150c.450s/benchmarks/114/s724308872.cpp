#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

vector<int> P;
int n;

void init() {
  for (int i = 0; i < n; i++)
    P[i] = i;
}
int root(int c) {
  if (P[c] == c)
    return c;
  return (P[c] = root(P[c]));
}
bool is_same_set(int a, int b) { return root(a) == root(b); }
void unite(int a, int b) { P[root(a)] = root(b); }

int main() {
  cin >> n;
  P = vector<int>(n);
  init();
  vector<tuple<int, int, int>> edges; //<weight, start, end>
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      if (i > j && a != -1)
        edges.push_back(make_tuple(a, i, j));
    }
  }
  sort(edges.begin(), edges.end());

  int ans = 0;
  for (tuple<int, int, int> edge : edges) {
    int w = get<0>(edge), s = get<1>(edge), e = get<2>(edge);
    if (!is_same_set(s, e)) {
      unite(s, e);
      ans += w;
    }
  }
  cout << ans << endl;
}

