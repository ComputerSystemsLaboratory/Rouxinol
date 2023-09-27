#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(),(a).end()
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
const ll INF=1e9;
int main(){
      int dp[2][1000000];
      vector<int> V[2];
      REP(i,2)REP(j,1000000)dp[i][j]=INF;
      dp[0][0]=dp[1][0]=0;
      for(int i=1;i*(i+1)*(i+2)/6<=1000000;i++){
            V[0].PB(i*(i+1)*(i+2)/6);
            if((i*(i+1)*(i+2)/6)&1)V[1].PB(i*(i+1)*(i+2)/6);
      }
      REP(i,2){
            REP(j,1000000){
                  REP(k,V[i].size()){
                        if(j+V[i][k]>=1000000)break;
                        dp[i][j+V[i][k]]=min(dp[i][j+V[i][k]],dp[i][j]+1);
                  }
            }
      }
      int n;
      while(cin>>n&&n){
            cout<<dp[0][n]<<" "<<dp[1][n]<<endl;
      }
}