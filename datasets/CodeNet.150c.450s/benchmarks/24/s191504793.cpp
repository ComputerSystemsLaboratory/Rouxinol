#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, M;
  while(cin >> N >> M, N || M){
    int D[10001] = {0}, P[10001] = {0};
    long long sum = 0;
    for(int i = 0; i < N; i++) cin >> D[i] >> P[i], sum += D[i]*P[i];
    while(M > 0){
      int idx = max_element(P, P + N)  - P;
      if(P[idx] == -1) break;
      sum -= min(M, D[idx])*P[idx];
      M -= D[idx];
      P[idx] = -1;
    }
    cout << sum << endl;
  }
  return 0;
}