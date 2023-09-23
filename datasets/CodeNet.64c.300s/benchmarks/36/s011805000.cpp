#include <iostream>
#include <algorithm>
int main() {
  int data[3];
  std::cin >> data[0] >> data[1] >> data[2];
  std::sort(data,data+3);
  std::cout << data[0] << " " << data[1] << " " << data[2] << std::endl;
}