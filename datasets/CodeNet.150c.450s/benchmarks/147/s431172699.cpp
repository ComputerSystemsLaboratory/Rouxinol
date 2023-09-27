#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define Rep(i,s,f) for(int i=(int)s;i<(int)f;i++)
using ll=long long;
using namespace std;


int main()
{
	int N;
	cin>>N;
	vector<int> ans(N+1,0);
	for(int x=1;x<=100;x++)
	{
		for(int y=1;y<=100;y++)
		{
			for(int z=1;z<=100;z++)
			{
				if((pow(x,2)+pow(y,2)+pow(z,2)+x*y+y*z+z*x)>N) continue;
				ans[pow(x,2)+pow(y,2)+pow(z,2)+x*y+y*z+z*x]++;
			}
		}
	}
	for(int i=1;i<=N;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}
