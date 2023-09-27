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
 
using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


const int INF=1e9;


const int MAX_V = 1e6+10;

struct edge{
	int to, cost;
	edge(){}
	edge(int to, int cost):to(to),cost(cost){}
};
int V;
vector<edge> G[MAX_V];
int d[MAX_V];

void dijkstra(int s){
	priority_queue<pii, vector<pii>, greater<pii> > q;
	fill(d, d+V, INF);
	d[s] = 0;
	q.push(pii(0, s));

	while(!q.empty()){
		pii p = q.top();
		q.pop();

		int v = p.se;
		if(d[v] < p.first) continue;
		for(int i = 0; i < G[v].size(); i++){
			edge e = G[v][i];
			if(d[e.to] > d[v]+e.cost){
				d[e.to] = d[v]+e.cost;
				q.push(pii(d[e.to],e.to));
			}
		} 
	}
}

int main(){
	int E, r;
	cin>>V>>E>>r;
	int s, t, c;
	for(int i = 0; i < E; i++){
		cin>>s>>t>>c;
		G[s].pb(edge(t,c));
	}
	dijkstra(r);
	for(int i = 0; i < V; i++){
		if(d[i]==INF){
			cout<<"INF"<<endl;
		}
		else{
			cout<<d[i]<<endl;
		}
	}
}