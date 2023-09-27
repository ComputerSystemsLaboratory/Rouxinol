#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)

typedef pair<int, int> Pi;
#define fi first
#define se second

int mx[] = {1, 0, -1, 0};
int my[] = {0, 1, 0, -1};

signed main()
{
  int W, H;
  char mas[25][25];
  
  
  
  while(cin >> W >> H, W || H) {
    queue < Pi > que;
    int ans = 1;
    Rep(i, H) Rep(j, W) {
      cin >> mas[i][j];
      if(mas[i][j] == '@') {
	que.push(Pi(i, j));
	mas[i][j] = '#';
      }
      
    }

    while(!que.empty()) {
      Pi d = que.front(); que.pop();
      int y = d.fi, x = d.se;

      Rep(i, 4) {
	int ny = y + my[i], nx = x + mx[i];
	if(ny < 0 || nx < 0 || ny >= H || nx >= W || mas[ny][nx] == '#') continue;
	ans++, mas[ny][nx] = '#';
	que.push(Pi(ny, nx));
      }
    }

    cout << ans << endl;
  }
  
  return 0;
}