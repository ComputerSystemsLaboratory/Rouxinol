#include <iostream>
#include <algorithm>
#include <map>
#define REP(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

typedef pair<int,int> pii;
typedef pair<int,pii> ipii;

int main()
{
  while(1){
    int N, M;
    cin >> N >> M;
    if(N == 0 && M == 0) break;
    int h[N], w[M];
    REP(i,N)
      cin >> h[i];
    REP(i,M)
      cin >> w[i];
    map<int, pii> m;
    int dp[max(N,M)];
    REP(i,N){
      dp[i] = h[i];
      if(m.find(h[i]) != m.end()){
        m[h[i]].first++;
      }else{
        m.insert(ipii(h[i],pii(1,0)));
      }
    }
    for(int i = 1, x = N-1; i < N; i++, x--){
      REP(j,x){
        dp[j] += h[j+i];
        if(m.find(dp[j]) != m.end()){
          m[dp[j]].first++;
        }else{
          m.insert(ipii(dp[j],pii(1,0)));
        }
      }
    }
    REP(i,M){
      dp[i] = w[i];
      if(m.find(w[i]) != m.end()){
        m[w[i]].second++;
      }else{
        m.insert(ipii(w[i],pii(0,1)));
      }
    }
    for(int i = 1, x = M-1; i < M; i++, x--){
      REP(j,x){
        dp[j] += w[j+i];
        if(m.find(dp[j]) != m.end()){
          m[dp[j]].second++;
        }else{
          m.insert(ipii(dp[j],pii(0,1)));
        }
      }
    }
    int ans = 0;
    for(map<int, pii>::iterator p = m.begin(); p != m.end(); p++)
      ans += p->second.first * p->second.second;
    cout << ans << endl;
  }
}