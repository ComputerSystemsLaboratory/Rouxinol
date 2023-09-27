#include<iostream>
#include<cstdio>
#include<cstring>
#include<bitset>
using namespace std;
bitset<10000> cookie[10];
bool now;
int main()
{
	int r,c;
	while(cin>>r>>c && r>0)
	{
		int i,j;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cin>>now;
				cookie[i][j]=now;
			}
		}
		int ans=0;
		for(int i=0;i<(1<<r);i++)
		{
			for(int j=0;j<r;j++)
			{
				if(i & (1<<j))
				{
					cookie[j].flip();
				}
			}
			
			int possible_ans=0;
			for(int j=0;j<c;j++)
			{
				int up_cookie=0;
				for(int k=0;k<r;k++)
				{
					if(cookie[k][j])
					up_cookie++;
				}
				possible_ans+=max(up_cookie,r-up_cookie); 
			}
			ans=max(ans,possible_ans);
			
			for(int j=0;j<r;j++)
			{
				if(i & (1<<j))
				{
					cookie[j].flip();
				}
			}
			
		}
		printf("%d\n",ans);
	}
	return 0;
}