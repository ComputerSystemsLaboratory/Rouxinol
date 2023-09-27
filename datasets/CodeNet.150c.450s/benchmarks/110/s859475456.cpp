#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
const int INF = 100000000;
typedef pair<int,int> P;

struct something{
	int x;
	int y;
}	ord[12];
char maze[1005][1005];
int h,w,n;


int d[1005][1005];

int dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1};
int bfs(something s,something g){
	queue<P> que;
	for (int i=1;i<=h;i++)
		for (int j=0;j<=w;j++) d[i][j] = INF;
		que.push(P(s.x,s.y));
		d[s.x][s.y] = 0;
		while (que.size()){
			P p=que.front();que.pop();
			if (p.first == g.x && p.second == g.y) break;
			for (int i=0;i<4;i++){
				int nx=p.first + dx[i],ny=p.second + dy[i];
				if (1<=nx && nx<=h && 1<=ny && ny<=w && maze[nx][ny]!='X' && d[nx][ny] == INF){
					que.push(P(nx,ny));
					d[nx][ny] = d[p.first][p.second] + 1;
				}
			}
		}
	return d[g.x][g.y];
}

int main(){
	cin>>h>>w>>n;
	int ans = 0;
	for (int i=1;i<=h;i++)
		for (int j=1;j<=w;j++)	{
			cin>>maze[i][j];
			if (maze[i][j] - 48>= 1 && maze[i][j] - 48 <= 9 ){
				ord[maze[i][j] - 48].x = i;
				ord[maze[i][j] - 48].y = j;
			}else if (maze[i][j] == 'S'){
			 	ord[0].x = i;
			 	ord[0].y = j;
			}
		}
	for (int i=0;i<n;i++){
		ans += bfs(ord[i],ord[i+1]);
	}
	cout<<ans<<endl;
	return 0;
}