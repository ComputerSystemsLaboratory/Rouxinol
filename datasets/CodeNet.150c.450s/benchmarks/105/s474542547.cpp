#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(n); ++i)
#define rrep(i,n) for(int i=1; i<=(n); ++i)
#define drep(i,n) for(int i=(n)-1; i>=0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define fi first
#define se second
#define v(T) vector<T>
#define imposs {cout<<"-1\n";return 0;}
#define LL_MAX LLONG_MAX
#define LL_MIN LLONG_MIN

typedef unsigned int uint;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef set<int> si;
typedef multiset<int> msi;
template<typename T>string join(const v(T)&v)
{stringstream s;rep(i,sz(v))s<<' '<<v[i];return s.str().substr(1);}
template<typename T>inline ostream& operator<<(ostream&o,const v(T)&v)
{if(sz(v))o<<join(v);return o;}

int x_d(ll x) {
  int d = 0;
  while (x) {
    ++d;
    x >>= 1;
  }
  return d;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;
  rep(t, T) {
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N) cin >> A[i];
    string S;
    cin >> S;

    vector<ll> ch(62);

    bool ok = true;
    drep(i,N) {
      ll AA = A[i];
      while (AA != 0) {
        int d = x_d(AA);
        if (ch[d] == 0) {
          if (S[i] == '0') {
            ch[d] = AA;
          } else {
            ok = false;
          }
          break;
        }
        AA = AA ^ ch[d];
      }
    }
    cout << (ok ? '0' : '1') << '\n';
  }
  return 0;
}
