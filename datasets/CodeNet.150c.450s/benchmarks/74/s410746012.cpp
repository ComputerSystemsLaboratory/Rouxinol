#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define INF 1 << 30

using namespace std;

int main()
{
  int n, m; cin >> n >> m;
  vector<int> c(m);
  vector<int> T(n+1,INF);
  T[0] = 0;
  REP(i,m) cin >> c[i];
  REP(i,m) FOR(j,c[i],n)
    T[j] = min(T[j],T[j-c[i]]+1);
  cout << T[n] << endl;
}