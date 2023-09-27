#include <bits/stdc++.h>

int main() {

  int n, r;
  int card[64];
  int card2[64];
  int p, c;

  for(;;) {
    std::cin >> n >> r;
    if( n == 0 && r == 0 ) {
      break;
    }

    for(int i = 0; i < n; ++i) {
      card[i] = n-i;
    }

    for(int i = 0; i < r; ++i) {
      std::cin >> p >> c;

      for(int j = 0; j < p-1; ++j) {
	card2[j+c] = card[j];
      }

      for(int j = p-1; j < c+p-1; ++j) {
	card2[j-p+1] = card[j];
      }

      for(int j = 0; j < c+p-1; ++j) {
	card[j] = card2[j];
      }
    }
    std::cout << card[0] << std::endl;
  }
  
  return 0;
}