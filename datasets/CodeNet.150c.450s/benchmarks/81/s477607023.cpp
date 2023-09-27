#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<stack>
#include<algorithm>
#include<utility>
#include<memory>
 
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define pb push_back
 
typedef long long ll;

using namespace std;

const int mod=1e9+7;
const int INF=1<<25;

void solve(int n){
  int dp[11][11];
  fill(dp[0],dp[10],INF);
  rep(i,9) dp[i][i]=0;
  int a,b,c;
  int first=10,last=0;
  int ans1;
  ll ans2=INF,temp;
  rep(i,n){
    cin >> a >> b >> c;
    first=min(first,min(a,b));
    last=max(last,max(a,b));
    dp[a][b]=dp[b][a]=c;
  }
  REP(k,first,last+1) REP(i,first,last+1) REP(j,first,last+1){
    dp[j][i]=dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
  }
  REP(i,first,last+1){
    temp=0;
    REP(j,first,last+1){
      temp+=dp[i][j];
    }
    if(temp<ans2){
      ans2=temp;
      ans1=i;
    }
  }
  cout << ans1 << " " << ans2 << endl;

  return ;
}
int main(){
  int n;
  while(true){
    cin >> n;
    if(!n)  break;
    solve(n);
  }
  return 0;
}