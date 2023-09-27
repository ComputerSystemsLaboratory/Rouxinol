#include <bits/stdc++.h>
using namespace std;

const int di[] = {0,1,0,-1};
const int dj[] = {1,0,-1,0};

int main() {
  for(int N; cin >> N && N;) {
    vector<int> pi(N), pj(N);
    for(int i = 1; i < N; ++i) {
      int n, d;
      cin >> n >> d;
      pi[i] = pi[n] + di[d];
      pj[i] = pj[n] + dj[d];
    }
    cout << *max_element(pj.begin(), pj.end())
      - *min_element(pj.begin(), pj.end()) + 1
         << " "
         << *max_element(pi.begin(), pi.end())
      - *min_element(pi.begin(), pi.end()) + 1 << endl;
  }
  return 0;
}