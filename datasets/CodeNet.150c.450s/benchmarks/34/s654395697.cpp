#include<functional>
#include<algorithm>
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pf push_front
#define pb push_back
#define int long long
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
const int N=101;

signed main(){
  int n;
  while(cin>>n,n){
    int dp[35]={};
    dp[1]=1,dp[2]=2,dp[3]=4;
    loop(i,4,31){
      dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout<<dp[n]/3650+1<<endl;
  }
 return 0;
}