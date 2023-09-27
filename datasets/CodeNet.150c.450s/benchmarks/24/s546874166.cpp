#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

const int MAX_N=10000;

pair<int,int> dp [MAX_N];
int n,m;

void solve(){
  sort(dp,dp+n,greater<pair<int,int> >());
  for(int i=0;i<n;i++){
    int tmp=dp[i].second;
    if(tmp>=m){
      dp[i].second-=m;
      break;
    }else{
      dp[i].second=0;
      m-=tmp;
    }
  }
  long long int sum=0;
  REP(i,n){
    sum+=dp[i].first*dp[i].second;
  }
  cout<<sum<<endl;
}

int main(){ _;
  while(cin>>n>>m,(n|m)!=0){
    REP(i,n)cin>>dp[i].second>>dp[i].first;
    solve();
  }
}