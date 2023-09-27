#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int y,m,d;
		cin>>y>>m>>d;
		int ans=0;
		int ty=1000-y-1;
		ans+=(20*20+19*10)*(ty/3);
		if(ty%3==1) ans+=20*10;
		else if(ty%3==2) ans+=20*15+19*5;
		if(y%3==0)
		{
			ans+=20*(10-m);
			ans+=21-d;
		}
		else
		{
			ans+=39*((10-m)/2);
			if(m%2) ans+=19+21-d;
			else ans+=20-d;
		}
		cout<<ans<<endl;
	}
	return 0;
}
