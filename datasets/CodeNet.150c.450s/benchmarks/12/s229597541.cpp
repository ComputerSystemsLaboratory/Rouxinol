#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
  int n;
  std::cin >> n;
  std::vector<int> a(n + 1);
  rep(i, n) std::cin >> a[i + 1];

  for (int i = 1; i <= n; ++i) {
    printf("node %d: key = %d, ", i, a[i]);
    int left = 2 * i;
    int right = left + 1;
    int parent = i / 2;
    if (parent >= 1) printf("parent key = %d, ", a[parent]);
    if (left <= n) printf("left key = %d, ", a[left]);
    if (right <= n) printf("right key = %d, ", a[right]);
    std::cout << '\n';
  }
  return 0;
}

