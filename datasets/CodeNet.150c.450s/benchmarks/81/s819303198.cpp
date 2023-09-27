#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <complex>
#include <fstream>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for(int i = x; i < n; i++)
template<class T> T RoundOff(T a){ return int(a+.5-(a<0)); }
template<class T, class C> void chmax(T& a, C b){ if(a < b) a = b; }
template<class T, class C> void chmin(T& a, C b){ if(b < a) a = b; }
template<class T, class C> pair<T, C> mp(T a, C b){ return make_pair(a, b); }

const int MAX_M = 10;
const int INT_MAX = 1 << 30;

struct Edge{ int u, v, cost; };

int dijkstra(vector<Edge>& edges, int m, int s)
{
	vint d(m, INT_MAX);
	d[s] = 0;
	
	bool update = true;
	while(update)
	{
		update = false;
		
		rep(i, edges.size())
		{
			Edge e = edges[i];
			
			if(d[e.u] != INT_MAX && d[e.u] + e.cost < d[e.v])
			{
				d[e.v] = d[e.u] + e.cost;
				update = true;
			}
			
			if(d[e.v] != INT_MAX && d[e.v] + e.cost < d[e.u])
			{
				d[e.u] = d[e.v] + e.cost;
				update = true;
			}
		}
	}
	
	return accumulate(ALL(d), 0);
}

int main()
{
    int n;
	while(cin >> n && n)
	{
		int cost = INT_MAX, index = 0, m = 0;
		vector<Edge> edges(n);
		
		rep(i, n)
		{
			cin >> edges[i].u >> edges[i].v >> edges[i].cost;
			chmax(m, max(edges[i].u, edges[i].v) + 1);
		}
		
		rep(i, m)
		{
			int tmp = dijkstra(edges, m, i);
			
			if(tmp < cost)
			{
				index = i;
				cost = tmp;
			}
		}
		
		cout << index << " " << cost << endl;
	}
}