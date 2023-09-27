/*
Á·Ï°Ìâ£ºProperty Distribution_AOJ 0118

²»Ö»ÓÐÈý¸ö×Ö·û£¬Òª×÷Îª²ÎÊý´«Èëdfs 
*/
#include <cstdio>

char maze[105][105];
int W, H;
int sx, sy;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int count;

void dfs(int x, int y, char c)
{
	for(int i=0; i<4; i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0&&nx<H&&ny>=0&&ny<W&&maze[nx][ny]==c)
		{
			maze[nx][ny]='.';
			dfs(nx,ny,c);
		}
	}
	return ;
}


int main()
{
	while(scanf("%d%d", &H, &W)!=EOF)
	{
		count=0;
		if(W==0&&H==0)
			break;
		getchar();
		for(int i=0; i<H; i++)
		{
			scanf("%s", maze[i]);
		}
		for(int i=0; i<H; i++)
			for(int j=0; j<W; j++)
				if(maze[i][j]!='.')
				{
					sx=i;
					sy=j;
					count++;
					dfs(sx, sy, maze[i][j]);
				}
		
		
		
		printf("%d\n", count);
		
	}
	
	return 0;
}
