#include <iostream>
using namespace std;

char feild[101][101];

int dx[4]={1,0,-1,0}, dy[4]={0,1,0,-1};
int ans;

void dfs(int x,int y,int w,int h,char symbol)
{
	feild[x][y] = '.';
	int nx,ny;
	for(int i = 0; i < 4; i++)
	{
		nx = x+dx[i], ny = y+dy[i];
		if((0<=nx&&nx<h)&&(0<=ny&&ny<w)&&feild[nx][ny]==symbol)
		dfs(nx,ny,w,h,symbol);
	}
	
}



int main()
{
	int W,H;

	while(cin>>H>>W,W||H)
	{
		for(int i = 0 ; i < H ; i++)
		cin>>feild[i];
        ans = 0;
		for(int i = 0 ; i < H ; i++)
		    for(int j = 0 ; j < W ; j++)
		    {
		    	if(feild[i][j] != '.')
		    	{
		    		dfs(i,j,W,H,feild[i][j]);
		    		ans++;
				}
			}
		cout<<ans<<endl;
	}
}