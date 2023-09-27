#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

#define CH(N,A,B) (A<=N&&N<B)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define RREP(i,a,b) for(int i=(b-1);a<=i;i--)

using namespace std;

int main() {

  while(1){
    int N, M, h[1505], w[1505];
    long long ans = 0;
    cin>>N>>M;
    if(N==0 && M==0) break;
    REP(i,0,N) cin>>h[i];
    REP(i,0,M) cin>>w[i];

    vector<long long> hv;
    REP(i,0,N){
      long long hrange = 0;
      REP(j,i,N){
        hrange += h[j];
        hv.push_back(hrange);
      }
    }

    set<long long> ws;
    map<long long , long long> wm;
    REP(i,0,M){
      long long wrange = 0;
      REP(j,i,M){
        wrange += w[j];
        if(ws.find(wrange) == ws.end()) {
          ws.insert(wrange);
          wm[wrange] = 1;
        }else wm[wrange]++;

      }
    }

    REP(i,0,hv.size()){
      if(ws.find(hv[i]) != ws.end()){
        ans += wm[hv[i]];
      }
    }

    cout<<ans<<endl;
  }

  return 0;
}