#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(),a.end()
#define pii pair<int, int>
#define ll long long
using namespace std; 

#define MAX 10
#define SIZE 1000
#define INF 1<<30

int H, W, N;
char sec[SIZE][SIZE+1];
int tsec[SIZE][SIZE+1];
int move_cnt = INF;
int all_move_cnt = 0;
int facy[10] = {};
int facx[10] = {};
int gy, gx;

struct state {
	int sy, sx, cnt;
	state() {}
	state(int _sy, int _sx, int _cnt) :
		sy(_sy), sx(_sx), cnt(_cnt) {}
};
queue<state> que;

void bfs()
{
	int dy[4] = {-1, 0, 1, 0};
	int dx[4] = {0, 1, 0, -1};
	rep(i,0,SIZE) rep(j,0,SIZE+1) tsec[i][j] = INF;

	while (!que.empty()) {
		state ts = que.front(); que.pop();
		// printf("sy=%d sx=%d cnt=%d\n",ts.sy,ts.sx,ts.cnt);
		if (ts.sy == gy && ts.sx == gx) {
			move_cnt = min(move_cnt, ts.cnt);
			break;
		}

		int ny, nx;
		rep(i, 0, 4) {
			ny = ts.sy + dy[i];
			nx = ts.sx + dx[i];
			if (ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
			if (sec[ny][nx] == 'X' || tsec[ny][nx] != INF) continue;
			state ns(ny, nx, ts.cnt + 1);
			tsec[ny][nx] = ts.cnt+1;
			que.push(ns);
		}
	// rep(i,0,H) { rep(j,0,W) tsec[i][j]>99? printf("99"):printf("%2d",tsec[i][j]); cout << endl;}
	}
}

void solve()
{
	// rep(i,0,N+1) printf("%d y=%d x=%d\n",i,facy[i],facx[i]);

	rep(i,0,N) {
		move_cnt = INF;
		while(!que.empty()) que.pop();
		state s(facy[i], facx[i], 0);
		que.push(s);
		gy = facy[i+1];
		gx = facx[i+1];
		// printf("\n bfs start !! \n");
		bfs();
		all_move_cnt += move_cnt;
	}

	cout << all_move_cnt << endl;
}

void input()
{
	cin >> H >> W >> N;
	rep(i,0,H) { 
		rep(j,0,W) {
			cin >> sec[i][j];
			if (sec[i][j] == 'S') { facy[0] = i; facx[0] = j; }
			if (sec[i][j] >= 49 && 57 >= sec[i][j]) {
				facy[sec[i][j]-48] = i;
				facx[sec[i][j]-48] = j;
			}
		}
	}
	solve();
}

int main(void)
{
	input();
	
	return 0;
}