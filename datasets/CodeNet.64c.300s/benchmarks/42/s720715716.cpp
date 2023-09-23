#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(cin>>n,n)
	{
		bool a[21][21]={};
		int x,y;
		for (int i = 0; i < n; ++i) cin>>x>>y,a[x][y]=1;
		int m;
		cin>>m;
		int nx=10,ny=10,r;
		char c;
		for (int i = 0; i < m; ++i)
		{
			cin>>c>>r;
			if(c=='N')
			{
				for (int i = 1; i <= r; ++i) if(a[nx][ny+i]) a[nx][ny+i]=0,--n;
				ny+=r;
			}
			else if(c=='E')
			{
				for (int i = 1; i <= r; ++i) if(a[nx+i][ny]) a[nx+i][ny]=0,--n;
				nx+=r;
			}
			else if(c=='W')
			{
				for (int i = 1; i <= r; ++i) if(a[nx-i][ny]) a[nx-i][ny]=0,--n;
				nx-=r;
			}
			else
			{
				for (int i = 1; i <= r; ++i) if(a[nx][ny-i]) a[nx][ny-i]=0,--n;
				ny-=r;
			}
		}
		cout<<((n==0)?"Yes\n":"No\n");
	}
	return 0;
}

