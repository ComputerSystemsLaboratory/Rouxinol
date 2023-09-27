#include<iostream>

using namespace std;

int fib(int n);

int memo[45];

int main(){
  int n;

  //??\???
  cin >> n;

  //??????
  cout << fib(n) << endl;

  return 0;
}

int fib(int n){

  if(n == 0){
    return 1;
  }else if(n == 1){
    return 1;
  }else if(memo[n] != 0){
    return memo[n];
  }else{
    return memo[n] = fib(n-1) + fib(n-2);
  }
}