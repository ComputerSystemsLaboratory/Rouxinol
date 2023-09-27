#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
const int HMAX=1000,WMAX=1000,INF=INT_MAX;
const int m[4][2]={{-1,0},{0,-1},{0,1},{1,0}}; 

char A[HMAX][WMAX+1];
int S[HMAX][WMAX];
deque<PII> Q;
int h,w,maxn;

void init()
{
	for(int i=0;i<h;i++)for(int j=0;j<w;j++)S[i][j]=INF;
}

int bfs(int sx,int sy)
{
	init();
	int now=1;
	S[sx][sy]=0;
	Q.push_back(make_pair(sx,sy));
	while(!Q.empty())
	{
		bool restart=false;
		int x=Q.front().first,y=Q.front().second;Q.pop_front();
		//printf("x=%d, y=%d, s=%d\n",x,y,S[x][y]);
		for(int i=0;i<4;i++)
		{
			int nx=x+m[i][0],ny=y+m[i][1],ns=S[x][y]+1;
			//printf("push: nx=%d ny=%d ns=%d\n",nx,ny,ns);
			if(nx<0||nx>=h)continue;
			if(ny<0||ny>=w)continue;
			if(A[nx][ny]=='X'||S[nx][ny]<=ns)continue;
			//printf("PASS\n");
			if(A[nx][ny]==(now+'0'))
			{
				//printf("end: nx=%d, ny=%d, ns=%d\n",nx,ny,ns);
				if(now>=maxn)return ns;
				++now;
				Q.clear();
				init();
				restart=true;
			}
			S[nx][ny]=ns;
			Q.push_back(make_pair(nx,ny));
			if(restart)break;
		}
	}
	//printf("NO MORE\n"); 
}

int main()
{
	int sx,sy;
	scanf("%d%d%d",&h,&w,&maxn);
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			scanf(" %c",&A[i][j]);
			if(A[i][j]=='S')sx=i,sy=j;
		}
	}
	printf("%d\n",bfs(sx,sy));
	return 0;
}