#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <list>
#include <utility>
#include <cmath>
using namespace std;
int in()
{
	int x;
	cin>>x;
	return x;
}
vector<int> h,w;
int mp[1500001]={};
int main ()
{
	int n,m;
	while(cin>>n>>m&&n&&m)
	{
		
		int ans=0;
		h.push_back(0);
		w.push_back(0);
		for(int i=0;i<n;i++)h.push_back(in());
		for(int i=0;i<m;i++)w.push_back(in());
		for(int i=1;i<=n;i++)h[i]+=h[i-1];
		for(int l=1;l<=m;l++)w[l]+=w[l-1];
		for(int i=0;i<n;i++)
		{
			for(int l=i+1;l<=n;l++)
			{
				mp[h[l]-h[i]]++;
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int l=i+1;l<=m;l++)
			{
				if(mp[w[l]-w[i]]!=0)
				{
					ans+=mp[w[l]-w[i]];
					//cout<<i<<" "<<l<<endl;;
				}
			}
		}
		h.clear();
		w.clear();
		for(int i=0;i<1500001;i++)mp[i]=0;
		cout<<ans<<endl;
	}
}