#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

char H[101][101];
int h,w;
int dx[]{1,-1,0,0},dy[]{0,0,1,-1};
void dfs(int x,int y){
	char c=H[x][y];
	H[x][y]=0;
	rep(i,4){
		int nx=x+dx[i],ny=y+dy[i];
		if(0<=nx&&nx<h&&0<=ny&&ny<w&&c==H[nx][ny])dfs(nx,ny);
	}
}
int main(){
	while(cin>>h>>w,h){
		rep(i,h)scanf("%s",H[i]);
		int cnt=0;
		rep(i,h){
			rep(j,w){
				if(H[i][j]){
					dfs(i,j);cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
}