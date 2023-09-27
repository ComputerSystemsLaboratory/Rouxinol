#include <iostream>


int main () {
  char str[21] = "";
  char *ans;
  int i = 19;
  while (std::cin >> str[i]) {
    i --;
  }
  ans = str;
  ans += i + 1;
  std::cout << ans << std::endl;

}