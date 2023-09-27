#include <iostream>
int main() {
  int data, i = 1;
  do {
    std::cin >> data;
    if (data != 0) {
      std::cout << "Case " << i << ": " << data << std::endl;
      i++;
    }
  } while (data != 0);
}