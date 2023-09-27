#include <iostream>
#include <cmath>
using namespace std;

int dp[31];

void solve(int n)
{
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for(int i = 4; i <= n; i++)
    dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
}

int main()
{
  int n;
  while(1){
    cin >> n;
    if(n == 0){
      break;
    }else{
      solve(n);
      cout << ceil((double) (ceil((double) dp[n] / 10) / 365)) << endl;
    }
  }
}