#include <iostream>
#include <vector>
static inline int partition(std::vector<int>& a, int p, int r) {
  int x = a[r];
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if (a[j] <= x) {
      ++i;
      std::swap(a[i], a[j]);
    }
  }
  ++i;
  std::swap(a[i], a[r]);
  return i;
}
static inline void print(const std::vector<int>& a, size_t p) {
  for (size_t i = 0; i < a.size(); ++i) {
    bool b = i == p;
    std::cout << (i == 0 ? "" : " ")
      << (b ? "[" : "")
      << a[i]
      << (b ? "]" : "");
  }
  std::cout << std::endl;
}
int main(void) {
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  int p = partition(a, 0, n - 1);
  print(a, p);
}

