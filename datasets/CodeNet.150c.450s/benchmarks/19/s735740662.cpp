#include <iostream>

void exchange(int a, int b) {
  int left = (a < b) ? a : b;
  int right = (a < b) ? b : a;
  std::cout << left << " " << right << std::endl;
}

int main() {
  int left, right;
  int *swap;
  while (std::cin >> left >> right) {
    if (left == 0 && right == 0) break;
    else {
      exchange(left, right);
    }  
  }
  return 0; 
}      