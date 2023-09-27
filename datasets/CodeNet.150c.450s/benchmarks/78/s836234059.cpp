#include<iostream>
#include<algorithm>
#define N 1000000
#define M 200

using namespace std;

int dp[M], dp1[N], dp2[N];

void init(){
  dp[0]=0; dp1[0]=0; dp2[0]=0;
  for(int i=1; i<M; ++i) dp[i]=i*(i+1)*(i+2)/6;
  for(int i=1; i<N; ++i){
    dp1[i]=N; dp2[i]=N;
    for(int j=1; j<N; ++j){
      if(i-dp[j] < 0) break;
      dp1[i] = min(dp1[i], dp1[i-dp[j]]+1);
      if(dp[j]%2) dp2[i] = min(dp2[i], dp2[i-dp[j]]+1);
    }
  }
}

int main(){
  init();
  int n;
  while(1){
    cin >> n;
    if(!n) break;
    cout << dp1[n] << " " << dp2[n] << endl;
  }
  return 0;
}