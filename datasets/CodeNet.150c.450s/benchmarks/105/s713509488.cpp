#include<bits/stdc++.h>
using namespace std;
long long t,n,a[222];
vector<long long>v;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		v.clear();
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>s;
		bool ok=true;
		for(int i=n-1;i>=0;i--)
		{
			long long nw=a[i];
			for(int j=0;j<v.size();j++)
			{
				nw=min(nw,nw^v[j]);
			}
			if(nw==0)
			{
				continue;
			}
			if(s[i]=='0')
			{
				v.push_back(nw);
			}
			else
			{
				ok=false;
				break;
			}
		}
		if(ok)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
	}
	return 0;
}