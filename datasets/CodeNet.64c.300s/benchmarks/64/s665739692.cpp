#include <bits/stdc++.h>

int gcd(int x, int y){

  if( (x % y) != 0 )
    return gcd(y, (x % y));
  else
    return y;

}


int main(){

  int x, y;

  std::cin >> x >> y;

  std::cout << gcd(x, y) << std::endl;

  return 0;

}