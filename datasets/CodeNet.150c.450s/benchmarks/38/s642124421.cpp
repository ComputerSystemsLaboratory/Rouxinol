#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  int i, n, a, b, c;
  vector<int> triangle;
  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> a;
    cin >> b;
    cin >> c;
    triangle.push_back(a);
    triangle.push_back(b);
    triangle.push_back(c);

    sort(triangle.begin(), triangle.end());
    if (triangle.at(0) * triangle.at(0) + triangle.at(1) * triangle.at(1) == triangle.at(2) * triangle.at(2)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

    triangle.clear();
  }

  return 0;
}