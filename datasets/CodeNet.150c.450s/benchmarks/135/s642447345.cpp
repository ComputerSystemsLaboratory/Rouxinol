#include <bits/stdc++.h>
typedef long long LL;
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

using namespace std;
int main(void)
{
  for(;;){
    int n,m;
    cin >> n >> m;
    if(!n&&!m) return 0;
    vector<int> hi;
    hi.assign(2048576,0);
    vector<int> wi;
    wi.assign(2048576,0);
    vector<int> h;
    h.resize(n+1);
    h[0]=0;
    REP(i,n) cin >> h[i+1];
    vector<int> w;
    w.resize(m+1);
    w[0]=0;
    REP(i,m) cin >> w[i+1];
    REP(i,n) h[i+1]+=h[i];
    REP(i,m) w[i+1]+=w[i];
    REP(i,n+1) REP(j,i)
      hi[h[i]-h[j]]++;
    REP(i,m+1) REP(j,i)
      wi[w[i]-w[j]]++;
    int answer=0;
    REP(i,2048576) answer+=hi[i]*wi[i];
    cout << answer << endl;
  }
}