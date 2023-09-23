#include <iostream>
using namespace std;

int n;
int dp[50];

int fibo(int i){
  if(dp[i] != 0) return dp[i];
  else if(i == 0 || i == 1) return dp[i] = 1;
  else{
    return dp[i] = fibo(i-1) + fibo(i-2);
  }
}

int main(){
  cin >> n;
  cout << fibo(n) << endl;
  return 0;
}

