#include <bits/stdc++.h>
using namespace std;
bool island[50][50];
int n,m;
int dx[9]={0,1,1,1,0,-1,-1,-1},dy[9]={-1,-1,0,1,1,1,0,-1};
void serch(int y,int x)
{
	island[y][x]=0;
	for(int i=0,ax,ay;i<9;i++)if((ay=dy[i]+y)<m&&(ax=dx[i]+x)<n&&ay>=0&&ax>=0&&island[ay][ax])serch(ay,ax);
}
int main() {
	while(cin>>n>>m,n,m){
		int ans=0;
		for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>island[i][j];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(island[i][j]){
					ans++;
					serch(i,j);
				}
			}
		}
		cout<<ans<<endl;
	}
}