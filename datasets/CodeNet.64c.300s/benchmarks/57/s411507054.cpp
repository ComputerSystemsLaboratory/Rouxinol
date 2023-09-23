#include<iostream>
using namespace std;

int x,y,ans;
int flag[10],osenbei[10][10000];

int count()
{
	int cnt,res=0;
	for(int i=0;i<x;i++)
	{
		cnt=0;
		for(int j=0;j<y;j++)
		{
			if(!flag[j]&&osenbei[j][i]||flag[j]&&!osenbei[j][i]) cnt++;//ある列における，現在の表の枚数
		}
		if(cnt<y-cnt) res+=y-cnt;//裏の方が多かった場合
		else res+=cnt;
	}
	return res;
}		

void dfs(int num)
{
	if(num==y)
	{
		int tmp=count();
		ans=max(ans,tmp);
		return;
	}

	flag[num]=0;
	dfs(num+1);

	flag[num]=1;
	dfs(num+1);

	return;
}

int main()
{
	while(cin>>y>>x&&y)
	{
		for(int i=0;i<y;i++)
		{
			for(int j=0;j<x;j++)
				cin>>osenbei[i][j];
		}

		dfs(0);
		cout<<ans<<endl;
	}
	return 0;
}