#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (long long i = 0; i < (n); ++i)
using ll = long long;
using P = pair<ll,ll>;
using vec = vector<ll>;
using vecp = vector<P>;
using mat = vector<vec>;
using matp = vector<vecp>;
const ll MOD = 1e9+7;
const ll INF = 1e18;
#define all(v) v.begin(), v.end()



int main(){
  ll T;
  cin >> T;
  rep(w,T){
    ll N;
    cin >> N;
    vec A(N);
    rep(i,N){
      cin >> A.at(i);
    }
    string S;
    cin >> S;
    set<ll> B;
    B.insert(0);
    rep(i,N){
      set<ll> C;
      auto b=B.end();
      ll a=A.at(N-1-i);
      rep(j,(ll)B.size()){
        b--;
        a=min(a,a^*b);
      }
      if(S.at(N-1-i)=='0'){
        if(a!=0){
          B.insert(a);
        }
      }else{
        if(a!=0){
          B=C;
          break;
        }
      }
    }
    if(B.size()==0){
      cout << 1 << endl;
    }else{
      cout << 0 << endl;
    }
  }
        
   
}