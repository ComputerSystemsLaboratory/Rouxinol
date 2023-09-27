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
int n,hoge,foo;
int graph[MAX][MAX] = {0};
int D[MAX] = {-1};
void bfs (int src) {
  queue<int> Q;
  Q.push(src);
  rep(i,MAX) D[i] = -1;
  D[src] = 0;
  while (! Q.empty()) {
    int cur = Q.front();
    Q.pop();
    // cout << "visiting " << cur << " " << D[cur] << endl;
    for (int dst = 1; dst <= n; dst++) {
      if (graph[cur][dst] == 1 && D[dst] == -1) {
        D[dst] = D[cur] + 1;
        Q.push(dst);
      }
    }
  }
}
int main(){
  cin >> n;
  rep(i,n) {
    cin >> hoge >> foo;
    rep(j,foo) {
      cin >> hoge;
      graph[i+1][hoge] = 1;
    }
  }
  bfs(1);
  rep(i,n) cout << i+1 << " " << D[i+1] << endl;
  return 0;
}