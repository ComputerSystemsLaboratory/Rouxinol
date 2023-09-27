#include <bits/stdc++.h>

int main(void) {
  
  int n;
  int q;
  int S[16384];
  int T[512];

  std::cin >> n;
  for(int i = 0; i < n; ++i) {
    std::cin >> S[i];
  }
  std::cin >> q;
  for(int i = 0; i < q; ++i) {
    std::cin >> T[i];
  }

  int ans = 0;
  for(int i = 0; i < q; ++i) {
    int num = T[i];
    for(int j = 0; j < n; ++j) {
      if( S[j] == num ) {
        ans += 1;
        break;
      }
    }
  }

  std::cout << ans << std::endl;
  
  return 0;
}