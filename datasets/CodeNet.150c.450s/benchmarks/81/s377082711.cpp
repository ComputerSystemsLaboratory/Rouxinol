#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <iterator>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<28

using namespace std;

typedef long long ll;
typedef pair<int,int> P;

struct edge
{
	int to;
	int cost;

	edge(int to,int cost) : to(to),cost(cost) {}
};

vector<edge> G[10];
ll d[10];

void dijkstra(int s,int n)
{
	priority_queue<P,vector<P>,greater<P> > que;
	fill(d,d+n,INF);
	d[s] = 0;
	que.push(P(0,s));

	while(!que.empty())
	{
		P p = que.top();
		que.pop();

		int v = p.second;
		if(d[v] < p.first) continue;

		rep(i,G[v].size())
		{
			edge e = G[v][i];
			if(d[e.to] > d[v] + e.cost)
			{
				d[e.to] = d[v] + e.cost;
				que.push(P(d[e.to],e.to));
			}
		}
	}
}

int main()
{
	int n;
	
	while(cin >> n && n)
	{
		vector<int> t;
		rep(i,10)
		{
			G[i].clear();
		}
		rep(i,n)
		{
			int a,b,c;
			cin >> a >> b >> c;

			G[a].push_back(edge(b,c));
			G[b].push_back(edge(a,c));

			vector<int>::iterator ite = find(t.begin(),t.end(),a);
			if(ite == t.end())
			{
				t.push_back(a);
			}

			ite = find(t.begin(),t.end(),b);
			if(ite == t.end())
			{
				t.push_back(b);
			}

		}

		pair<int,ll> ans;
		ans.first = t[0];
		ans.second = INF;
		
		rep(i,t.size())
		{
			dijkstra(t[i],10);

			ll sum = 0;

			rep(j,t.size()) 
			{
				sum += d[t[j]];
			}
			
			if(ans.second == sum)
			{
				if(ans.first > t[i])
				{
					ans.first = t[i];
				}
			}

			if(ans.second > sum)
			{
				ans.first = t[i];
				ans.second = sum;
			}	
		}
		cout << ans.first << " " << ans.second << endl;
	}

	return 0;
	
}