#include<cstdio>
#include<cstring>
int ball[11];
int temp[2][11];
bool dfs(int x)
{
	if(x>10)
		return 1;
	if(temp[0][0]==0||temp[0][temp[0][0]]<ball[x])
	{
		temp[0][++temp[0][0]]=ball[x];
		if(dfs(x+1))
			return 1;
		temp[0][0]--;
	}
	if(temp[1][0]==0||temp[1][temp[1][0]]<ball[x])
	{
		temp[1][++temp[1][0]]=ball[x];
		if(dfs(x+1))
			return 1;
		temp[0][0]--;
	}
	return 0;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		for(int i=1;i<=10;i++)
			scanf("%d",ball+i);
		memset(temp,0,sizeof temp);
		if(dfs(1))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}