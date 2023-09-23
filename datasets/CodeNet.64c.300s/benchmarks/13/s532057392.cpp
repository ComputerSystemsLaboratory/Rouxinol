#include<iostream>
using namespace std;
int memo[50];
int fib(int n){
  if(memo[n] >= 0)return memo[n];
  if(n <= 1)return 1;
  return memo[n] = fib(n-1) + fib(n-2);
}

int main(){
  int n;
  cin >> n;
  fill(memo,memo+50,-1);
  cout << fib(n) << endl;
}