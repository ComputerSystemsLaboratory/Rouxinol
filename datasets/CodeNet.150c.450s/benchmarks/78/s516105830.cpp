#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 1e+8;

using namespace std;

int main() {
  int m=1e+6;
  vector<int> dp1(2*m, INF), dp2(2*m, INF);
  dp1[0]=dp2[0]=0;
  REP(i,200) {
    int t=i*(i+1)*(i+2)/6;
    if (t>m) break;
    REP(j,m){
      dp1[j+t] = min(dp1[j+t], dp1[j]+1);
      if(t%2) dp2[j+t] = min(dp2[j+t], dp2[j]+1);
    }
  }
  while(1){
    int n;
    cin>>n;
    if(!n)break;
    cout<<dp1[n]<<' '<<dp2[n]<<endl;
  }
  return 0;
}