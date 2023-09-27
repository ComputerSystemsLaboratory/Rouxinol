#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 1; i < (int)(n); i++)
#define intll int long long
const int INF = 1e9;
const int MOD = 1e9 + 7;

int main() {
  int n ;
  cin >> n ; 
  vector<int> v(n+1) ;
  
  rep(i,105){
    rep(j,105){
      rep(k,105){
        int now = i*i + j*j + k*k + i*j + j*k + k*i ;
        if( now <= n ) v.at(now) ++  ;
      }
    }
  }
  
  rep(i,n+1) cout << v.at(i) <<endl ;


}
