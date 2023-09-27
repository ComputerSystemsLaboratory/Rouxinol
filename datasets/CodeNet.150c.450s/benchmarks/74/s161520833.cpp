#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define show(x) cout<<#x<<"="<<x<<endl
using namespace std;

int n,m;
int c[21];
int dp[50001];
const int inf=999999999;

int main(){
 cin>>n>>m;
 for(int i=0;i<n;i++){
  cin>>c[i];
 }
 for(int i=0;i<50001;++i){
  dp[i]=inf;
 }
 dp[0]=0;
 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   if(i+c[j]<=n){
    dp[i+c[j]]=min(dp[i+c[j]],dp[i]+1);
   }
  }
 }
 cout<<dp[n]<<"\n";
 return 0;
}