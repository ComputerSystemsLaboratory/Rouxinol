#include <bits/stdc++.h>
using namespace std;
string place[20];
int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0},n,m;
int serch(int y,int x)
{
	int ans=1;
	place[y][x]='#';
	for(int i=0,ax,ay;i<4;i++)if((ay=dy[i]+y)<m&&(ax=dx[i]+x)<n&&ay>=0&&ax>=0&&place[ay][ax]=='.')ans+=serch(ay,ax);
	return ans;
}

int main() {
	while(cin>>n>>m,n,m){
		for(int i=0;i<m;i++)cin>>place[i];
		for(int i=0;i<m;i++)for(int j=0;j<n;j++)if(place[i][j]=='@')cout<<serch(i,j)<<endl;
	}
}