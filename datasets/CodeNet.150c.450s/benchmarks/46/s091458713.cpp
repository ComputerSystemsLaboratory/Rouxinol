#include <iostream>

int main() {
  int n;
  int x;

  while(1) {
    std::cin >> n >> x;
    if(n == 0 && x == 0) break;
    int cnt = 0;
    for(int i = 1; i <= n; ++i) {
      for(int j = 1; j <= n; ++j) {
        if(i == j) break;
        for(int k = 1; k <= n; ++k) {
          if(i == k || j == k) break;
          int sum = i + j + k;
          if(sum == x) cnt ++;
        }
      }
    }
    std::cout << cnt << std::endl;
  }

  return 0;
}