#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF = 1001001001;
typedef unsigned long long ll;

ll power(ll x, ll y, ll m){
  ll res = 1;
  if(y == 0) return res;
  ll p = power(x, y/2, m);
  if(y%2 == 0){
    res *= p * p;
    res %= m;
  }
  else{
    res *= p * p;
    res %= m;
    res *= x;
    res %= m;
  }
  return res;
}


int main(){
  ll m, n;
  cin >> m >> n;

  cout << power(m, n, 1000000007) << endl;

  return 0;

}



