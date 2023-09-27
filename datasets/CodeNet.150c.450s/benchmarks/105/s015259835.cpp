// I SELL YOU...! 
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<queue>
#include<chrono>
#include<iomanip>
#include<map>
#include<set>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
using TP = tuple<ll,ll,ll>;
void init_io(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(18);
}
const ll MAX_B = 63;
const ll MAX = (1ll<<MAX_B);
bool add_v(vector<ll> &base,ll nv){
  sort(base.begin(),base.end(),greater<ll>());
  for(auto b:base){
    nv = min(nv,nv^b);
  }
  if(nv==0){
    return false;
  }else{
    base.push_back(nv);
    return true;
  }
}
void solve(){
  ll n;
  string s;
  cin >> n;
  vector<ll> a(n),base;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  cin >> s;
  base.push_back(0);
  for(int i=n-1;i>=0;i--){
    bool res = add_v(base,a[i]);
    if(!res) continue;
    if(s[i]=='1'){
      cout <<"1\n";
      return;
    }
  }
  cout << "0"<<endl;
}
signed main(){
  init_io();
  ll t;
  cin >> t;
  while(t--) solve();
}
