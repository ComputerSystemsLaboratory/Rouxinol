#include <iostream>

void call(int n);

int main() {
  int n;
  std::cin >> n;

  call(n);

  return 0;
}

void call(int n) {
  int x;

  for(int i = 1; i <= n; ++i) {
    x = i;
    if(x % 3 == 0) {
      std::cout << " " << i;
      continue;
    }
    if(x % 10 == 3) {
      std::cout << " " << i;
      continue;
    }
    while(x) {
      x /= 10;
      if(x % 10 == 3) {
        std::cout << " " << i;
        break;
      }
    }
  }
  std::cout << std::endl;

}