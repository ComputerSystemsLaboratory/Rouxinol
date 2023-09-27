#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void prime_factor(ll n){
  map<ll,int> mp;
  if(n==2){
    cout << " " << n << endl;
  }
  for(ll i=2;i*i<=n;++i){
    if(n%i==0){
      int ex=0;
      while(n%i==0){
        n/=i;
        ex++;
      }
      mp[i]=ex;
    }
  }
  if(n!=1) mp[n]++;
  for(auto p : mp){
    for(int i=0;i<p.second;++i){
      //cout << p.first << p.second;
      cout << " " << p.first;
    }
  }
  cout << endl;
  return;
}


int main(){
  ll n;
  cin >> n;
  cout << n << ":";
  prime_factor(n);
  return 0;
}

