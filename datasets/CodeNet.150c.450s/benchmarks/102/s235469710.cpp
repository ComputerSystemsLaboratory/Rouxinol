#include <bits/stdc++.h>
using namespace std;
string place[20];
int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};
int serch(int n,int m,int y,int x)
{
	int ans=0;
	place[y][x]='#';
	for(int i=0,ax,ay;i<4;i++)if((ay=dy[i]+y)<m&&(ax=dx[i]+x)<n&&ay>=0&&ax>=0&&place[ay][ax]=='.')ans+=serch(n,m,ay,ax)+1;
	return ans;
}
int main() {
	int n,m;
	while(cin>>n>>m,n,m){
		for(int i=0;i<m;i++)cin>>place[i];
		for(int i=0;i<m;i++)for(int j=0;j<n;j++)if(place[i][j]=='@')cout<<serch(n,m,i,j)+1<<endl;
	}
}