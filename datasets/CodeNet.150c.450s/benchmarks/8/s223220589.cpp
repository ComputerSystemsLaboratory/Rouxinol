#include <bits/stdc++.h>

int main() {

  int N;
  std::string str1, str2;
  int point1, point2;

  point1 = point2 = 0;

  std::cin >> N;
  for(int i = 0; i < N; ++i) {
    std::cin >> str1 >> str2;

    if( str1 > str2 ) {
      point1 += 3;
    }
    else if( str1 < str2 ) {
      point2 += 3;
    }
    else {
      point1 += 1;
      point2 += 1;
    }

  }

  std::cout << point1 << " " << point2 << std::endl;
  
  return 0;
}