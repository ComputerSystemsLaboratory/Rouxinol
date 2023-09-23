#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<stack>
#include<set>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX_N=100000;
char map[120][120];
int vis[120][120];
int W,H;
int ans;
char eat;
void dfs(int y,int x){
	vis[y][x]=ans;
	//cout<<vis[y][x]<<" "<<y<<" "<<x<<endl;
	if(y+1<=H&&vis[y+1][x]==0&&map[y+1][x]==eat)
		dfs(y+1,x);
	if(y-1>=1&&vis[y-1][x]==0&&map[y-1][x]==eat)
		dfs(y-1,x);
	if(x+1<=W&&vis[y][x+1]==0&&map[y][x+1]==eat)
		dfs(y,x+1);
	if(x-1>=1&&vis[y][x-1]==0&&map[y][x-1]==eat)
		dfs(y,x-1);
}
int main()
{
	ios::sync_with_stdio(false);
	while(cin>>H>>W&&(W||H)){
		ans=1;
		memset(vis,0,sizeof(vis));
		for(int i=1;i<=H;i++)
			for(int j=1;j<=W;j++){
				cin>>map[i][j];
			}
		for(int i=1;i<=H;i++)
			for(int j=1;j<=W;j++){
				if(vis[i][j]==0){
					eat=map[i][j];	
					dfs(i,j);
					ans++;/*
					for(int w=1;w<=H;w++){
						for(int q=1;q<=W;q++){
							cout<<vis[w][q]<<"	";
						}
						cout<<endl;
					}
					cout<<endl;*/
				}
			}	
		cout<<ans-1<<endl;
	}
	
	return 0;
}
