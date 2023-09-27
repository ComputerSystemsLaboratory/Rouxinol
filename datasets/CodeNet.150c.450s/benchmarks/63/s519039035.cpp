#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <deque>
#include <ctime>

using namespace std;
  
#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define pb push_back
#define mp make_pair
#define all(r) (r).begin(),(r).end()
#define rall(r) (r).rbegin(),(r).rend()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
const ll LINF = 1e18;
const ll MOD = 86400;
double EPS = 1e-8;
const double PI = acos(-1);

struct Edge{
	int to;
	ll cost;
};

ll d[100100];
vector<Edge> es[100100];

int main(){
	int v, e, s;
	cin>>v>>e>>s;
	rep(i, e){
		int a, b, c;
		cin>>a>>b>>c;
		es[a].pb({b,c});
	}
	rep(i, 100100) d[i] = 1e18;
	auto dijkstra =[&]{
		typedef pair<ll, int> P;
		priority_queue<P, vector<P>, greater<P> > q;
		P p;
		q.push({0LL, s});
		d[s] = 0LL;
		while(!q.empty()){
			p = q.top();
			q.pop();
			int from = p.se;
			ll c = p.fi;
			for(auto & e : es[from]){
				int to = e.to;
				ll cost = c + e.cost;
				if(cost < d[to]){
					d[to] = cost;
					q.push({cost, to});
				}
			}
		}
	};
	dijkstra();
	rep(i, v) {
		if(d[i] == 1e18) cout<<"INF"<<endl;
		else cout<<d[i]<<endl;
	}
}