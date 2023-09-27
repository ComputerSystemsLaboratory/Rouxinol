#include <bits/stdc++.h>

using namespace std;

long long int solve(long long int x){

  if(x == 0) return 1;
  return x * solve(x - 1);

}

int main(){

  long long int n;

  cin >> n;

  cout << solve(n) << endl;

}