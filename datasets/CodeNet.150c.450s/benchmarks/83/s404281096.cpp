#include<cstdio>
#include<bits/stdc++.h>

#define REP(i, n) for(int i = 0; (i) < (n); (i)++)
#define FOR_IN(i, a, b) for(int (i) = (a); (i) < (b); (i)++)
#define IN(x, a, b) ((x) >= (a) && (x) <= (b))

using namespace std;
typedef long long int ll;
/*
N W
vi wi

N 100
W 10000

 */

int N,W;
int w[100],v[100];
ll dp[101][10001];

int main(){
  cin >> N >> W;

  REP(i, N){
    cin >> v[i] >> w[i];
  }

  REP(i,N){
    REP(j,W+1){
      if(j<w[i]){
        dp[i+1][j] = dp[i][j];
      } else {
        dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]] + v[i]);
      }
    }
  }

  cout << dp[N][W] << endl;
  return 0;
}
