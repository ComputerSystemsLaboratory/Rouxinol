#include<iostream>

using namespace std;

int main()
{
	int ss[8],i,j;
	int ans[2];
	
	for(;cin >> ss[0];)
	{
		ans[0]=ans[1]=0;
		
		for(i=1;i<8;i++)
		{
			cin >> ss[i] ;
		}
		
		for(i=0;i<4;i++)
		{
			if(ss[i]==ss[i+4])
			{
				ans[0]++;
				ss[i+4]=-1;
			}
		}
		for(i=0;i<4;i++)
		{
			for(j=4;j<8;j++)
			{
				if(ss[i]==ss[j])
				{
					ans[1]++;
				}
			}
		}
		cout << ans[0] << " " << ans[1] << endl;
	}
}