#include <bits/stdc++.h>
#define REP(i, x, y) for (ll i = x; i <= y; i++)
#define BIT(t) (1ll << t)
#define PER(i, y, x) for (ll i = y; i >= x; i--)
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define pll pair<ll, ll>
#define SIZE(v) ll(v.size())
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
//        ios::sync_with_stdio(false);
//        cin.tie(nullptr);

ll MX = 60;


bool kesenai(vll& v, vll& k, ll x){
  REP(jp,0,SIZE(v)-1){
    ll i = k[jp];
    ll bt = BIT(i);
    if(bt & x){
      x ^= v[jp];
    }
  }
  return x != 0;
}

void g(vll& v, vll& keta, ll x){
  if(kesenai(v, keta, x)){

    v.push_back(x);
    keta.push_back(0);
    ll cur = 0;
    PER(i,MX,0){
      ll bt = BIT(i);
      REP(j,cur,SIZE(v)-1){
        if(bt & v[j]){
          swap(v[j], v[cur]);
          REP(u,0,SIZE(v)-1){
            if((bt & v[u]) && (cur != u)){
              v[u] ^= v[cur];
              
            }
          }
          keta[cur] = i;
          cur++;
          break;
        }
      }
    }
    // REP(i,0,SIZE(v)-1){
    //   cout << v[i] << " ";
    // }cout << endl;
    // REP(i,0,SIZE(keta)-1){
    //   cout << keta[i] << " ";
    // }
    // cout << endl;
  }
  // REP(i,0,SIZE(v)-1){
  //   cout << v[i] << " ";
  // }
  // cout << endl;
}


ll f(){

  ll n;
  cin >> n;
  vll a;
  REP(i,1,n){
    ll t;
    cin >> t;
    a.push_back(t);
  }
  string s;
  cin >> s;
  vll vc, k;
  PER(i,n-1,0){
    if(s[i] == '0'){
      g(vc, k, a[i]);
      
    }else{
      if(kesenai(vc, k, a[i])){
        return 1;
      }
    }
  }
  return 0;
}

int main(){
  ll t;
  cin >> t;
  vll ans(t+1);
  REP(i,1,t){
    ans[i] = f();
  }
  REP(i,1,t){
    cout << ans[i] << endl;
  }
}