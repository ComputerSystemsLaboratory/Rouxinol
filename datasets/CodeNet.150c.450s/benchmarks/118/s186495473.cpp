#include <bits/stdc++.h>

int main() {

  int N;
  int y, m, d;
  int temp;
  
  std::cin >> N;
  for(int i = 0; i < N; ++i) {
    std::cin >> y >> m >> d;

    temp = (1000 - 1 - y) * 200 + (11 - 1 - m) * 20 + (21 - 1 - d) + 1;
    if( y % 3 != 0 ) temp -= (10-m)/2+1;
    for(int j = y+1; j < 1000; ++j) {
      if( j % 3 != 0 ) {
        temp -= 5;
      }
    }

    std::cout << temp << std::endl;
  }

  return 0;
}