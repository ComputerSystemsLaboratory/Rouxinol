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
signed main(){
  init_io();
  ll n,k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  for(int i=k;i<n;i++){
    if(a[i]>a[i-k]){
      cout <<"Yes\n";
    }else{
      cout <<"No\n";
    }
  }
}
