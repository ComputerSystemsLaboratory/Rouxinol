#include <bits/stdc++.h>
using namespace std;
#define rep(i, k, n) for(int i = (int)(k);i < (int)(n);i++)
int main() {
  int N, M, a, b;cin >> N >> M;
  vector<int> v(N, -1);
  vector<vector<int>> w(N);
  queue<int> q;
  rep(i, 0, M) {
    cin >> a >> b;
    a--;b--;
    w[a].push_back(b);
    w[b].push_back(a);
  }
  q.push(0);
  while(q.size() != 0) {
    a = q.front();q.pop();
    for(auto na : w[a]) if(v[na] == -1) {
      v[na] = a+1;
      q.push(na);
    }
  }
  cout << "Yes" << endl;
  rep(i, 1, N) cout << v[i] << endl;
}