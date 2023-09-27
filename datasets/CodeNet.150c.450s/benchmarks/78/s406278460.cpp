#include<bits/stdc++.h>
using namespace std;
using Int = long long;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

//INSERT ABOVE HERE
signed main(){
  const Int M=1e6+100;
  vector<Int> v;
  for(Int i=1;i*(i+1)*(i+2)/6<=M;i++)
    v.emplace_back(i*(i+1)*(i+2)/6);

  const Int INF = 1e8;
  vector<Int> dp(M,INF),dp2(M,INF);
  dp[0]=dp2[0]=0;
  for(Int i=0;i<(Int)v.size();i++){
    for(Int j=0;j<M;j++){
      if(j+v[i]<M){
	chmin(dp[j+v[i]],dp[j]+1);
	if(v[i]&1) chmin(dp2[j+v[i]],dp2[j]+1);
      }
    }
  }
  
  Int n;
  while(cin>>n,n) cout<<dp[n]<<" "<<dp2[n]<<endl;
  return 0;
}

