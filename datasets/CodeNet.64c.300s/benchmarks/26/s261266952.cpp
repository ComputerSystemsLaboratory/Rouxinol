#include<iostream>

const int DIV = 1000000007;

unsigned long long power(int n, int m){
  if(m == 0) return 1;
  else if(m == 1) return n;
  else{
    unsigned long long p = power(n, m / 2);
    if(m % 2 == 0) return (p * p) % DIV;
    else return ( ((n * p) % DIV) * p) % DIV;
  }
}

int main(){
  int n, m;
  std::cin >> n;
  std::cin >> m;
  
  std::cout << power(n, m) << std::endl;

  return 0;
}

