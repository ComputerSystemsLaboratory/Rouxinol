#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

const int MAX_V=1000010;
unsigned int dp[MAX_V];
unsigned int dpodd[MAX_V];
set<int> tetras{-1};
set<int> oddtetras{-1};
int main(){ _;
  int n;
  REP(i,MAX_V)dp[i]=dpodd[i]=-1;
  dp[0]=dpodd[0]=0;
  for(int i=1;;i++){
    int k=i*(i+1)*(i+2)/6;
    tetras.insert(k);
    if((k>>1)<<1!=k)//odd
      oddtetras.insert(k);
    if(k>MAX_V)break;
  }
  for(int i=1;i<MAX_V;i++){
    auto tetra=tetras.upper_bound(i);
    auto oddtetra=oddtetras.upper_bound(i);
    for(int j=0;j<200;j++){
      int k=*(--tetra);
      if(k<0)break;
      dp[i]=min(dp[i],dp[i-k]+1);
    }
    for(int j=0;j<200;j++){
      int k=*(--oddtetra);
      if(k<0)break;
      dpodd[i]=min(dpodd[i],dpodd[i-k]+1);
    }
  }
  while(cin>>n,n!=0){
    cout<<dp[n]<<" "<<dpodd[n]<<endl;
  }
}