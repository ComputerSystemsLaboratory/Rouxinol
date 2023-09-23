#include <bits/stdc++.h>

int main(void) {

  int Fi[64];
  int n;

  std::cin >> n;
  
  Fi[0] = 1;
  Fi[1] = 1;
  for(int i = 2; i <= n; ++i) {
    Fi[i] = Fi[i - 1] + Fi[i - 2];
  }

  std::cout << Fi[n] << std::endl;

  return 0;
}