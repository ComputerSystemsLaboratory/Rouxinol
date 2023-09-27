#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

vector<int> to[100005];

int main() {
    int n, m;
    cin >> n >> m;
    rep(i,m) {
      int a, b;
      cin >> a >> b;
      a--; b--;
      to[a].push_back(b);
      to[b].push_back(a);
    }
    vector<int> num(n, -1);
    queue<int> q;
    num[0] = 0;
    q.push(0);
    while (!q.empty()) {
      int i = q.front(); q.pop();
      for (int j : to[i]) {
        if (num[j] != -1) continue;
        num[j] = i;
        q.push(j);
      }
    }
    cout << "Yes" << endl;
    for (int i = 1; i < n; i++) cout << num[i]+1 << endl;
    return 0;
}