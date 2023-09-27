#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

#define FOR(i,m,n) for(ll i=(m); (i)<(ll)(n); ++(i))
#define REP(i,n) FOR(i,0,n)
#define MAX 10000+1

void countingSort(const ll* const a, ll* const b, ll* const c, const ll k, const ll n){
  REP(i,k) c[i] = 0; // *(c+i) = 0でもいけた
  REP(i,n) ++c[a[i]]; // a+i != nullptrはだめだった
  FOR(i,1,k) c[i] += c[i-1];
  for(ll i=n-1; i>=0; --i) b[(c[a[i]]--)-1] = a[i];
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  ll n; cin >> n;
  ll a[n], b[n], c[MAX];
  REP(i,n) cin >> a[i];
  countingSort(a, b, c, MAX, n);
  REP(i,n) cout << b[i] << " \n"[i==n-1];
  return 0;
}
