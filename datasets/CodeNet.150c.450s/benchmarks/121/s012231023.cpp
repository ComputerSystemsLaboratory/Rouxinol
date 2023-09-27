#include<cstdio>
#define MAX 105
using namespace std;
int h,w;
char map[MAX][MAX];
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1}; 
void dfs(int sx,int sy,char ch)
{
//	char ch=map[sx][sy];
	map[sx][sy]='0';
	for(int i=0;i<4;i++)
	{
		int nx=sx+dx[i];
		int ny=sy+dy[i];
		if(nx>=0&&nx<h&&ny>=0&&ny<w&&map[nx][ny]==ch)
		dfs(nx,ny,ch);
	}
	return ;
}
int main(void)
{
	while(scanf("%d%d",&h,&w)==2)
	{
		if(h==0&&w==0)
		break;
		for(int i=0;i<h;i++)
		scanf("%s",&map[i]);
		int res=0;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(map[i][j]!='0')
				{
//					printf("\n");
					dfs(i,j,map[i][j]);
//					for(int k=0;k<h;k++)
//					printf("%s\n",map[k]); 
					res++;
				}
			}
		}
		printf("%d\n",res);
	}
	return 0;
}