#include <bits/stdc++.h>
typedef long long LL;
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define chmin(a,b)  a=min(a,b);

using namespace std;
int main(void)
{
  vector<int> oddp;
  oddp.assign(2048576,33554432);
  oddp[0]=0;
  vector<int> natp;
  natp.assign(2048576,33554432);
  natp[0]=0;
  for(int d=0;d<200;++d){
    for(int i=0;i<1048576;++i){
      if(i+d*(d+1)*(d+2)/6>1048576) break;
      chmin(natp[i+d*(d+1)*(d+2)/6],natp[i]+1);
      if(d*(d+1)*(d+2)/6%2) chmin(oddp[i+d*(d+1)*(d+2)/6],oddp[i]+1);
    }
  }
  for(;;){
    int n;
    cin >> n;
    if(!n) return 0;
    cout << natp[n] << ' ' << oddp[n] << endl;
  }
}