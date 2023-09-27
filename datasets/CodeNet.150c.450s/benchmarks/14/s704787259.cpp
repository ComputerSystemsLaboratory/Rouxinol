#include <bits/stdc++.h>

int main() {

  int N;
  bool b;
  int temp;
  std::cin >> N;

  for(int i = 1; i <= N; ++i) {
    if( i % 3 == 0 ) {
      std::cout << " " << i;
    }
    else {
      temp = i;
      b = false;
      while( temp != 0 ) {
	if( temp % 10 == 3 ) {
	  b = true;
	  break;
	}
	temp /= 10;
      }
      if( b ) {
	std::cout << " " << i;
      }
    }

      
  }
  std::cout << std::endl;
  
  return 0;
}