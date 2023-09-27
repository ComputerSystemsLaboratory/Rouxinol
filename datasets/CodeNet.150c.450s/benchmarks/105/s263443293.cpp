#include <bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
//using namespace atcoder;
using ll = long long;
using ld = long double;

#define fi first
#define se second
#define m_p make_pair
#define p_b push_back
#define e_b emplace_back
#define all(x) (x).begin(),(x).end()
#define uniq(x) ((x).erase(unique(all(x)),(x).end()))
#define sz(x) ((int)(x).size())

#define REP(i,m,n) for(int i=(int)(m);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)

#ifdef LOCAL//compile with -DLOCAL
#define debug(x) cerr<<"LINE"<<__LINE__<<" : "<<#x<<" = "<<(x)<<endl
#define debug_vec(x) cerr<<"LINE"<<__LINE__<<" : "<<#x<<" = ";\
  rep(i,sz(x)){cerr<<x[i]<<" ";}cerr<<endl
#define debug_mat(x) cerr<<"LINE"<<__LINE__<<" : "<<#x<<" = "<<endl;\
  rep(i,sz(x)){rep(j,sz(x[i])){cerr<<x[i][j]<<" ";}cerr<<endl;}cerr<<endl
#else
#define debug(x) void(0)
#define debug_vec(x) void(0)
#define debug_mat(x) void(0)
#endif

template<class T> bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<class T> bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}

void calc(){
  int N;
  cin >> N;
  vector<ll> A(N);
  rep(i,N)  cin >> A.at(i);
  string S;
  cin >> S;
  reverse(all(A));
  reverse(all(S));

  vector<ll> base;
  base.p_b(0);
  rep(i,N){
    ll tmp=A.at(i);
    rep(j,sz(base)) chmin(tmp,tmp^base.at(j));
    if(S.at(i)=='0'){
      base.p_b(tmp);
    }
    else if(S.at(i)=='1'){
      bool flag=false;
      rep(j,sz(base)){
        if(base.at(j)==tmp) flag=true;
      }
      if(!flag){
        cout << 1 << endl;
        return;
      }
    }
  }
  cout << 0 << endl;
  return;
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  int T;
  cin >> T;

  rep(_,T)  calc();

  return 0;
}