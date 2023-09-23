#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n,m,sum;
char step;
char map[105][105];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void dfs(int x,int y){
	map[x][y]='.';
	for(int i=0;i<4;i++){
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(xx>=0&&xx<n&&yy>=0&&yy<m&&map[xx][yy]==step)
		dfs(xx,yy);
	}
}
int main(){
	while(~scanf("%d%d",&n,&m)){
		if(n==0&&m==0) break;
		sum=0;
		memset(map,'\0',sizeof(map));
		for(int i=0;i<n;i++)
		   cin>>map[i];
		for(int i=0;i<n;i++)
		   for(int j=0;j<m;j++){
			if(map[i][j]!='.'){
				step=map[i][j];
				dfs(i,j);
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}