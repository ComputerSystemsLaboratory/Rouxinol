#include <iostream>
#include <vector>

// aの配列の文字を使ってxを作れるか？
bool find(int x, const std::vector<int> &a, int sum = 0, std::size_t i = 0) {
  if (sum == x)
    return true;
  if (i >= a.size())
    return false;
  return find(x, a, sum, i + 1) || find(x, a, sum + a[i], i + 1);
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> a(n, 0);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  std::cin >> n;
  int x;
  for (int i = 0; i < n; i++) {
    std::cin >> x;
    std::cout << (find(x, a) ? "yes" : "no") << std::endl;
  }
}

