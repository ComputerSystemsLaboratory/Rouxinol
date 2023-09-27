#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
const int M = 1e9 + 7;
int si[] = {-1, 0, 1, 0};
int sj[] = {0, -1, 0, 1};


int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<int>> r(n);
  vector<int> d(n,-1);
  rep(i,m) {
    int a,b;
    cin >> a >> b;
    a--; b--;
    r[a].push_back(b);
    r[b].push_back(a);
  }

  queue<int> q;
  q.push(0);

  while(!q.empty()){
    int k = q.front();
    q.pop();
    rep(i,r[k].size()) {
      if (d[r[k][i]] == -1){
        q.push(r[k][i]);
        d[r[k][i]] = k;
      }
    }
  }

  rep(i, d.size()-1) if(d[i+1] == -1){
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  rep(i,d.size()-1) cout << d[i+1] + 1 << endl;

  return 0;
}
