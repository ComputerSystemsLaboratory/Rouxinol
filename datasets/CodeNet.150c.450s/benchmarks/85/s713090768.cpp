#include<bits/stdc++.h>
using namespace std;
using UL = unsigned int;
using ULL = unsigned long long;
using LL = long long;
#define rep(i,n) for(UL i=0; i<(n); i++)

UL N;
ULL dp[101][101];
ULL R[100][2];

int main() {
 cin>>N;
 rep(i,N) rep(j,2) cin>>R[i][j];
 rep(i,N+1) rep(j,N+1) dp[i][j]=1000000000000;
 rep(i,N) dp[i][i+1]=0;
 for(UL j=2; j<=N; j++) for(UL i=j-2; i!=~0u; i--){
  for(UL k=i+1; k<=j-1; k++){
   dp[i][j]=min(dp[i][j],
    dp[i][k]+dp[k][j]+R[i][0]*R[j-1][1]*R[k][0]
   );
  }
 }
 cout<<dp[0][N]<<endl;
 return 0;
}

