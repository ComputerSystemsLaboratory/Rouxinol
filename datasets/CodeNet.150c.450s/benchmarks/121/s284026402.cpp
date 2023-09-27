#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
string mp[101];
int n,m,ans,vis[101][101];
void dfs(int x,int y,char c){
	mp[x][y]=1;
	for(int i=0;i<4;i++){
		int fx=x+dx[i];
		int fy=y+dy[i];
		if(fx>=0 && fx<n && fy>=0 && fy<m && !vis[fx][fy] && mp[fx][fy]==c){
			vis[fx][fy]=1;
			dfs(fx,fy,c);
		}
	}
}
int main(){
	while(cin>>n>>m){
		if(n==0 && m==0)	return 0;
		for(int i=0;i<n;i++)
			cin>>mp[i];
		memset(vis,0,sizeof(vis));
		ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(!vis[i][j]){
					ans++;
					dfs(i,j,mp[i][j]);
				}			
			}
		}
		cout<<ans<<endl;
	}
	return 0;
 }
