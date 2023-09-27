#include <iostream>
#include <algorithm>
using namespace std;

int A[20], n, q, k;
int dp[21][2001];

void init(int k){
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= k; j++){
      dp[i][j] = -200;
    }
  }
}

bool Comb(int i, int m){
  if(dp[i][m] >= 0) return dp[i][m];
  if(m == 0) return true;
  if(i == n) return false;
  return dp[i][m] = Comb(i + 1, m - A[i]) || Comb(i + 1, m);
}

int main(void){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> A[i];
  }

  cin >> q;
  for(int i = 0; i < q; i++){
    cin >> k;
    init(k);
    if(Comb(0, k)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}