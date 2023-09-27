#include <bits/stdc++.h>
using namespace std;
#define Rep(i,N) for(int i = 0; i < N; i++)
#define INF 1 << 28
#define S second
#define F first
typedef pair<int,int> Pi;

int mx[] = {1,0,-1,0};
int my[] = {0,1,0,-1};

int main()
{
  int H, W, N;
  int sx,sy;
  char mas[1005][1005];
  Pi point[10];
  cin >> H >> W >> N;
  Rep(i,H) Rep(j,W) {
    cin >> mas[i][j];
    if(mas[i][j] == 'S') {
      sx = j, sy = i;
    }
    if(mas[i][j] >= '1' && mas[i][j] <= '9') {
      point[mas[i][j] - '0'] = Pi(i,j);
    }
  }

  int sum = 0;
  for(int p = 1; p <= N; p++) {
    int mc[1005][1005];
    fill(mc[0],mc[1005],INF);
    queue<Pi>que;
    mc[sy][sx] = 0;
    que.push(Pi(sy,sx));
    while(!que.empty()) {
      int x = que.front().S;
      int y = que.front().F;
      que.pop();
      if(mas[y][x] == p + '0')break;
      Rep(i,4) {
	int nx = x + mx[i];
	int ny = y + my[i];
	if(nx >= 0 && ny >= 0 && nx < W && ny < H && mas[ny][nx] != 'X' && mc[ny][nx] == INF) {
	  mc[ny][nx] = mc[y][x] + 1;
	  que.push(Pi(ny,nx));
	}
      }
    }
    sum += mc[point[p].F][point[p].S];
    sy = point[p].F, sx = point[p].S;
  }
  cout << sum << endl;
  return 0;
}