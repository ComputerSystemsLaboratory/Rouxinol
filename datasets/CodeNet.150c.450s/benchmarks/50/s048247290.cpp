#include <cstdio>
#include <algorithm>
#include <array>
#include <vector>
#include <iostream>

using namespace std;

int main() {

  const array<int, 6> coins = { 500, 100, 50, 10, 5, 1 };

  while(true) {
    int n;
    cin >> n;
    if ( n == 0 ) break;

    n = 1000 - n;
    int count = 0;
    for ( auto coin : coins ) {
      if ( n >= coin ) {
    	count += (n / coin);
    	n %= coin;
      }
    }
    cout << count << endl;
  }
  return 0;  
}