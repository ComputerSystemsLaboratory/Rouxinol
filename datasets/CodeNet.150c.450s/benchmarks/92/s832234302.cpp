#include <iostream>

const int N = 200;
const int M = 10;

int main(void) {
  int a = 0;
  int b = 0;

  while (!std::cin.eof()) {
    std::cin >> a;
    std::cin >> b;

    if (std::cin.eof()) {
      break;
    }

    int c = a + b;

    int count = 1;

    while (c >= M) {
      c /= M;
      count++;

      if (c < M) {
	break;
      }
    }

    std::cout << count << std::endl;

    if (std::cin.eof()) {
      break;
    }
  }
   
  return 0;
}