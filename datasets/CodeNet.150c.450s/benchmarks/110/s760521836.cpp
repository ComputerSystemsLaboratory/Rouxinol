#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

const int INF = 1<<30;
const int maxn = 1000+10;

int w,h,n;
char mp[maxn][maxn];
int d[maxn][maxn];

int dir[4][2] = {
	{-1,0},
	{1,0},
	{0,1},
	{0,-1},
};

int fac[10][2];

int bfs(int sx,int sy,int gx,int gy){
	memset(d,-1,sizeof(d));

	queue<pair<int,int> > Q;
	Q.push(make_pair(sx,sy));
	d[sx][sy] = 0;
	while(!Q.empty()){
		pair<int,int> p = Q.front(); Q.pop();
		if(p.first==gx && p.second==gy) break;

		for(int i=0; i<4; i++){
			int tx = p.first + dir[i][0];
			int ty = p.second + dir[i][1];
			if(tx>=0 && tx<h && ty>=0 && ty<w && mp[tx][ty]!='X' && d[tx][ty]==-1){
				Q.push(make_pair(tx,ty));
				d[tx][ty] = d[p.first][p.second] + 1;
			}
		}
	}

	return d[gx][gy];
}

int main(){
	scanf("%d%d%d",&h,&w,&n);	
	for(int i=0; i<h; i++)
		for(int j=0; j<w; j++)
			cin >> mp[i][j];

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(mp[i][j] == 'S'){
				fac[0][0] = i;
				fac[0][1] = j;
				mp[i][j] = '.';
			}else if(isdigit(mp[i][j])){
				int index = mp[i][j] - '0';
				fac[index][0] = i;
				fac[index][1] = j;
			}
		}
	}

	int step = 0;
	for(int i=0; i<n; i++){
		step += bfs(fac[i][0],fac[i][1],fac[i+1][0],fac[i+1][1]);
	}

	printf("%d\n",step);
}