#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
int main(){
  ll n,k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i,n){
    cin >> a.at(i);
  }
  ll is=1;
  string ans;
  for(ll i=k;i<n;i++){
    if(a.at(i-k)<a.at(i)){
      cout << "Yes" << endl;
    }else{
      cout << "No"<<endl;
    }
  }
}