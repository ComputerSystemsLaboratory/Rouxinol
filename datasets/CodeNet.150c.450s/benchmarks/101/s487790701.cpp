#include <bits/stdc++.h>
using namespace std;

int n, m, q;
vector<int> graph[100000];
vector<pair<int, int> > question;
int INF = -1;
// 未探索はINF
int group[100000];

void dfs(int i, int c) {
  group[i] = c;
  vector<int> v = graph[i];
  for (int j = 0; j < v.size(); j++) {
    if (group[v[j]] == INF) {
      dfs(v[j], c);
    }
  }
}

int main() {

  cin >> n >> m;

  // 配列を初期化
  for(int i = 0; i < n; i++) {
    group[i] = INF;
  }

  // 入力を受け取る
  for(int i = 0; i < m; i++) {
    int s, t;
    cin >> s >> t;
    graph[s].push_back(t);
    graph[t].push_back(s);
  }
  cin >> q;
  for (int i = 0; i < q; i++) {
    int s, t;
    cin >> s >> t;
    question.push_back(make_pair(s,t));
  }

  // 探索
  int id = 1;

  for (int i = 0; i < n; i++) {
    if (group[i] == INF) {
      dfs(i, ++id);
    }
  }

  // 探索結果を出力
  for (int i = 0; i < q; i++) {
    int s = question[i].first;
    int t = question[i].second;
    if (group[s] == group[t]) {
      cout << "yes" << endl;
    } else{
      cout << "no" << endl;
    }
  }

  return 0;

}
