#include<stdio.h>
#include<string.h>
#include<queue>
#include<algorithm>
#define MAX_N 1002
using namespace std;
struct node{int x,y;};
char _map[MAX_N][MAX_N];
int dp[MAX_N][MAX_N];
int ox[]={0,0,1,-1};
int oy[]={1,-1,0,0};
int S_x,S_y;
int h,w,cnt;

node make_node(int x,int y){
	node t;
	t.x=x,t.y=y;
	return t;
}
void solve(){
	queue<node> que;
	int step=0;
	
	for(int i=1;i<=cnt;i++){
		que.push(make_node(S_x,S_y));
		_map[S_x][S_y]='.';
		memset(dp,-1,sizeof(dp));
		dp[S_x][S_y]=step;
		while(!que.empty()){
			node t=que.front();que.pop();
			if(_map[t.x][t.y]=='0'+i){
				step=dp[t.x][t.y];
				S_x=t.x,S_y=t.y;
				break;
			}
			for(int j=0;j<4;j++){
				int x=t.x+ox[j];
				int y=t.y+oy[j];
				if(0<=x&&x<h&&0<=y&&y<w&&_map[x][y]!='X'&&dp[x][y]==-1){
					que.push(make_node(x,y));
					dp[x][y]=dp[t.x][t.y]+1;
				}
			}
		}
		while(!que.empty()) que.pop();
	}
	
	printf("%d\n",step);
}

int main()
{
	while(scanf("%d%d%d",&h,&w,&cnt)!=EOF){
		for(int i=0;i<h;i++)
			scanf("%s",_map[i]);
		for(int j=0;j<h;j++)
			for(int k=0;k<w;k++)
				if(_map[j][k]=='S')
					S_x=j,S_y=k,j=h,k=w;
		solve();
	}
	return 0;
}