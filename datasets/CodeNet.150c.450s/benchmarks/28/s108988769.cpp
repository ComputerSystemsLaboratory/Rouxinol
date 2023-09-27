#include<bits/stdc++.h>
#include<cctype>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);i++)
#define all(v) (v).begin(),(v).end()
typedef long long int ll;
#define pi 3.1415926535897932384
#define E9 1000000000
#define eps 1e-4
#define pii pair<int,int>


ll func(ll n, ll k, ll w[], ll P){ // 最大積載量Pを決めた時、積載可能な荷物の量
  ll j = 0;
  for (ll t = 0;t<k;t++){
    ll sekisai = 0;

    while (sekisai+w[j]<=P){
      sekisai += w[j];
      j++;

      if (j==n) return n;
    }
  }
  return j;
}

int main(){
  ll n, k; cin >> n >> k;
  ll w[n];
  rep(i,n) cin >> w[i];

  ll left = 0, right = 1000000000000, mid;
  while (right-left > 1){
    mid = (left+right)/2;
    auto P = func(n,k,w,mid);
    if (P==n) right = mid;
    else left = mid;

    // cout << left << " " << right << endl;
  }

  cout << right << endl;
  // cout << fixed << setprecision(6);
  return 0;
}

