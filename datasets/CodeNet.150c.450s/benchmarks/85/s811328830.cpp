#include <iostream>
#include <vector>

int64_t calculateMultiply(std::vector<std::pair<int, int>>& v) {
  int n = v.size();
  std::vector<std::vector<int64_t>> m(n, std::vector<int64_t>(n, 0));
  for (int l = 1; l < n; ++l) {
    for (int i = 0; i < n-l; ++i) {
      int j = i+l;
      m[i][j] = INT64_MAX;
      for (int k = i; k < j; ++k) {
        int q = m[i][k] + m[k+1][j] + (v[i].first)*(v[k].second)*(v[j].second);
        if (q < m[i][j]) {
          m[i][j] = q;
        }
      }
    }
  }
  return m[0][n-1];
}


int main() {
  int n;
  std::cin >> n;
  std::vector<std::pair<int, int>> v;
  for (int i = 0; i < n; ++i) {
    int a, b;
    std::cin >> a >> b;
    v.push_back({a, b});
   }
  std::cout << calculateMultiply(v) << std::endl;
}