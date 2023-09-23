#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int x,y,s;
	while(cin>>x>>y>>s,x)
	{
		int ans=0;
		for (int i = 1; i <= 1000; ++i)
		{
			for (int j = 1; j <= 1000; ++j)
			{
				if(i*(100+x)/100+j*(100+x)/100==s)
				{
					ans=max(ans,i*(100+y)/100+j*(100+y)/100);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
