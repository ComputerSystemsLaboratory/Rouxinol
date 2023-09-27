#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <numeric>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back((a))
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<((x))<<endl
#define fi first
#define se second

#define INF 2147483600
#define long long long

int main(){
  int n,m;
  while(scanf("%d %d", &n, &m), n|m){
    vector<int> h(n), w(m);
    rep(i,n) scanf("%d", &h[i]);
    rep(i,m) scanf("%d", &w[i]);

    vector<int> l(n*(n+1)/2);
    int cnt=0;
    rep(i,n){
      int t = 0;
      repl(j,i,n){
        t += h[j];
        l[cnt++] = t;
      }
    }
    sort(all(l));

    int res=0;
    rep(i,m){
      int t=0;
      repl(j,i,m){
        t += w[j];
        res += upper_bound(all(l), t) - lower_bound(all(l), t);
      }
    }
    cout<<res<<endl;
  }

  return 0;
}