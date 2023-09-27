#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <map>
#include <vector>
#include <stack>
#define rep(i, n) for (int i = 0; i < n; i++)

int main(int argc, char *argv[]) {
  int x, i = 1;
  while (true) {
    std::cin >> x;
    if (x == 0) {
      break;
    }
    std::cout << "Case " << i << ": " << x << std::endl;
    i++;
  }
  return 0;
}