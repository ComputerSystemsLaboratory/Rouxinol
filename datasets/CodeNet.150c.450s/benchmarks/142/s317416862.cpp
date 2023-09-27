#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
//#define ll long long
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
#define rep(i, n) REP(i, 0, n)
#define rep_rev(i, n) for (int (i) = (int)(n) - 1 ; (i) >= 0 ; --(i))
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
#define all(x) (x).begin(),(x).end()
ll t1,t2,t3;
const ll mod = 998244353;
const int INF = 1e9;
const ll INFLONG = 1e18;

int main(){
  ll n,k;
  cin >> n >> k;
  vector<ll> vec(n);
  rep(i,n){
    cin >> vec[i];
  }
  rep(i,n-k){
    if(vec[k+i] > vec[i]){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}