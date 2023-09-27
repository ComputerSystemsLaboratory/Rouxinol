#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;
bool vis[110][110];
int map[110][110];
int n,m,ans;
int x0[5]={0,1,0,-1,0};
int y0[5]={0,0,-1,0,1};
void dfs(int x,int y,int kind)
{
	vis[ x ][ y ]=1;
	for(int k=1,X,Y;k<=4;k++)
	{
		X=x+x0[ k ],Y=y+y0[ k ];
		if( X<1 || X>n || Y<1 || Y>m || vis[ X ][ Y ] || map[ X ][ Y ]!=kind )   continue ;
		dfs( X,Y,kind );
	}
}
int main()
{
	string s;
	while( scanf("%d%d",&n,&m)!=EOF )
	{
		if( !n || !m )   break ;
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			for(int j=1;j<=m;j++)
				if( s[ j-1 ]=='#' )   map[ i ][ j ]=1;
				else
					if( s[ j-1 ]=='@' )   map[ i ][ j ]=2;
					else   map[ i ][ j ]=3;
		}
		ans=0,memset( vis,0x0,sizeof vis );
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				if( !vis[ i ][ j ] )
					ans++,dfs( i,j,map[ i ][ j ] );
		printf("%d\n",ans);
	}
	return 0;
}