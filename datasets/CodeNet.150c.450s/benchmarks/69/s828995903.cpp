#include<bits/stdc++.h>
using namespace std;
int kuru[10];
bool solve(int l,int r,int co,int now);
int main(){
  int n;
  cin>>n;
  while(n--){
    for(int i=0;i<10;i++){
      cin>>kuru[i];
    }
    if(solve(0,0,0,0))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}
bool solve(int l,int r,int co,int now){
  if(co==10)return true;
  if(l<kuru[now]){
    if(solve(kuru[now],r,co+1,now+1))return true;
    else return false;
  }
  if(r<kuru[now]){
    if(solve(l,kuru[now],co+1,now+1))return true;
    else return false;
  }
  else if(r>kuru[now] && l>kuru[now])return false;
}