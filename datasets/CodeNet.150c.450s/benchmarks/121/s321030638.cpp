#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=1000,inf=0x3f3f3f3f;
char maze[maxn][maxn];
int h,w,ans=0;
void dfs(int x,int y,char sig){
	maze[x][y]='.';
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(i*j==0){
				int nx=x+i,ny=y+j;
				if(0<=nx&&nx<h&&0<=ny&&ny<w&&maze[nx][ny]==sig)
					dfs(nx,ny,sig);
			}
		}
	}
}
int main()
{
	//freopen("read.txt", "r", stdin);
	while(cin>>h>>w&&h&&w){
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				cin>>maze[i][j];
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++){
				if(maze[i][j]!='.'){
					char c=maze[i][j];
					dfs(i,j,c);
					ans++;
				}
			}
		cout<<ans<<endl;
ans=0;
	}
	//fclose(stdin);
	return 0;
}