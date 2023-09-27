#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>


#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i);

using namespace std;

const int MAX_V = 100001;
const long long INF = 1e12;

int n,m,r;

struct edge{
	int to, dist;
	edge(int t_to,int t_dist){
		to=t_to;dist=t_dist;
	}
};

typedef pair<int,int> P;//cost??¨v

vector< vector<edge> > G(MAX_V);
long long d[MAX_V];

void dijkstra(int s){
	priority_queue<P,vector<P>,greater<P> > que;
	fill_n((long long *)d, sizeof(d)/sizeof(long long),INF);
	d[s] = 0;
	que.push(P(0,s));

	while(!que.empty()){
		P p = que.top(); que.pop();
		int v = p.second;
		if(d[v]<p.first) continue;
		rep(i,G[v].size()){
			edge e = G[v][i];
			if(d[e.to] > d[v] + e.dist){//??????????????´???
				d[e.to] = d[v] + e.dist;
				que.push(P(d[e.to],e.to));
			}
		}
	}
}


int main(){

	cin >> n >> m >> r;

//	G.clear();
//	G.resize(n);

	rep(i,m){
		int a,b,d;
		cin >> a >> b >> d;
		edge tmp1(b,d);
		G[a].push_back(tmp1);
	}

	dijkstra(r);
	rep(i,n){
		//if(i==r) continue;
		if(d[i]==INF) cout << "INF" <<endl;
		else cout << d[i] << endl;
	}

}