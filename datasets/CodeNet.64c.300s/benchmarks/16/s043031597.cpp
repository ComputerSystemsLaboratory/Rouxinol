#include <bits/stdc++.h>

int main(void) {

  int min;
  int N;
  int A;
  int ans;

  std::cin >> N;
  
  std::cin >> A;
  min = A;

  std::cin >> A;
  ans = A - min;
  min = std::min(min, A);

  for(int i = 2; i < N; ++i) {
    std::cin >> A;
    ans = std::max(ans, A - min);
    min = std::min(min, A);
  }

  std::cout << ans << std::endl;
  
  return 0;
}