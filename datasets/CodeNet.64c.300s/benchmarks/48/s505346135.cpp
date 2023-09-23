#include <cmath>
#include <cstdlib>
#include <cstdio>

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>



int main() {

  bool isPrime[1000000];
  int  num[1000000];
  int  temp;
  int  n;

  for(int i = 0; i < 1000000; ++i) {
    isPrime[i] = true;
  }
  isPrime[0] = isPrime[1] = false;
  
  for(int i = 0; i < 1000; ++i) {
    if( isPrime[i] ) {
      for(int j = i+i; j < 1000000; j += i) {
	isPrime[j] = false;
      }
    }
  }

  num[0] = num[1] = 0;
  temp = 0;
  for(int i = 2; i < 1000000; ++i) {
    if( isPrime[i] ) ++temp;
    num[i] = temp;
  }

  while( std::cin >> n ) {
    std::cout << num[n] << std::endl;
  }
  
  return 0;
}