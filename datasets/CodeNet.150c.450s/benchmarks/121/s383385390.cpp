#include <iostream>
#define REP(i,n) for(int i=0;i<(n);i++)
#define MARK 'X'
using namespace std;

int H, W;
char map[100][100], f;
const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

void dfs(int x, int y)
{
  map[x][y] = MARK;
  REP(i,4){
    int next_x = x+dx[i], next_y = y+dy[i];
    if(next_x < 0 || next_x >= H || next_y < 0 || next_y >= W || map[next_x][next_y] != f) continue;
    dfs(next_x,next_y);
  }
}

int main()
{
  while(1){
    cin >> H >> W;
    if(H == 0 && W == 0) break;
    int ans = 0;
    REP(i,H) REP(j,W) cin >> map[i][j];
    REP(i,H){
      REP(j,W){
        if(map[i][j] != MARK){
          f = map[i][j];
          dfs(i,j);
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
}