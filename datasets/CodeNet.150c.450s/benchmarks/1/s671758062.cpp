#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n;
ll a[100001];
ll dp[100001];
const ll inf=9999999999;

int main(){
 ios::sync_with_stdio(false);
 cin.tie(0);
 cin>>n;
 for(int i=0;i<n;i++){
  cin>>a[i];
 }
 for(int i=0;i<100001;i++){
  dp[i]=inf;
 }
 for(int i=0;i<n;i++){
  *lower_bound(dp,dp+n,a[i])=a[i];
 }
 for(int i=0;i<100001;i++){
  if(dp[i]==inf){
   cout<<i<<endl;
   return 0;
  }
 }
 return 0;
}