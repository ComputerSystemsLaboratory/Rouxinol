#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int h,w,coun;
int f_x[5]={1,0,-1,0};
int f_y[5]={0,1,0,-1};
char map[105][105]; 
void dfs(int x,int y,char c)
{
	map[x][y]='0';
	for (int i=0;i<4;i++){
		int nextx=x+f_x[i],nexty=y+f_y[i];
		if (nextx>=0&&nextx<h&&nexty>=0&&nexty<w&&map[nextx][nexty]==c){
			dfs(nextx,nexty,c);
		}
	}
}
int main()
{
	int i,j;
	while (~scanf("%d%d",&h,&w),h+w)
	{
		coun=0;
		for (i=0;i<h;i++)
			scanf("%s",map[i]);
		for (i=0;i<h;i++)
			for (j=0;j<w;j++)
				if (map[i][j]!='0')
					{dfs(i,j,map[i][j]);coun++;}
		printf("%d\n",coun);
	}
	return 0;
}