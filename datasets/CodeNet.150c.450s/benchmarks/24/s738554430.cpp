#include <bits/stdc++.h>
using namespace std;

int main() {
  for(int N, M; cin >> N >> M && (N|M);) {
    vector<pair<int,int> > v;
    for(int i = 0; i < N; ++i) {
      int D, P;
      cin >> D >> P;
      v.push_back(make_pair(P, D));
    }
    sort(v.begin(), v.end(), greater<pair<int,int> >());
    int res = 0;
    for(int i = 0; i < v.size(); ++i) {
      if(M < v[i].second) {
        res += (v[i].second - M) * v[i].first;
        M = 0;        
      } else {
        M -= v[i].second;
      }
    }
    cout << res << endl;
  }
  return 0;
}