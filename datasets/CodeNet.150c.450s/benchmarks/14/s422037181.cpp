#include <iostream>


void output(int i) {
  std::cout << " " << i;
}


void call(int n) {
  int x;
  for (int i = 1; i <= n; i ++) {
    x = i;
    if (x % 3 == 0 ) {
      output(i);
      continue;
    } else {
      do {
        if (x % 10 == 3) {
          output(i);
          break;
        } else {
          x /=10;
        }
      } while (x != 0);
    }
  }
  std::cout << std::endl;
}


int main() {
  int n;
  std::cin >> n;
  call(n);

  return 0;
}

