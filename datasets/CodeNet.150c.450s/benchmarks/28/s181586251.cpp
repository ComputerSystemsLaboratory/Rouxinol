#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

typedef long long ll;
ll n,k,w[100001];

bool check(ll P){
  ll cnt = 1, sum = 0;
  rep(i,n) {
    if( w[i] > P ) return false;
    if( sum + w[i] <= P ) sum += w[i];
    else ++cnt, sum = w[i];
  }
  return cnt <= k;
}

int main(){
  cin >> n >> k;
  rep(i,n) cin >> w[i];
  ll L = 0, R = 2000000000000;
  while( L + 1 < R ){
    ll M = ( L + R ) / 2;
    if( check(M) ) R = M;
    else           L = M;
  }
  cout << R << endl;
  return 0;
}