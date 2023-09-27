#include <bits/stdc++.h>
using namespace std;
int main(){
  while (1){
    int m, n_min, n_max;
    cin >> m >> n_min >> n_max;
    if (m == 0 && n_min == 0 && n_max == 0){
      break;
    }
    vector<int> P(m);
    for (int i = 0; i < m; i++){
      cin >> P[i];
    }
    int ans = 0;
    int mx = -1;
    for (int i = n_min; i <= n_max; i++){
      int tmp = P[i - 1] - P[i];
      if (tmp >= mx){
        mx = tmp;
        ans = i;
      }
    }
    cout << ans << endl;
  }
}
