#include<iostream>

using namespace std;

typedef long long ll;
const int MAX = 35;
ll ans,dp[MAX];
int in;

void make(){
  dp[0] = 1;

  for(int i = 0; i <= 30; i++)
    for(int j = 1; j <= 3; j++)
      dp[i+j] += dp[i];

}

int main(){
  make();
  while(cin >> in && in) cout << dp[in]/3650+1<< endl;
  return 0;
}