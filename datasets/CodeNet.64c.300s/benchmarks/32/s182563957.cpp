#include <bits/stdc++.h>

int main() {
  
  long min = 1000000000;
  long max = -1000000000;
  long sum = 0;
  long N;
  long temp;

  std::cin >> N;
  for(long i = 0; i < N; ++i) {
    std::cin >> temp;
    min = std::min(temp, min);
    max = std::max(temp, max);
    sum += temp;
  }

  std::cout << min << " " << max << " " << sum << std::endl;
  
  return 0;
}