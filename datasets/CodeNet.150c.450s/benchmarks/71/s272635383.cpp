#include <iostream>
#include <vector>
 
int main(void) {
  int n;
  while (std::cin >> n) {
    int ans = 0;
    for (int i = 0; i <= 9; i++) {
      for (int j = 0; j <= 9; j++) {
        for (int k = 0; k <= 9; k++) {
          for (int l = 0; l <= 9; l++) {
            if(i + j + k + l == n)ans++;
          }
        }
      }
    }
    std::cout << ans << std::endl;
  }
  return 0;
}