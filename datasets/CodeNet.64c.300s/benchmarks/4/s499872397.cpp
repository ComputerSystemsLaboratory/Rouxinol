#include<iostream>

int main() {
  int left, right, middle;
  std::cin >> left >> middle >> right;
  if (left < middle && middle < right) 
    std::cout << "Yes" << std::endl;
  else 
    std::cout << "No" << std::endl;
  return 0;
}