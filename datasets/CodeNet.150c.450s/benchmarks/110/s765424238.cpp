#include <stdio.h>
#include <queue>
#include <algorithm>
#define INF 200000000
using namespace std;
typedef pair<int, int > P;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int h, w, n, ans, dis[10000][1000];
char s[10000][10000];
int bfs(int sx, int sy, int ex, int ey)
{
	for(int i = 1; i <= h; i++)
		for(int j = 1; j <= w; j++)dis[i][j] = INF;
	queue<P> q;
	q.push(P(sx, sy));
	dis[sx][sy] = 0;
	while (q.size()){
		P p = q.front();q.pop();
		if(p.first == ex&&p.second == ey)break;
		for(int i = 0; i < 4; i++){
			int xx = p.first + dx[i], yy = p.second + dy[i];
			if(xx >= 1&&xx <= h&&yy >= 1&& yy <= w&&dis[xx][yy] == INF&&s[xx][yy]!='X'){
				dis[xx][yy] = dis[p.first][p.second] + 1;
				q.push(P(xx, yy));
			} 
		}
	}
	return ans+=dis[ex][ey];
}
int main(){
	//freopen("1.in" ,"r", stdin);
	int sx, sy, ex, ey;
	scanf("%d %d %d", &h, &w, &n);
	for(int i = 1; i <= h; i++)
		scanf("%s", s[i] + 1);
	for (int i = 1; i <= h; i++)
		for(int j = 1; j <= w; j++)
			if(s[i][j] == 'S')sx = i, sy = j;
	for (int k = 1; k <= n; k++)
		for(int i = 1; i <= h; i++)
			for(int j = 1; j <= w; j++){
				if(s[i][j] == '1' + k - 1){
					ex = i, ey = j;
					bfs(sx, sy, ex, ey);
					sx = ex;sy = ey;
				}
			}
	printf("%d\n", ans);

}