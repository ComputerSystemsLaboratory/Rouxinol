#include <iostream>
using namespace std;

int memo[45], n;

void init(){
  for(int i = 0; i <= n; i++){
    memo[i] = -1;
  }
}

int fibo(int d){
  if(memo[d] >= 0) return memo[d];
  if(d == 0 || d == 1) return memo[d] = 1;
  return memo[d] = fibo(d - 1) + fibo(d - 2);
}

int main(void){
  cin >> n;
  init();
  cout << fibo(n) << endl;;
  return 0;
}