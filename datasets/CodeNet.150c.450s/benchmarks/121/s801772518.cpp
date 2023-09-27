/*
*
*/
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#define CLR(ARR,NUM) memset(ARR,NUM,sizeof(ARR))
#define GETNUM(NUM) scanf("%d",&NUM)
#define faster_io() ios_base::sync_with_stdio(false)
using namespace std;
const int MAXN = 110;
char map[MAXN][MAXN];
bool vis[MAXN][MAXN];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

void dfs(int x,int y,char ch)
{
	for(int i=0;i<4;i++){
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(map[tx][ty]==ch&&!vis[tx][ty]){
			vis[tx][ty]=true;
			dfs(tx,ty,ch);
		}
	}
}

int main()
{
	int h,w;
	while(cin >> h >> w){
		if(h==0&&w==0)	break;
		getchar();
		CLR(vis,false);
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				map[i][j]=getchar();
			}
			getchar();
		}
		int ans=0;
		for(int i=1;i<=h;i++){
			for(int j=1;j<=w;j++){
				if(!vis[i][j]){
					ans++;
					vis[i][j]=true;
					dfs(i,j,map[i][j]);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}