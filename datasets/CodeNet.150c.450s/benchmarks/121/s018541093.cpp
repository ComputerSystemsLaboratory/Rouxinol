# include <iostream>
using namespace std;

int n,m,ans;
char mp[110][110],c;
int dir[4][2] = {-1,0,1,0,0,1,0,-1};
void dfs(int x,int y)
{
	mp[x][y] = '.';
	for (int i=0;i<4;++i)
	{
		int nx = x+dir[i][0];
		int ny = y+dir[i][1];
		if (nx>=0&&nx<n&&ny>=0&&ny<m&&mp[nx][ny] == c) dfs(nx,ny);
	}
}

int main()
{
//	freopen("in.txt","r",stdin);
	while (cin>>n>>m)
	{
		if (n==0 && m==0) break;
		ans = 0;
		for (int i=0;i<n;++i)
			for (int j=0;j<m;++j)
				cin>>mp[i][j];
		for (int i=0;i<n;++i)
			for (int j=0;j<m;++j)
				if (mp[i][j] != '.')
				{
					c = mp[i][j];
					dfs(i,j);
					ans++;	
				}
		cout<<ans<<'\n';
	}
	return 0;
}
