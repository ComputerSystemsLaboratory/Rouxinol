#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <fstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
static const double EPS = 1e-5;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)

int main(void){
  int N,M;
  while(cin>>N>>M){
    if(N==0) break;
    vector<PII> times;
    REP(i,N){
      int D,P;
      cin>>D>>P;
      times.push_back(PII(P,D));
    }
    sort(times.begin(),times.end());
    reverse(times.begin(),times.end());
    int ans=0;
    REP(i,N){
      if(M>0){
        ans += max(0,times[i].second-M) * times[i].first;
        M-=times[i].second;
      }else{
        ans += times[i].second*times[i].first;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}