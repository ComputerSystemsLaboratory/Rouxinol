#include <iostream>
using namespace std;

long long memo[41];

long long solve(int rem){
  if(rem == 0) {
    return 1;
  }
  if(memo[rem] > 0) return memo[rem];

  long long sum = 0;
  for(int i=1;i<=3;i++){
    if(rem >= i) sum += solve(rem-i);
  }
  return (memo[rem] = sum);
}

int main(void){
  int n;

  while(cin>>n && n){
    long long day = solve(n);
    if(day % 3650 == 0) cout<<day / 3650<<endl;
    else cout<<day / 3650 + 1 << endl;
  }

  return 0;
}