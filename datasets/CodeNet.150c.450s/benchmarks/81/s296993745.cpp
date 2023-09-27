#include<iostream>
#include<algorithm>
#include<set>
#include<climits>
#define inf INT_MAX
using namespace std;

int main()
{
	int n;
	while(cin>>n,n)
	{
		unsigned long long d[10][10],sum[10]={};
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{
				d[i][j]=i==j?0:inf;
			}
		}
		set<int> ss;
		for(int i=0;i<n;i++)
		{
			int s,t,c;
			cin>>s>>t>>c;
			ss.insert(s);
			ss.insert(t);
			d[s][t]=d[t][s]=c;
		}
		int v=ss.size();		
		for(int k=0;k<v;k++)
		{
			for(int i=0;i<v;i++)
			{
				for(int j=0;j<v;j++) d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}

		int ans;
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				sum[i]+=d[i][j];
			}
		}
		ans=min_element(sum,sum+v)-sum;
		cout<<ans<<" "<<sum[ans]<<endl;
	}
	return 0;
}