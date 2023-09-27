#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <iomanip>

#define ll long long int
#define pb push_back
#define mk make_pair
#define pq priority_queue

using namespace std;
typedef pair<int, int> P;
typedef pair<ll, int> Pl;
const int inf = 1e9;
const ll linf = 1LL << 50;

int h, w, n;
int sx, sy;
int c[1001][1001];
int x[10];
int y[10];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int used[1001][1001];

int dfs(int stx, int sty, int gx, int gy){
		queue<P> q;
		for(int i = 0; i < h; i++){
				for(int j = 0; j < w; j++)used[i][j] = -1;
		}
		used[stx][sty] = 0;
		q.push(mk(stx, sty));
		while(!q.empty()){
				P p = q.front(); q.pop();
				int xx = p.first;
				int yy = p.second;
				if(xx == gx && yy == gy){
						return used[gx][gy];
				}
				for(int i = 0; i < 4; i++){
						int nx = xx + dx[i];
						int ny = yy + dy[i];
						if(nx >= 0 && nx < h && ny >= 0 && ny < w && used[nx][ny] == -1 && c[nx][ny] == 0){
								used[nx][ny] = used[xx][yy] + 1;
								q.push(mk(nx, ny));
						}
				}
		}
		return -1;
}

int main(int argc, char const* argv[])
{
	cin >> h >> w >> n;
	for(int i = 0; i < h; i++){
			string s;
			cin >> s;
			for(int j = 0; j < w; j++){
					if(s[j] == '.')c[i][j] = 0;
					else if(s[j] == 'X')c[i][j] = -1;
					else if(s[j] == 'S'){
							sx = i;
							sy = j;
							c[i][j] = 0;
					}
					else{
							x[s[j] - '1'] = i;
							y[s[j] - '1'] = j;
							c[i][j] = 0;
					}
			}
	}
	int res = 0;
	for(int i = 0; i < n; i++){
			if(i == 0)res += dfs(sx, sy, x[0], y[0]);
			else res += dfs(x[i-1], y[i-1], x[i], y[i]);
	}
	cout << res << endl;
	return 0;
}

