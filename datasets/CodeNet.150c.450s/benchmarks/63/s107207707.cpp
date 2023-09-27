#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>

 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()
 
#define REP(i,s,e)	for(int i=(s); i<(e); i++)
#define rep(i,n)	REP(i,0,n)
#define REPE(i,s,e)	for(int i=s; i>e; i--)
#define repe(i,n)	REPE(i,n,-1)


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
typedef vector<vi> vvi;
 
const int IMAX=((1<<30)-1)*2+1;
const int INF=IMAX;//=100000000;
const double EPS=1e-10;
//int mod=1000000007
 

const int MAX_V = 110000;


struct edge{ int to, cost; };


int V;
vector<edge> G[MAX_V];
int d[MAX_V];


void dijkstra(int s){
	//greater<pii>????????????????????¨??§first????°???????????????????????????????????????????
	priority_queue<pii, vector<pii>, greater<pii> > que;
	fill(d, d + V, INF);
	d[s] = 0;
	que.push(pii(0, s));

	while(!que.empty()){
		pii p = que.top();
		que.pop();
		int v = p.second;
		if(d[v] < p.first) continue;
		for(int i = 0; i < G[v].size(); i++){
			edge e = G[v][i];
			if(d[e.to] > d[v] + e.cost){
				d[e.to] = d[v] + e.cost;
				que.push(pii(d[e.to],e.to));
			}
		}
	}
}



int main(){
	int E, r;
	cin>>V>>E>>r;
	int s,e,co;
	edge es;
	rep(i, E){
		cin>>s>>e>>co;
		es.to = e;
		es.cost = co;
		G[s].pb(es);
	}
	dijkstra(r);
	rep(i, V) {
		if(d[i] == INF) cout<<"INF"<<endl;
		else cout<<d[i]<<endl;
	}
}