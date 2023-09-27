#include <iostream>
#include <cstring>
using namespace std;
int r,c,data[12][10010],start[10010],rowcnt[12],tmp[10010];
int main()
{
	ios::sync_with_stdio(false);
	while(true)
	{
		cin>>r>>c;
		if(r==0)
			return 0;
		int ans=0;
		memset(start,0,sizeof(start));
		memset(rowcnt,0,sizeof(rowcnt));
		for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		{
			cin>>data[i][j];
			if(data[i][j])
			{
				++start[j];
				++rowcnt[i];
			}
		}
		for(int x=0;x<(1<<r);x++)
		{
			int smallans=0;
			for(int col=0;col<c;col++)
				tmp[col]=start[col];
			for(int dig=0;dig<r;dig++)
			{
				if((x>>dig)&1)
				{
					for(int col=0;col<c;col++)
					{
						if(data[dig][col])
							--tmp[col];
						else
							++tmp[col];
					}
				}
			}
			for(int col=0;col<c;col++)
				smallans+=max(r-tmp[col],tmp[col]);
			ans=max(ans,smallans);
		}
		cout<<ans<<endl;
	}
	return 0;
}