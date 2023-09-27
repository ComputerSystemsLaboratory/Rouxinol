#include<bits/stdc++.h>
using namespace std;
int n,s;
int ans;
void solve(int sum,int idx,int n){
  if(n==0 && sum==s){
    ans++;
    return;
  }else if(n==0 || idx==10){
    return;
  }

  solve(sum+idx,idx+1,n-1);
  solve(sum,idx+1,n);
  return;
}

int main(){
  while(1){
    ans=0;
    cin>>n>>s;
    if(n==0 && s==0) break;
    solve(0,0,n);
    cout<<ans<<endl;
  }
}