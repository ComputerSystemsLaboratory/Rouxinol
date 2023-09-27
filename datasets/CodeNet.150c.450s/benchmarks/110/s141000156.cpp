/*Lucky_Glass*/
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
const int MAXN=1000;
const int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
struct QUEUE{
	int x,y,dep;
	QUEUE(){}
	QUEUE(int _x,int _y,int _dep){x=_x;y=_y;dep=_dep;}
};
int r,c,n;
int goal[10][2];
bool vis[MAXN+5][MAXN+5];
char maz[MAXN+5][MAXN+5];
int BFS(int *beg,int cnt){
	memset(vis,false,sizeof vis);
	queue<QUEUE> que;
	que.push(QUEUE(beg[0],beg[1],0));
	while(!que.empty())
	{
		QUEUE pre=que.front();que.pop();
		for(int i=0;i<4;i++)
		{
			int X=pre.x+dir[i][0],Y=pre.y+dir[i][1],depth=pre.dep+1;
			if(X<1 || X>r || Y<1 || Y>c || maz[X][Y]=='X' || vis[X][Y]) continue;
			vis[X][Y]=true;
			if(X==goal[cnt][0] && Y==goal[cnt][1])
				return depth;
			que.push(QUEUE(X,Y,depth));
		}
	}
	return -1;
}
int main(){
	scanf("%d%d%d",&r,&c,&n);
	for(int i=1;i<=r;i++)
	{
		scanf("%s",maz[i]+1);
		for(int j=1;j<=c;j++)
		{
			if('1'<=maz[i][j] && maz[i][j]<='9')
				goal[maz[i][j]-'0'][0]=i,
				goal[maz[i][j]-'0'][1]=j,
				maz[i][j]='.';
			if(maz[i][j]=='S')
				goal[0][0]=i,
				goal[0][1]=j,
				maz[i][j]='.';
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
		ans+=BFS(goal[i-1],i);
	printf("%d\n",ans);
	return 0;
}//
