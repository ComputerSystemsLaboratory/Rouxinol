#include <iostream>
#include <vector>

int main() {

  int n;
  std::cin >> n;
  std::vector<int> s(n, 0);
  for (int i = 0; i < n; i++) {
    std::cin >> s[i];
  }
  int q;
  std::cin >> q;
  std::vector<int> t(q, 0);
  for (int i = 0; i < q; i++) {
    std::cin >> t[i];
  }

  int count = 0;
  for (auto i : t) {
    for (auto j : s) {
      if (i == j) {
        count++;
        break;
      }
    }
  }

  std::cout << count << std::endl;
}

