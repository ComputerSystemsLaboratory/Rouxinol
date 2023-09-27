#include <bits/stdc++.h>
using namespace std;

using P = pair<long, long>;
using D = pair<long, P>;

vector<D> vs;
void make() {
  for (int i = 1; i < 151; i++) {
    for (int j = i + 1; j < 151; j++) {
      vs.push_back(D(i * i + j * j, P(i, j)));
    }
  }
  sort(vs.begin(), vs.end());
}

void solve(long h, long w) {
  long diag = h * h + w * w;
  for (auto v: vs) {
    if (diag < v.first || (diag == v.first && h < v.second.first)) {
      cout << v.second.first << " " << v.second.second << endl;
      return;
    }
  }
}

int main() {
  long h, w;
  make();
  while (1) {
    cin >> h >> w;
    if (h + w == 0) return 0;
    solve(h, w);
  }
}

