#include <iostream>
#include <queue>
#include <climits>
#define REP(i,n) for(int i=0;i<(n);i++)
using namespace std;

typedef pair<int,int> pii;

int main()
{
  int H, W, N;
  const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
  cin >> H >> W >> N;
  char map[H][W];
  int d[H][W], hp = 1, ans = 0;
  fill(d[0],d[H],INT_MAX);
  queue<pii> q;
  REP(i,H){
    REP(j,W){
      cin >> map[i][j];
      if(map[i][j] == 'S'){
        q.push({i,j});
        d[i][j] = 0;
      }
    }
  }
  while(1){
    pii p = q.front();
    q.pop();
    if(hp == map[p.first][p.second]-'0'){
      ans += d[p.first][p.second];
      hp++;
      fill(d[0],d[H],INT_MAX);
      d[p.first][p.second] = 0;
      while(!q.empty()) q.pop();
    }
    if(hp == N+1){
      cout << ans << endl;
      return 0;
    }
    REP(i,4){
      pii next_p = {p.first+dx[i],p.second+dy[i]};
      if(next_p.first < 0 || next_p.first >= H || next_p.second < 0 || next_p.second >= W || map[next_p.first][next_p.second] == 'X') continue;
      if(d[next_p.first][next_p.second] > d[p.first][p.second]+1){
        d[next_p.first][next_p.second] = d[p.first][p.second]+1;
        q.push(next_p);
      }
    }
  }
}