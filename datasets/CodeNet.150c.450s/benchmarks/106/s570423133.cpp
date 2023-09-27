#include <iostream>

int main() {
  int a;
  int b;
  int c;
  std::cin >> a >> b >> c;

  int cnt = 0;
  for(int i = a; i <= b; ++i) {
    if((c % i) == 0) {
      ++cnt;
    }
  }

  std::cout << cnt << std::endl;
  return 0;
}