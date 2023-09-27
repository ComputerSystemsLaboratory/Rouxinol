#include <algorithm>
#include <cstdio>
#include <memory>

using namespace std;

int main() {
  int w, n;
  scanf("%d", &w);
  scanf("%d", &n);

  unique_ptr<int[]> order(new int[w]);
  for (int i = 0; i < w; ++i) { order[i] = i + 1; }

  for (int i = 0; i < n; ++i) {
    int j, k;
    scanf("%d,%d", &j, &k);
    swap(order[j - 1], order[k - 1]);
  }

  for (int i = 0; i < w; ++i) { printf("%d\n", order[i]); }

  return 0;
}