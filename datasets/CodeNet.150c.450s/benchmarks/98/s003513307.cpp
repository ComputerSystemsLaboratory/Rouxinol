#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	while(cin>>n>>m,n+m)
	{
		int s[n],t[m],d=0;
		for (int i = 0; i < n; ++i) cin>>s[i],d+=s[i];
		for (int i = 0; i < m; ++i) cin>>t[i],d-=t[i];
		if(d%2)
		{
			cout<<-1<<endl;
			continue;
		}
		d/=2;
		sort(s,s+n),sort(t,t+m);
		int i;
		for (i = 0; i < n; ++i)
		{
			if(s[i]-d>=0)
			{
				for (int j = 0; j < m; ++j) if(s[i]-d==t[j])
				{
					cout<<s[i]<<" "<<t[j]<<endl;
					i=10000,j=m;
				}
			}
		}
		if(i==n)cout<<-1<<endl;
	}
	return 0;
}
