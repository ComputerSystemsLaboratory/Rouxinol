#include <iostream>
#include <vector>
#include <string>

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
using namespace std; 

#define MAX 100

int H, W;
char in[MAX][MAX];
int cnt;
vector<int> ans;
int dx[4] = {0, 1, 0, -1}; //????????????
int dy[4] = {-1, 0, 1, 0};

void dfs(int x, int y, char c)
{
	in[y][x] = '.';
	rep(i,0,4) {
		int tx = x+dx[i];
		int ty = y+dy[i];
		if(tx < 0 || tx >= W) continue;
		if(ty < 0 || ty >= H) continue;
		if(in[ty][tx] == c) dfs(tx,ty,c);
	}
}

void solve()
{
	rep(i,0,H) rep(j,0,W) {
		if(in[i][j] == '.') continue;
		if(in[i][j] == '#') dfs(j,i,'#');
		else if (in[i][j] == '*') dfs(j,i,'*');
		else if (in[i][j] == '@') dfs(j,i,'@');
		cnt++;
	}
	ans.pb(cnt);
}

void input()
{
	while (1) {
		cin >> H >> W;
		if(H == 0 && W == 0) break;
		cnt = 0;
		rep(i, 0, H) rep(j, 0, W) {
			cin >> in[i][j];
		}
		solve();
	}
	//rep(i,0,H) { rep(j,0,W) cout << in[i][j]; cout << endl; }
}

int main(void)
{
	input();
	rep(i,0,ans.size()) cout << ans[i] << endl;
	return 0;
}