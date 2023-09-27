#include <bits/stdc++.h>

int main() {

  int left, right;
  int sum;
  int ans;
  int n;
  
  for(;;) {
    std::cin >> n;
    if( n == 0 ) break;

    left = right = 1;
    ans = 0;
    sum = 1;
    for(;;) {
      if( left > n ) break;
      if( sum == n ) {
        if( right - left >= 1 ) ans += 1; 
        sum -= left;
        left += 1;
        continue;
      }
      if( sum > n ) {
        sum -= left;
        left += 1;
        continue;
      }
      else {
        right += 1;
        sum += right;
        continue;
      }
    }
    std::cout << ans << std::endl;
  }

  return 0;
}