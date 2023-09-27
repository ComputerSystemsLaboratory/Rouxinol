#include<iostream>

int main(int argc, char const *argv[]) {
  int a, b;
  int area, length;
  std::cin >> a >> b;
  area = a*b;
  length = 2*a + 2*b;
  std::cout << area << " " << length << '\n';
  return 0;
}