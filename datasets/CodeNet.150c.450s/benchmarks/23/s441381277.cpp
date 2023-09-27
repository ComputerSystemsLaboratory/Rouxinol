#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int *F;

int f(int n){
  if(n == 0 || n == 1){
    return F[n] = 1;
  }

  if(F[n] != 0){
    return F[n];
  }

  return F[n] = f(n - 2) + f(n - 1);
}

int main(){

  int n;

  cin >> n;

  F = new int[n + 1];

  for(int i = 0; i <= n; i++){
    F[i] = 0;
  }

  cout << f(n) << endl;


  return 0;
}

