
#include <iostream>
#include <cstdio>

using namespace std;

#define MAX_N 11

int T;
int num[MAX_N];
int BStack[MAX_N];
int BTop;
int CStack[MAX_N];
int CTop;

bool dfs(int cur)
{
	bool b1=false,b2=false;

	if(cur==10)
		return true;
	if(BTop==-1 || BStack[BTop]<num[cur])
	{
		BStack[++BTop]=num[cur];
		b1=dfs(cur+1);
		--BTop;
	}
	if(CTop==-1 || CStack[CTop]<num[cur])
	{
		CStack[++CTop]=num[cur];
		b2=dfs(cur+1);
		++CTop;
	}

	return b1|b2;
}

int main()
{
	scanf("%d",&T);

	while(T--)
	{
		for(int i=0;i<10;i++)
			scanf("%d",&num[i]);
		BTop=CTop=-1;

		if(dfs(0))
			printf("YES\n");
		else
			printf("NO\n");
	}
}