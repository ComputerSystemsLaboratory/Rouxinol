// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C
// stackのパターン
// 実習資料では「srcの訪問時刻は0」となっているが、題意は1である。

#include <iostream>
#include <cstdio>
#include <stack> // 入れたものから出していく引っ越しトラック型の構造。
using namespace std;

int G[110][110];
int n;
int u, k, v;

void make_matrix() {
  fill(&G[0][0], &G[0][0]+110*110, 0);
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d%d", &u, &k);
    u--;
    for (int j=0; j<k; j++) {
      scanf("%d", &v);
      v--;
      G[u][v] = 1;
    }
  }
}

int timer; // timeだとエラーが出たので。
int d[110]; // 訪問時刻。ナマの数字を入れる(indexを-1処理しない)。
int f[110]; // 終了時刻。ナマの数字を入れる。
int parent[110]; // 訪問する原因となった数字を入れる。ナマの数字を入れる。

void init() {
  timer = 1;
  fill(d, d+110, -1);
  fill(f, f+110, -1);
  fill(parent, parent+110, -1);
}

void dfs(int src) {
  // cerr << "dfs root is " << src << endl;
  stack<int> S; // todo訪問先
  S.push(src);
  while (! S.empty()) {
    int cur = S.top(); // 一番最近入れた数字を訪問しようとする。
    S.pop();
    if (d[cur] != -1) { // 過去訪問した場合は、訪問しない。
      continue;
    }
    d[cur] = timer;
    timer++;
    // cerr << "visiting " << cur << " at the time " << d[cur] << endl;
    for (int i=n; i>=1; i--) { // 節点i。逆順に入れていくことに注意！
      if (G[cur-1][i-1] == 1 && d[i] == -1) {
	S.push(i);
	// cerr << "pushing " << i << endl; 
	parent[i] = cur;
        // cerr << "parent[" << i << "] is " << cur << endl;
      }
    }
    int hantei = cur;
    int modoru = -1;
    while (! S.empty() && d[S.top()] != -1) {
      S.pop();
    }
    if (! S.empty()) {
      modoru = parent[S.top()];
    }
    while (hantei != modoru) {
      // cerr << "hantei " << hantei << " modoru " << modoru << endl; 
      f[hantei] = timer;
      timer++;
      hantei = parent[hantei];
      // cerr << "hantei " << hantei << endl;
    }
  }
}

int main() {
  make_matrix();
  init();
  for (int i=1; i<=n; i++) { // 1から連結していない連結成分にも番号をふる。
    if (d[i] == -1) {
      dfs(i);
    }
  }
  for (int i=1; i<=n; i++) {
    printf("%d %d %d\n", i, d[i], f[i]);
  }
}