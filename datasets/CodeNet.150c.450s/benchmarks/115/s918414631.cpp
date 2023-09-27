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
const int INF=1e9;
int dp[1001][1001];
int main(){
      string s,t;
      int n;
      cin>>n;
      while(n--){
            cin>>s>>t;
            memset(dp,0,sizeof(dp));
            REP(i,s.size()){
                  REP(j,t.size()){
                        if(s[i]==t[j])dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+1);
                        else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
                  }
            }
            cout<<dp[s.size()][t.size()]<<endl;
      }
}