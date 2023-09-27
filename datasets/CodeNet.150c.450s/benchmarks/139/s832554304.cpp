#if __has_include("debug.h")
    #include "debug.h"
#else  
#include <bits/stdc++.h>
using namespace std;
#define d(...) 2;
#endif

#define int long long int
#define ld long double

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"      

#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define ff first
#define ss second
#define eps 1e-10
#define PI acos(-1LL)

#define gcd(a,b)            __gcd((a),(b))
#define lcm(a,b)            ((a*b)/gcd(a,b))

void solve();

int32_t main()
{
    #ifdef DEBUG
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif 

    fast
    
    int t = 1;
	// cin>>t;
	
	while(t--)
	    solve();
	return 0;  
}

void solve()
{
	int i,j;
	int n,m;
	cin>>n>>m;

	vector<int>vis(n+1,0);
	vector<int>level(n+1,0);
	vector<int>g[n+1];

	queue<int>q;

	bool flag=0;

	for(i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);

		if(u==1||v==1)
		{
			flag=1;
		}
	}

	if(!flag)
	{
		cout<<"No"<<endl;
	}
	else
	{
		cout<<"Yes"<<endl;
		q.push(1);
		vis[1]=1;
		level[1]=0;

		while(!q.empty())
		{
			int node=q.front();
			q.pop();

			for(auto it:g[node])
			{
				if(!vis[it])
				{
					vis[it]=1;
					level[it]=node;
					q.push(it);
				}
			}
		}

		for(i=2;i<=n;i++)
		{
			cout<<level[i]<<endl;
		}
	}







}