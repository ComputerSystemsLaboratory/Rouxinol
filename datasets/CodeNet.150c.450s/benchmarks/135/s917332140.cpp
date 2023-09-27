#include <bits/stdc++.h>
using namespace std;
int main(){
  while (1){
    int N, M;
    cin >> N >> M;
    if (N == 0 && M == 0){
      break;
    }
    vector<int> h(N);
    for (int i = 0; i < N; i++){
      cin >> h[i];
    }
    vector<int> w(M);
    for (int i = 0; i < M; i++){
      cin >> w[i];
    }
    vector<int> S1(N + 1);
    S1[0] = 0;
    for (int i = 0; i < N; i++){
      S1[i + 1] = S1[i] + h[i];
    }
    vector<int> S2(M + 1);
    S2[0] = 0;
    for (int i = 0; i < M; i++){
      S2[i + 1] = S2[i] + w[i];
    }
    map<int, int> mp;
    for (int i = 0; i < N; i++){
      for (int j = i + 1; j <= N; j++){
        mp[S1[j] - S1[i]]++;
      }
    }
    long long ans = 0;
    for (int i = 0; i < M; i++){
      for (int j = i + 1; j <= M; j++){
        ans += mp[S2[j] - S2[i]];
      }
    }
    cout << ans << endl;
  }
}
