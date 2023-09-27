#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m,n) 
	{
		int ps[11];
		for(int i = 0; i < 11; ++i)
		{
			ps[i]=0;
		}
		for(int i = 0; i < n; ++i)
		{
			int d,p;
			cin>>d>>p;
			ps[p]+=d;
		}
		for(int i = 10; 0 <= i; --i)
		{
			if(m>=ps[i])
			{
				m-=ps[i];
				ps[i]=0;
			}
			else
			{
				ps[i]-=m;
				m=0;
			}
		}
		int ans=0;
		for(int i = 0; i < 11; ++i)
		{
			ans+=ps[i]*i;
		}
		cout<<ans<<endl;
	}
  return 0;
}