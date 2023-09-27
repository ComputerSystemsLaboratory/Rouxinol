#include<iostream>
using namespace std;
typedef long long ll;

ll n,k;
ll w[100000];

bool check(int x){
  ll cost=0,cnt=0;
  for(ll i=0;i<n;i++){
    cost+=w[i];
    while(cost>x){
      cost=w[i];
      cnt++;
      if(cnt==k)return false;
    }
  }
  return true;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin>>n>>k;
  for(ll i=0;i<n;i++)cin>>w[i];
  ll l=0,r=1000000000LL,m;
  while(l<r){
    m=(l+r)/2;
    if(check(m))r=m;
    else l=m+1;
  }
  cout<<l<<endl;
  return 0;
}