#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N, M;
  int D[10000], P[10000]; 
  int Porg[10000];
  while(cin >> N >> M, N | M){
    for(int i=0; i < N; i++){
      int d, p; cin >> d >> p;
      D[i] = d; P[i] = p; Porg[i] = p;
    }
    int maxp_ind = 0;
    int cnt = 0;
    while(M > 0 && cnt <  N){
      maxp_ind = max_element(P, P+N) - P;
      P[maxp_ind] = 0;
      if(D[maxp_ind] <= M){
        M -= D[maxp_ind];
        D[maxp_ind] = 0;
      }else{
        D[maxp_ind] -= M;
        M = 0;
      }
      cnt++;
    }
    int ans = 0;
    for(int i=0; i < N; i++){
      ans += D[i] * Porg[i];
    }
    cout << ans << endl;
  }

  return 0;
}