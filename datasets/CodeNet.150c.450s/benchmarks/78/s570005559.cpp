#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#define INF (int)(1e9)
#define MAXN 1000001
using namespace std;

int sankaku[500];
int simen[500];
int simen2[500];
int maxi,maxj;
int dp[MAXN];
int dp2[MAXN];

void solve(){
  int i,j,t;
  int n=1111111;
  for(i=0;i<MAXN;i++){
    dp[i]=dp2[i]=INF;
  }
  dp[0]=dp2[0]=0;
  for(i=0;i<=maxj;i++){
    t=simen[i];
    for(j=t;j<MAXN;j++){
      dp[j]=min(dp[j],dp[j-t]+1);
    }
  }

  for(i=0;i<=maxi;i++){
    t=simen2[i];
    //if(t%2==0) continue;
    for(j=t;j<MAXN;j++){
      dp2[j]=min(dp2[j],dp2[j-t]+1);
    }
  }
}


int main(void){
  int n,i,j,t;
  t=i=j=1;
  sankaku[0]=1;
  simen[0]=1;
  simen2[0]=1;
  while(simen[j-1]<MAXN){
    sankaku[j]=sankaku[j-1]+j+1;
    simen[j]=simen[j-1]+sankaku[j];
    t=simen[j++];
    if(t%2==1) simen2[i++]=t;
  }
  maxi=i;
  maxj=j;
  
  solve();
  /*
  for(i=0;i<10;i++){
    printf("%d : %d   %d\n",i,simen[i],simen2[i]);
  }
  */
  while(scanf("%d",&n),n){
    cout<<dp[n]<<" "<<dp2[n]<<endl;
  }
  
  return 0;
}