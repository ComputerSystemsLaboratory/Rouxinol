#include <bits/stdc++.h>
using namespace std;
#define MAX 50
int fibonacci(int);
int F[MAX];

int main(){
  int i,n;
  for(i = 0; i < MAX; i++){
    F[i] = -1;
  }
  cin >> n;
  cout << fibonacci(n) << endl;
  return 0;
}

int fibonacci(int n){
  if(n == 0 || n == 1){
    return F[n] = 1;
  }
  if(F[n] != -1){
    return F[n];
  }
  return F[n] = fibonacci(n-2) + fibonacci(n-1);
}