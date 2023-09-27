#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define SORT(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define EQ(a,b) (abs((a)-(b))<EPS)
int d[100100];
int V; // kanarazu dainyuu !
int E; // betuni iranai
struct edge
{
	int to,cost;
	edge(int to,int cost):to(to),cost(cost){}
};
vector<edge> g[100100];
void dijkstra(int s)
{
    fill(d,d+V+1,INF);
    priority_queue<P,vector<P>,greater<P> > q;
    d[s]=0;
    q.push(P(0,s));
    while(!q.empty())
    {
        P a=q.top();
        q.pop();
        if(d[a.sec]<a.fi)continue;
        for(int i=0;i<g[a.sec].size();i++)
        {
            edge e=g[a.sec][i];
            if(d[e.to]>d[a.sec]+e.cost)
            {
                d[e.to]=d[a.sec]+e.cost;
                q.push(P(d[e.to],e.to));
            }
        }
    }
    return;
}
int main()
{
	int r;
	scanf("%d %d %d",&V,&E,&r);
	for(int i=0;i<E;i++)
	{
		int s,t,d;
		scanf("%d %d %d",&s,&t,&d);
		g[s].pb(edge(t,d));
	}
	dijkstra(r);
	for(int i=0;i<V;i++)
	{
		if(d[i]==INF)printf("INF\n");
		else printf("%d\n",d[i]);
	}
	return 0;
}