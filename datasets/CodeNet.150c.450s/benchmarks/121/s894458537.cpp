#include<bits/stdc++.h>
using namespace std;
const int HMAX=100,WMAX=100;
const int m[4][2]={{-1,0},{0,-1},{0,1},{1,0}};

bool p[HMAX][WMAX];
char a[HMAX][WMAX];
int h,w;

void dfs(int x,int y,char l)
{
	if(x<0||x>=h)return;
	if(y<0||y>=w)return;
	if(a[x][y]!=l)return;
	if(p[x][y])return;
	p[x][y]=true;
	for(int i=0;i<4;i++)dfs(x+m[i][0],y+m[i][1],a[x][y]);
}

int main()
{
	while(scanf("%d%d",&h,&w)==2)
	{
		if(h==0&&w==0)break;
		int c=0;
		memset(p,0,sizeof p);
		for(int i=0;i<h;i++)for(int j=0;j<w;j++)scanf(" %c",&a[i][j]);
		for(int i=0;i<h;i++)for(int j=0;j<w;j++)if(!p[i][j])dfs(i,j,a[i][j]),++c;
		printf("%d\n",c);
	}
	return 0;
}