#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;
string char_to_string(char val) {
  return string(1, val);
}
int char_to_int(char val) {
  return val - '0';
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template<class T> inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
int vector_finder(std::vector<ll> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}

int main() {
  int N, M; cin >> N >> M;
  vector<vector<int>> tree(N + 1);
  REP(i, M) {
    int A, B; cin >> A >> B;
    tree[A].push_back(B);
    tree[B].push_back(A);
  }
  vector<int> ans(N + 1, 0);
  queue<int> q; q.push(1);
  while(!q.empty()) {
    int tmp = q.front(); q.pop();
    for(int i = 0; i < tree[tmp].size(); ++i) {
      if(ans[tree[tmp][i]] != 0) continue;
      ans[tree[tmp][i]] = tmp;
      q.push(tree[tmp][i]);
    }
  }
  cout << "Yes" << endl;
  for(int i = 2; i <= N; ++i) {
    cout << ans[i] << endl;
  }
}