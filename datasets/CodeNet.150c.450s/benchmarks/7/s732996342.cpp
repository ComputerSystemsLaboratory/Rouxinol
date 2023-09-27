#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <queue>
#include <map>
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define MAX_N 105
int vx [4]= {1,0,-1,0};
int vy [4]= {0,1,0,-1};
long long  dp[MAX_N][21]={};//dp[i???????????§???][???]????????°
int V[MAX_N],W[MAX_N];
int data[MAX_N],B[MAX_N];
int K ,N,a[MAX_N];
using namespace std;
void init(){

  /*cin >> N;
  cin >> a[1];
    dp[1][a[1]]=1;
  for(int l= 2;l<=N-1;l++){
    cin >> a[l];
    for(int i= 0;i<=20;i++){
      if(i-a[l]>=0&&i-a[l]<=20) dp[l][i] += dp[l-1][i-a[l]];
      if(i+a[l]>=0&&i+a[l]<=20) dp[l][i] += dp[l-1][i+a[l]];
    }
      //REP(i,21)cout<<l<<':'<< i<<' '<<dp[l-1][i]<<endl;
  }
  //REP(i,21)cout<< i<<' '<<dp[N-1][i]<<endl;
  cin >> a[N];
  cout << dp[N-1][a[N]]<<endl;
  */
}
void solve(){
  init();

}
int main(){
    vector<int>h ;
    int t;
    REP(i,10)
    {cin >> t;
    h.push_back(t);
  }
  sort(h.begin(),h.end());
  reverse(h.begin(),h.end());
  REP(i,3)cout << h[i]<<endl;
}