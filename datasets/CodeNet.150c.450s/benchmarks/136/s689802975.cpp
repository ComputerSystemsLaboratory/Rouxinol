#include <iostream>
#include <algorithm>
#define MAX_N 1001
using namespace std;
typedef long long ll;
//lcs
int n,m;
string s,t;
int dp[MAX_N+1][MAX_N+1];
void solve(){
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++){
      if(s[i]==t[j]) dp[i+1][j+1]=dp[i][j]+1;
      else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
    }
  cout<<dp[n][m]<<endl;
}
//lcm
ll lcm(int gcdv,int a,int b){
  return (ll)a*b/gcdv;
}
//greatest common divisor
int main() {
  int a,b;
  while(cin>>a>>b){
    int r=__gcd(a,b);
    cout<<r<<' '<<lcm(r,a,b)<<endl;
  }
  return 0;
}