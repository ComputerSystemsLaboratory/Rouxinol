#include <bits/stdc++.h>

using namespace std;

#define REP(i,m) for(long long i=0; i<m; i++)
#define FOR(i,n,m) for(long long i=n; i<m; i++)
#define INF 1000000000
#define INFL 10000000000000000LL
#define ALL(v) v.begin(),v.end()
#define pb push_back
#define ll long long int
#define P pair<ll, ll>

int main() {
  while(true){
    int n;
    cin >> n;
    if(n == 0) return 0;
    ll ans = INF;
    REP(i, (int)pow(n, 0.335)+1){
      if(n < i*i*i) break;
      int j = (int)pow(n-i*i*i, 0.5);
      if(ans > i+j+(n-i*i*i-j*j)){
        ans = i+j+(n-i*i*i-j*j);
      }
    }
    cout << ans << endl;
  }
  return 0;
}

