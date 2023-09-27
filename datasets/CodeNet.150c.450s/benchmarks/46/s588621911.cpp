#include <bits/stdc++.h>

int main() {

  int n, x;
  int ans = 0;

  for(;;) {
    std::cin >> n >> x;
    if( n == 0 && x == 0 ) {
      break;
    }

    ans = 0;
    for(int i = 1; i <= n; ++i) {
      for(int j = i+1; j <= n; ++j) {
	for(int k = j+1; k <= n; ++k) {
	  if( i + j + k == x ) {
	    ans += 1;
	  }
	}
      }
    }
    std::cout << ans << std::endl;
  }
  
  return 0;
}