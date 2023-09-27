#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000010];
ll dp2[1000010];
ll n3[1000010],s3;
ll n4[1000010],s4;
ll n5[1000010],s5;
int rec(int x){
  if(dp[x]!=-1)return dp[x];
  int ans=1e9;
  for(int i=1;i<s4;i++){
    if(n4[i]>x)break;
    ans=min(ans,rec(x-n4[i])+1);
  }
  return dp[x]=ans;
}

int rec2(int x){
  if(dp2[x]!=-1)return dp2[x];
  int ans=1e9;
  for(int i=0;i<s5;i++){
    if(n5[i]>x)break;
    ans=min(ans,rec2(x-n5[i])+1);
  }
  return dp2[x]=ans;
}



int main(){
  memset(dp,-1,sizeof(dp));
  memset(dp2,-1,sizeof(dp2));
  dp[0]=dp2[0]=0;
  for(int i=1;;i++){
    n3[i]=n3[i-1]+i;
    s3=i+1;
    if(n3[i]>1e6)break;
  }
  for(int i=1;;i++){
    n4[i]=n4[i-1]+n3[i];
    s4=i+1;
    if(n4[i]%2){
      n5[s5++]=n4[i];
    }
    if(n4[i]>1e6)break;
    dp[n4[i]]=1;
    dp2[n5[s5-1]]=1;
  }
  int n;
  while(cin>>n,n){
    cout<<rec(n)<<" "<<rec2(n)<<endl;
  }
  return 0;
}

