#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define INF (1<<25)
int N;
int pr[182];
int dp[1000002][2];
void init(){
  for(int i=0;i<=1000000;i++) for(int j=0;j<2;j++) dp[i][j]=INF;
}
void solve(){
  dp[0][0]=0;
  dp[0][1]=0;
  for(int i=0;i<=1000000;i++){
    if(dp[i][0]==INF) continue;
    for(int j=0;i+pr[j]<=1000000;j++){
      dp[i+pr[j]][0] = min(dp[i+pr[j]][0],dp[i][0]+1);
      if(pr[j]&1) dp[i+pr[j]][1] = min(dp[i+pr[j]][1],dp[i][1]+1);
    }
  }
}

int main(){
  for(int i=0;i<182;i++) pr[i] = (i+1)*(i+2)*(i+3)/6;
  //  for(int i=0;i<102;i++) printf("%d\n",pr[i]);
  //  for(int i=0;i<102;i++) if(!(i%2)) printf("%d\n",pr[i]);
  init();
  solve();
  while(1){
    scanf("%d",&N);
    if(!N) break;
    printf("%d %d\n",dp[N][0],dp[N][1]);
  }
}