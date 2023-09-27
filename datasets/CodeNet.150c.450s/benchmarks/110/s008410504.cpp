#include<iostream>
#include<queue>
#include<cstring>
#include<cstdio>
#include<algorithm>
char map[1100][1100];
bool flag[1100][1100];
int m,n,k,ans=0,dir[4][2]={{-1,0},{0,-1},{0,1},{1,0}};
using namespace std;

struct point{
	int x,y,step;
}temp,flg[15];

int bfs(point a,point b)
{
	queue<point> que;
	temp=a;temp.step=0;
	que.push(temp); 
	flag[temp.x][temp.y]=true;
	while(!que.empty()){
		for(int i=0;i<4;i++){
			temp=que.front();
			int nxtx=temp.x+dir[i][0],nxty=temp.y+dir[i][1];
			if(nxtx<0||nxty<0||nxtx>=m||nxty>=n) continue;
	        if(flag[nxtx][nxty]||map[nxtx][nxty]=='X') continue;
			flag[nxtx][nxty]=true;
			temp.x+=dir[i][0],temp.y+=dir[i][1];temp.step++;	
			que.push(temp);
			if(nxtx==b.x&&nxty==b.y)
			   return temp.step;	
		}
		que.pop();
	}
	return -1;
}
int main()
{
	scanf("%d%d%d",&m,&n,&k);
	for(int i=0;i<m;i++){
		getchar();
		for(int j=0;j<n;j++){
			scanf("%c",&map[i][j]);
			if(map[i][j]=='S') flg[0].x=i,flg[0].y=j;
			else if(map[i][j]<='9'&&map[i][j]>='1') flg[map[i][j]-'0'].x=i,flg[map[i][j]-'0'].y=j;
		}
	}
	for(int i=0;i<k;i++){
	    memset(flag,false,sizeof(flag));
	    ans+=bfs(flg[i],flg[i+1]);
	}
	cout << ans << endl;
 } 
