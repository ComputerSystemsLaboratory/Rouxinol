#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<int(n);i++)
typedef pair<int,int> P;
#define fi first
#define se second
char maze[1000][1000];
int d[1000][1000];
int w,l,n,ans=0;
int sx,sy,ex,ey;
#define INF 100000
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int bfs(int times){//return partial ans, assign coordinate
	queue<P> que;
	forn(i,l) forn(j,w) d[i][j]=INF;
	que.push(P(sx,sy));
	d[sx][sy]=0;
	while(que.size()){
		P p = que.front(); que.pop();
		if(maze[p.fi][p.se]=='1'+times){
			sx=p.fi;
			sy = p.se;
			maze[p.fi][p.se] = '.';
			return d[sx][sy];
		}
		forn(i,4){
			int tx = p.fi+dx[i],ty=p.se+dy[i];
			if(tx>=0&&tx<l&&ty>=0&&ty<w&&maze[tx][ty]!='X'&&d[tx][ty]==INF) {
				d[tx][ty] = d[p.fi][p.se]+1;
				que.push(P(tx,ty));
			}
		}
	}
}
int main(){
	cin>>l>>w>>n;//l is x, w is y
	forn(i,l)
		forn(j,w){
		cin>>maze[i][j];
		if(maze[i][j]=='S'){
			sx = i;
			sy = j;
			maze[i][j]= '.';
		}
		}
	forn(i,n){
		ans+=bfs(i);
	}
	cout<<ans<<endl;
}

