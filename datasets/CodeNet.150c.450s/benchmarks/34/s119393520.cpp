#include<iostream>
#include<algorithm>
using namespace std;

int memo[100000];

int solve(int n){

  if(memo[n] > 0) return memo[n];

  if(n == 0) return 1;
  if(n == 1) return 1;
  if(n == 2) return 2;
 
  return memo[n] = solve(n - 1) + solve(n - 2) + solve(n - 3);
}

int main(){

  unsigned long long int n,a;

  while(cin >> n, n){

    a = solve(n);

    if(a % 3650 > 0) cout << a/3650+1 << endl;
    else cout << a/3650 << endl;
  }
}