#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
char g[102][102];
bool tag[102][102];
int n,m;
void dfs(int ,int);
int main(){
	while(cin>>n>>m&&n&&m){
		cin.get();
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin>>g[i][j];
		memset(tag,0,sizeof(tag));
		int cnt=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				if(!tag[i][j]){
					cnt++;
					dfs(i,j);
				}
		cout<<cnt<<endl;
	}
	return 0;
}
void dfs(int y,int x){
	tag[y][x]=1;
	for(int i=-1;i<=1;i++)
		for(int j=-1;j<=1;j++)
			if(abs(i)+abs(j)==1&&g[y][x]==g[y+i][x+j]&&y+i>=1&&y+i<=n&&x+j>=1&&x+j<=m&&tag[y+i][x+j]==0)
				dfs(y+i,x+j);
}

