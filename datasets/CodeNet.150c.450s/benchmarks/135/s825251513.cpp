#include <bits/stdc++.h>

#define FOR(i,k,n)  for(int i = (k);i < (n);++i)
#define REP(i,n)    FOR(i,0,n)
#define ALL(x)      begin(x),end(x)

using namespace std;

using vecint = vector<int>;
using ll = int64_t;

int main() {
  while(1){
    int n,m;
    cin>>n>>m;
    if (!n) break;
    vecint h(n),w(m),s(n+1),t(m+1);
    REP(i,n) cin>>h[i];
    REP(i,m) cin>>w[i];
    partial_sum(ALL(h),begin(s)+1);
    partial_sum(ALL(w),begin(t)+1);
    vecint y,x;
    REP(i,n+1)REP(j,i) y.push_back(s[i]-s[j]);
    REP(i,m+1)REP(j,i) x.push_back(t[i]-t[j]);
    sort(ALL(x));
    ll count = 0;
    for (int d:y) {
      auto p = equal_range(ALL(x),d);
      count += distance(p.first, p.second);
    }
    cout << count << endl;
  }
  return 0;
}