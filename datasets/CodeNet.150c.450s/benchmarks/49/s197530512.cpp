#include <bits/stdc++.h>

int main() {

  long N;
  std::vector<long> v;
  long temp;
  long ans;
  long total;

  for(;;) {
    v.clear();
    std::cin >> N;
    if( N == 0 ) break;
    for(int i = 0; i < N; ++i) {
      std::cin >> temp;
      v.push_back(temp);
    }
    std::sort(std::begin(v), std::end(v));
    total = 0;
    for(int i = 1; i < N-1; ++i) total += v[i];
    ans = total / (N-2);
    std::cout << ans << std::endl;
  }


  return 0;
}