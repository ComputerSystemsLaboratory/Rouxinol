#include <bits/stdc++.h>
using namespace std;
#define MAX 1001001
#define NIL -1

/*
  疎なグラフ(連結成分が少ないグラフ)では、隣接行列を使うのはメモリefficientではない。
  ->隣接リストを用いて各ノードの関係を表す

  連結成分を求めるには、未訪問のノードを始点としてDFSを行う。
  この探索を行うごとに、各点に異なるIDを割り振ることで、どのグループに属するかを判定する。
*/

int n;
vector<int> G[MAX]; //頂点数がMAXまで格納できる隣接リスト(中身は配列)
int color[MAX]; //

void dfs_colorAssign(int start, int group_id) {
  stack<int> s;
  s.push(start);
  color[start] = group_id;

  while(!s.empty()) {
    int now = s.top(); s.pop();

    for (int i = 0; i < G[now].size(); i++) {
      int v = G[now][i];
      if (color[v] == NIL) {
        color[v] = group_id;
        s.push(v);
      }
    }
  }
}

void assign_color() {
  int id = 1;
  for (int i = 0; i < n; i++) color[i] = NIL; //color配列を初期化
  //未訪問の頂点はidがNILになる
  for (int i = 0; i < n; i++) {
    if (color[i] == NIL) dfs_colorAssign(i, id);
    id++;
  }
}

int main() {
  int s, t, m, q;

  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> s >> t;
    G[s].push_back(t); // 互いの隣接リストに相手を追加
    G[t].push_back(s);
  }

  assign_color();

  cin >> q;

  for (int i = 0; i < q; i++) {
    cin >> s >> t;
    if (color[s] == color[t]) cout << "yes" << endl;
    else cout << "no" << endl;
  }

  return 0;
}

