#include <bits/stdc++.h>

int isprime(int x){

  if(x == 2) return 1;
  else if( (x < 2) || (x % 2 == 0) ) return 0;

  int i = 3;

  while(i <= std::sqrt( (double)x )){
    if( (x % i) == 0) return 0;
    i = i + 2;
  }

  return 1;
}


int main(){

  int count = 0;
  int n, x;

  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::cin >> x;
    count += isprime(x);
  }

  std::cout << count << std::endl;

  return 0;
}