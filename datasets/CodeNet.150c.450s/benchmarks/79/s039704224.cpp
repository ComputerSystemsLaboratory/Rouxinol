#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
signed main() {
  int N, R;
  while (cin>>N>>R, N+R!=0) {
    vector<int> x;
    for (int i = 0; i < N; i++) x.push_back(i+1);
    for (int i = 0; i < R; i++) {
      int p, c; cin>>p>>c;
      p = N-p-c+1;
      for (int j = 0; j < c; j++) {
        x.push_back(x[p]);
        x.erase(x.begin()+p);
      }
    }
    cout << x.back() << endl;
  }
}

