#include <bits/stdc++.h>
#define rep(i,n) for (long long i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
const ll MOD = 1000000007;
const ll INF = 1000000000000000;
#define all(v) v.begin(), v.end()


int main(){
  ll N;
  cin >> N;
  vector<ll> f(N+1,0);
  for(ll i=1;i*i<=N;i++){
    for(ll j=1;j*j<=N;j++){
      for(ll k=1;k*k<=N;k++){
        if(i*i+j*j+k*k+i*j+j*k+k*i<=N){
          f.at(i*i+j*j+k*k+i*j+j*k+k*i)++;
        }
      }
    }
  }
  rep(i,N){
    cout << f.at(i+1) << endl;
  }
}
