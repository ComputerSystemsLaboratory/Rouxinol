#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef long double ld;
const int inf=1e9+7;
const ll longinf=1LL<<60;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
#define F first
#define S second
constexpr char ln = '\n';

const int mx=100010;
const ll mod=1e9+7;

void solve(){
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i,n){
    cin >> a[i];
  }
  string s;
  cin >> s;

  vector<ll> t;
  for(int i=n-1; i>=0; i--){
    ll tmp = a[i];
    if(s[i]== '1'){
      for(auto it:t){
        tmp = min(tmp, tmp^it);
      }
      if(tmp!=0){ cout << 1 << ln; return; }
    } else {
      for(auto it:t){
        tmp = min(tmp, tmp^it);
      }
      if(tmp!=0){ t.emplace_back(tmp); }
    }
  }
  cout << 0 << ln;
}

int main(){
  int q; cin >> q;
while(q--){
  solve();
}
  return 0;
}