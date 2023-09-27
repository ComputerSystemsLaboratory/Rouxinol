#include <bits/stdc++.h>

using namespace std;
  
#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define pb push_back
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
const int INF = 1e9;
double EPS = 1e-8;

struct Edge
{
	int to;
	ll cost;
};

ll d[100010];
vector<Edge> es[100010];

int E, V;

int main(){
	int start;
	cin>>V>>E>>start;
	rep(i, E){
		int s, t, d;
		cin>>s>>t>>d;
		es[s].pb({t, d});
	}
	
	auto dijkstra = [&]{
		typedef pair<ll, int> P;
		priority_queue<P, vector<P>, greater<P> > q;
		P p;
		rep(i, V) d[i] = 1e18;
		q.push({0, start});
		d[start] = 0;
		while(!q.empty()){
			p = q.top();
			int from = p.se;
			ll cost = p.fi;
			q.pop();
			if(d[from] < cost) continue;
			for(auto&e :es[from]){
				int to = e.to;
				ll newCost = cost + e.cost;
				if(d[to] > newCost){
					d[to] = newCost;
					q.push({newCost, to});
				}
			}
		}
	};
	dijkstra();
	for(int i = 0; i < V; i++){
		if(d[i] == 1e18) cout<<"INF"<<endl;
		else cout<<d[i]<<endl;
	}
}