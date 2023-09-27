/*
* Filename:    aoj0118.cpp
* Desciption:  DFS
* Created:     2016-03-02
* Author:      JIngwei Xu [mail:xu_jingwei@outlook.com]
*
*/
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#define INT_MAX 2<<30
using namespace std;
//typedef long long ll;
int n,m,ans;
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
char maze[105][105];
void dfs(int x,int y,char s){
	
	int tx,ty;
	maze[x][y]=0;
	for (int i = 0; i < 4; i += 1)
	{
		tx=x+dx[i];ty=y+dy[i];
		if(tx<0||ty<0||tx>=n||ty>=m)continue;
		if(maze[tx][ty]==s)dfs(tx,ty,s);
	}
}
int main()
{
	while (scanf("%d%d",&n,&m)&&n&&m)
	{
		for (int i = 0; i < n; i += 1)
		{
			scanf("%s",maze[i]);
		}
		ans=0;
		for (int i = 0; i < n; i += 1)
		{
			for (int j = 0; j < m; j += 1)
			{
				if(maze[i][j]!=0){
					dfs(i,j,maze[i][j]);
					ans++;
				}
			}
		}
		printf("%d\n",ans);
		
	}
	return 0;
}