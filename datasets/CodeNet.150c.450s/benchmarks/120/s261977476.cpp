#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<bitset>
//aoj0525
using namespace std;
int h,l;
bitset<10003> bs[13];
int ans;
void dfs(int cs)
{
	if(cs>h)
	{
		int lsa=0;
		for(int i=1;i<=l;i++)
		{
			int ls=0;
			for(int j=1;j<=h;j++)
			{
				if(bs[j][i])
				{
					ls++;
				}
			}
			lsa+=max(ls,h-ls);
		}
		ans=max(ans,lsa);
		return;
	}
	bs[cs].flip();
	dfs(cs+1);
	bs[cs].flip();
	dfs(cs+1);
}
int main()
{
	while(1)
	{
		ans=0;
		scanf("%d%d",&h,&l);
		if(h==0&&l==0)
		{
			break;
		}
		for(int i=1;i<=h;i++)
		{
			for(int j=1;j<=l;j++)
			{
				int ls;
				scanf("%d",&ls);
				bs[i][j]=ls;
			}
		}
		dfs(1);
		printf("%d\n",ans);
	}
	return 0;
}














