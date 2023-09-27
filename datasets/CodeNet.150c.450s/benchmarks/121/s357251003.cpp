#include<iostream>
#include<cstring>
using namespace std;
char map[1005][1005];
int n,m,tot;
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};
void dfs(int x,int y,char ch)
{
	map[x][y]=0;
	for(int i=0;i<4;i++)
	{
		int xx=x+dx[i],yy=y+dy[i];
		if(xx<n&&xx>=0&&yy<m&&yy>=0&&map[xx][yy]==ch)
		  dfs(xx,yy,ch);
	}
}
int main()
{
	while(scanf("%d%d",&n,&m),n|m){
	for(int i=0;i<n;i++)
	  scanf("%s",map[i]);
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	    if(map[i][j]!=0){
			dfs(i,j,map[i][j]);
			tot++;
		}
	printf("%d\n",tot);
	tot=0;
	}
	return 0;
}