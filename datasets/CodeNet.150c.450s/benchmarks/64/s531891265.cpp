#include <bits/stdc++.h>

int n;
int A[32];
int q;
int m[2048];

bool P[65536];

int main(void) {

  std::cin >> n;
  for(int i = 0; i < n; ++i) {
    std::cin >> A[i];
  }
  std::cin >> q;
  for(int i = 0; i < q; ++i) {
    std::cin >> m[i];
  }

  for(int i = 0; i < (1<<n); ++i) {
    int num = 0;
    for(int j = 0; j < n; ++j) {
      if( ( i & (1 << j) ) != 0 ) {
        num += A[j];
      }
    }
    P[num] = true;
  }

  for(int i = 0; i < q; ++i) {
    if( P[m[i]] ) {
      std::cout << "yes" << std::endl;
    }
    else {
      std::cout << "no" << std::endl;
    }
  }
        
  return 0;
}