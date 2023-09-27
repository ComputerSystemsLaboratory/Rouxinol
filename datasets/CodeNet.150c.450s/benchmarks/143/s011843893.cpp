#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define rep2(i, a, n) for(ll i = a; i < (ll)(n); i++)
#define memi cout << endl
#define kono(n) cout << fixed << setprecision(n)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define hina cout << ' '
#define in(n) cin >> n
#define in2(n, m) cin >> n >> m
#define in3(n, m, l) cin >> n >> m >> l
#define out(n) cout << n
const ll mei = (ll)1e9 + 7;

int main(){
  ll n, q, p;
  p = 0;
  in(n);
  vector<ll> a(n), b(100009, 0);
  rep(i, n){
    in(a[i]);
    b[a[i]]++;
    p += a[i];
  }
  in(q);
  ll d, c;
  rep(i, q){
    in2(d, c);
    p = p + (c - d) * b[d];
    b[c] += b[d];
    b[d] = 0;
    out(p);
    memi;
  }
}