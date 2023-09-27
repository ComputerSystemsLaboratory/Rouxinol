#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define FOR(i,k,n) for(int i=(k); i<(int)n; ++i)
#define REP(i,n) FOR(i,0,n)
#define FORIT(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)

int main(){
    int N,M;
    while(cin>>N>>M,N){
      vector<int> h(N);
      vector<int> w(M);
      REP(i,N)cin>>h[i];
      REP(i,M)cin>>w[i];
      vector<int> sh(N+1);
      vector<int> sw(M+1);
      REP(i,N)sh[i+1] = sh[i] + h[i];
      REP(i,M)sw[i+1] = sw[i] + w[i];
      map<int,int> count;
      REP(i,N)FOR(j,i+1,N+1){
        count[sh[j]-sh[i]]++;
      }
      int ans = 0;
      REP(i,M)FOR(j,i+1,M+1){
        ans += count[sw[j]-sw[i]];
      }
      cout<<ans<<endl;
    }
  return 0;
}