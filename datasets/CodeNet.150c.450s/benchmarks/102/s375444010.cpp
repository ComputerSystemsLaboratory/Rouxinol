#include <iostream>
using namespace std;
char f[22][22];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0}; 
int w,h,sx,sy;
void dfs(int x,int y)
{
	if(f[x][y]!='.')return;
	f[x][y]='7';
	for(int i=0;i<4;i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx<0||nx>=h||ny<0||ny>=w)continue;
		if(f[nx][ny]!='.')continue;
		dfs(nx,ny);
	}
	return;
}
int main()
{
	while(1)
	{
		cin >> w >> h;
		if(w==0&&h==0)break;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				cin >> f[i][j];
				if(f[i][j]=='@')
				{
					sx = i;
					sy = j;
					f[i][j]='.';
				}
			}
		}
		dfs(sx,sy);
		int ans = 0;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(f[i][j]=='7')ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}