#include <bits/stdc++.h>
using namespace std;

int main(void){
  int m, nmin, nmax;
  while(cin >> m >> nmin >> nmax, m | nmin | nmax){
    vector<int> P(m);
    for(int i = 0; i < m; i++) cin >> P[i];
    sort(P.begin(), P.end(), greater<int>());
    int ans = 0;
    int gap = 0;
    for(int n = nmin; n <= nmax; n++){
      if(gap <= P[n-1] - P[n]){
          gap = P[n-1] - P[n];
          ans = n;
      }
    }
    cout << ans << endl;
  }
}