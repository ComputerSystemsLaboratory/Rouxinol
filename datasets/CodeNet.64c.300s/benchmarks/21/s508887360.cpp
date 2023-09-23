#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  double a, b, c, d, e, f;

  while (cin >> a, cin >> b, cin >> c, cin >> d, cin >> e, cin >> f) {
    printf("%.3f %.3f\n", (c * e - f * b) / (a * e - d * b) + 0, (c * d - f * a) / (b * d - e * a) + 0);
  }

  return 0;
}