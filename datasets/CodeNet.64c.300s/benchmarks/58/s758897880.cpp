#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int w,h,ans;
int ga[101][101],dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
char s[101];

void bfs(int y,int x,int n)
{
	ga[y][x]=0;
	for(int i=0;i<4;i++){
		if(0<=y+dy[i]&&0<=x+dx[i]&&y+dy[i]<h&&x+dx[i]<w&&ga[y+dy[i]][x+dx[i]]==n) bfs(y+dy[i],x+dx[i],n);
	}
	return;
}

int main()
{while(1){
	scanf("%d %d",&h,&w);
	ans=0;
	if(!h&&!w) return 0;
	memset(ga,0,sizeof(ga));
	for(int i=0;i<h;i++){
		scanf("%s",s);
		for(int j=0;j<w;j++){
			if(s[j]=='@') ga[i][j]=1;
			else if(s[j]=='#') ga[i][j]=2;
			else ga[i][j]=3;
		}
	}
	for(int i=0;i<w;i++) for(int j=0;j<h;j++){
		if(ga[j][i]) {ans++; bfs(j,i,ga[j][i]);}
	}
	cout<<ans<<endl;
}}