#include<cstdio>
#include<iostream>
using namespace std;
char m[105][105];
int W,H;
void dfs(int a,int b,char ch){
	m[a][b]='.';
	int dx[4]={0,1,0,-1},dy[4]={-1,0,1,0};
	for(int i=0;i<4;i++){
		int nx=dx[i]+a,ny=dy[i]+b;
		if(nx>=0&&nx<W&&ny>=0&&ny<H&&m[nx][ny]==ch)dfs(nx,ny,ch);
	}
}
int main(void){
	while(scanf("%d%d",&W,&H)&&W+H){
		for(int i=0;i<W;i++)
		for(int j=0;j<H;j++)
		cin>>m[i][j];//input;
		int res=0;
		for(int i=0;i<W;i++)
		for(int j=0;j<H;j++){
			if(m[i][j]!='.'){
				dfs(i,j,m[i][j]);
				res++;
			}
		}
		printf("%d\n",res);
	}
}