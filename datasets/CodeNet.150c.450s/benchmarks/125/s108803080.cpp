#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#define MAX 10010
#define rep(i,p) for(int i=0;i<p;i++)
#define pb push_back
using namespace std;
int n,hoge,foo,visit_time=1;
int graph[MAX][MAX] = {0};
int d[MAX]; // ????????????
int f[MAX]; // ??£??\????????????????????????

void dfs (int cur) {
  // visiting cur
  d[cur] = visit_time;
  visit_time++;

  rep(dst,n) {
    if (graph[cur][dst] == 1 && d[dst] == -1) dfs(dst);
  }
  f[cur] = visit_time;
  visit_time++;
}

int main(){
  cin >> n;
  rep(i,n) {
    d[i] = -1;
    f[i] = -1;
  }
  rep(i,n) {
    cin >> hoge >> foo;
    rep(j,foo) {
      cin >> hoge;
      graph[i][hoge-1] = 1;
    }
  }
  rep(i,n) if (d[i] == -1) dfs(i);
  rep(i,n) cout << i+1 << " " << d[i] << " " << f[i] << endl;
  return 0;
}