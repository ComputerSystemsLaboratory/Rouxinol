#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

int testcase_ends() {
  int N;
  scanf("%d", &N);

  if (N == 0)
    return 1;

  std::map<int, std::pair<int, int>> g;
  g[0] = std::make_pair(0, 0);
  for (int i=1; i<N; ++i) {
    int n, d;
    scanf("%d %d", &n, &d);

    std::pair<int, int> p=g[n];
    switch (d) {
    case 0:
      --p.second;
      break;

    case 1:
      ++p.first;
      break;

    case 2:
      ++p.second;
      break;

    case 3:
      --p.first;
      break;
    }

    g[i] = p;
  }

  int max_i=-2000, max_j=-2000;
  int min_i=2000, min_j=2000;

  for (int i=0; i<N; ++i) {
    std::pair<int, int> p=g[i];

    max_i = std::max(max_i, p.first);
    max_j = std::max(max_j, p.second);

    min_i = std::min(min_i, p.first);
    min_j = std::min(min_j, p.second);
  }

  printf("%d %d\n", max_j-min_j+1, max_i-min_i+1);
  return 0;
}

int main() {
  while (!testcase_ends()) {}
}

