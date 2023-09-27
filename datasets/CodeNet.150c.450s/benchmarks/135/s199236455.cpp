#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
  int n, m;
  while(cin >> n >> m, n != 0){
    vector<int> h(n), w(m);
    for(int i = 0; i < n ; i++){
      cin >> h[i];
    }
    for(int i = 0; i < m ; i++){
      cin >> w[i];
    }
    vector<int> hs(1500 * 1000 + 10, 0);
    for(int i = 0; i < n ; i++){
      int s = 0;
      for(int j = i ; j < n ; j++){
        s += h[j];
        hs[s]++;
      }
    }
    int res = 0;
    for(int i = 0; i < m ; i++){
      int s = 0;
      for(int j = i ; j < m ; j++){
        s += w[j];
        res += hs[s];
      }
    }
    cout << res << endl;
  }
}