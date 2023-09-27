#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <queue>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int bfs(vector<string>& t, int c,int h, int w) {
  int si = 0, sj = 0;
  int ti = 0, tj = 0;
  REP(i,h)REP(j,w){
    if(t[i][j] == c + '0'){
      si = i;
      sj = j;
    }
    if(t[i][j] == c + '1'){
      ti = i;
      tj = j;
    }
  }
  vector<vector<int>> vis(h,vector<int>(w,1000000000));
  vis[si][sj] = 0;
  queue<pair<int,int>> q;
  q.push(make_pair(si,sj));
  while(!q.empty()) {
    auto p = q.front();
    q.pop();
    int i = p.first;
    int j = p.second;
    int di[4] = {1,0,-1,0};
    int dj[4] = {0,1,0,-1};
    REP(k,4){
      int ni=i+di[k];
      int nj=j+dj[k];
      if(ni<0||nj<0||ni>=h||nj>=w) continue;
      if(t[ni][nj] == 'X') continue;
      if(vis[ni][nj] > vis[i][j] + 1) {
        vis[ni][nj] = vis[i][j] + 1;
        q.push(make_pair(ni,nj));
      }
    }
  }
  return vis[ti][tj];
}

int main() {
  int h,w,n;
  cin >> h >> w >> n;
  vector<string> t(h);
  REP(i,h) cin >> t[i];
  int sum = 0;
  REP(i,h)REP(j,w)
    if(t[i][j] == 'S')
      t[i][j] = '0';
  REP(i,n) {
    sum += bfs(t,i,h,w);
  }
  cout << sum << endl;
  return 0;
}