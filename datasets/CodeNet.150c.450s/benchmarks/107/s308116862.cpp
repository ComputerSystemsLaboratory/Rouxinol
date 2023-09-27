#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 1000000007
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";


int main(){
  string S1,S2;cin>>S1>>S2;
  int s1_l=S1.length(), s2_l=S2.length();
  int dp[s1_l+1][s2_l+1];
  REP(s1,0,s1_l+1)dp[s1][0]=s1;
  REP(s2,0,s2_l+1)dp[0][s2]=s2;

  REP(s1,1,s1_l+1)REP(s2,1,s2_l+1){dp[s1][s2]=
  min({dp[s1-1][s2]+1,dp[s1][s2-1]+1,dp[s1-1][s2-1]+((S1[s1-1]==S2[s2-1])?0:1)});
  //print((S1[s1]==S2[s2]))
  }
  print(dp[s1_l][s2_l])
}
