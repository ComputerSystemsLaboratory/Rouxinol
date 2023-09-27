#include <bits/stdc++.h>

int main() {

  int N;
  int max = -2000001000;
  int min =  2000001000;
  int temp;

  std::cin >> N;
  for(int i = 0; i < N; ++i) {
    std::cin >> temp;
    max = std::max(max, temp-min);
    min = std::min(min, temp);
  }

  std::cout << max << std::endl;

  
  return 0;
}