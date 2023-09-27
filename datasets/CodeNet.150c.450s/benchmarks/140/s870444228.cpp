#include <iostream>
#include <vector>
#include <algorithm>

typedef std::pair<int, std::pair<int, int>> EDGE;

const int N = 1e4 + 1;

int pa[N];
std::vector<EDGE> E;

void init() {
  for (int i = 0; i < N; ++i) pa[i] = i;
}

int find(int x) {
  return pa[x] == x ? x : pa[x] = find(pa[x]);
}

void unite(int x, int y) {
  int px = find(x);
  int py = find(y);
  if (px != py) pa[px] = py;
}

bool check(int x, int y) {
  int px = find(x);
  int py = find(y);
  return px == py;
}

int main() {
  int n, e;
  while (std::cin >> n >> e) {
    init();
    for (int i = 0; i < e; ++i) {
      int x, y, c;
      std::cin >> x >> y >> c;
      E.push_back({c, {x, y}});
    }
    std::sort(E.begin(), E.end());
    long long ans = 0;
    for (auto e : E) {
      int c = e.first;
      int n1 = e.second.first;
      int n2 = e.second.second;
      if (!check(n1, n2)) {
        ans += (long long)c;
        unite(n1, n2);
      }
    }
    std::cout << ans << std::endl;
  }
  return 0;
}

