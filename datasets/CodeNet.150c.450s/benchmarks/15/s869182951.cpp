#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N; cin >> N;
  vector<int> S(N);
  for(int i = 0; i < N; i++) cin >> S[i];
  int M; cin >> M;
  vector<int> T(M);
  for(int i = 0; i < M; i++) cin >> T[i];

  int ans = 0;
  for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
      if(S[j] == T[i]){
        ans++;
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}