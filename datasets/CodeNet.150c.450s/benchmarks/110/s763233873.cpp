//0558 ?????????
//bfs

#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<functional>
#include<iostream>
#include<queue>
#define INF 2100000000
using namespace std;
typedef pair<int,int> P;
int glid[1001][1001];
char put[1001][1001];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
char su[9]={'1','2','3','4','5','6','7','8','9'};
int main(void)
{
	int i,j,k,h,w,n,sum,x,y;
	int sx,sy;
	P pop_xy;
	queue<P> push_xy;
	cin>>h>>w>>n;
	for(i=0;i<h;i++) cin>>put[i];
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			glid[i][j]=INF;
		}
	}		
	for(i=0;i<h;i++) {
		for(j=0;j<w;j++) {
			if(put[i][j]=='S') {
				push_xy.push(P(i,j));
				glid[i][j]=0;
				break;
			}
		}
	}
	sum=0;
	for(i=0;i<n;i++) {
		if(i>0) {
			for(j=0;j<h;j++) {
				for(k=0;k<w;k++) glid[j][k]=INF;
			}		
			while(push_xy.size()!=0) push_xy.pop();
			push_xy.push(P(sy,sx));
			glid[sy][sx]=0;
		}
		while(push_xy.size()!=0) {
			pop_xy=push_xy.front();push_xy.pop();
			if(put[pop_xy.first][pop_xy.second]==su[i]) {
				sum+=glid[pop_xy.first][pop_xy.second];
				sy=pop_xy.first;sx=pop_xy.second;
				break;
			}
			for(j=0;j<4;j++) {
				y=dy[j]+pop_xy.first;
				x=dx[j]+pop_xy.second;
				if(y>=0 && y<h && x>=0 && x<w &&
				put[y][x]!='X' && glid[y][x]==INF) {
					push_xy.push(P(y,x));
					glid[y][x]=glid[pop_xy.first][pop_xy.second]+1;
				}
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
	