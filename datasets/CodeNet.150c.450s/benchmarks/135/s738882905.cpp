#include <bits/stdc++.h>

using namespace std;

int cnth[1500001], cntw[1500001];

int main()
{
  int N, M;
  while(cin >> N >> M, N || M){
    int h[2048], w[2048], hh[2048], ww[2048];
    hh[0] = 0; ww[0] = 0;
    for(int i = 0; i < N; i++) cin >> h[i], hh[i+1] = hh[i] + h[i];
    for(int i = 0; i < M; i++) cin >> w[i], ww[i+1] = ww[i] + w[i];
    memset(cnth, 0, sizeof(cnth));
    memset(cntw, 0, sizeof(cntw));
    for(int i = 0; i < N; i++){
      for(int j = i+1; j < N+1; j++) cnth[hh[j]-hh[i]]++;
    }
    for(int i = 0; i < M; i++){
      for(int j = i+1; j < M+1; j++) cntw[ww[j]-ww[i]]++;
    }
    int ans = 0;
    for(int i = 1; i <= 1500000; i++) ans += cnth[i] * cntw[i];
    cout << ans << endl;
  }
  return 0;
}