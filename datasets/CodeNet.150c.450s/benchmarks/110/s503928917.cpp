#include <iostream>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <string>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define fi first
#define se second
static const int INF = 1e9;
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
string board[1001];
int d[1001][1001];
int h, w, n;
pair<int, int> point[10];//fi=y se=x
int ans = 0;
bool flag;
//???????????¢?´¢
void bfs(void){
	rep(i, n){//??????????????¨??´?????????
		int starty = point[i].fi, startx = point[i].se;//start
		int endy = point[i + 1].fi, endx = point[i + 1].se;//end
		queue<pair<int, int> > q;
		q.push(make_pair(starty, startx));
		rep(i, h) rep(j, w) d[i][j] = INF;
		d[starty][startx] = 0;
		flag = false;
		while(!q.empty()){
			pair<int, int> now;
			now = q.front(); q.pop();
			rep(j, 4){
				int y = now.fi + dy[j];
				int x = now.se + dx[j];
				if(y < 0 || h <= y || x < 0 || w <= x) continue;
				if(d[y][x] == INF && board[y][x] != 'X'){
					d[y][x] = d[now.fi][now.se] + 1;
					q.push(make_pair(y, x));
				}
				if(y == endy && x == endx){
					flag = true;
					ans += d[y][x];
					break;
				}
			}
			if(flag == true) break;
		}
	}
	return;
}

int main(void){
	cin >> h >> w >> n;
	rep(i, h){
		cin >> board[i];
	}

	rep(i, h) rep(j, w){
		if(board[i][j] == 'S'){
			point[0].fi = i; point[0].se = j;
		}else if ('1' <= board[i][j] && board[i][j] <= '9'){
			int tmp = board[i][j] - '0';
			point[tmp].fi = i; point[tmp].se = j;
		}
	}
	bfs();
	cout << ans << endl;
	return 0;
}