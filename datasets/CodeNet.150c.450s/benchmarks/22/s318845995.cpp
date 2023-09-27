#include "bits/stdc++.h"
using namespace std;


#include <chrono>

//?????????
#pragma region MACRO 
#define putans(x)  std::cerr << "[ answer ]: " ; cout << (x) << endl
#define dputans(x) std::cerr << "[ answer ]: "; cout << setprecision(27) << (double)(x) << endl
#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define RREP(i,a,n) for(int i=(int)(n-1); i>= a; i--)
#define rep(i,n) REP(i,0,n)
#define rrep(i,n) RREP(i,0,n)
#define all(a) begin((a)),end((a))
#define mp make_pair
#define exist(container, n) ((container).find((n)) != (container).end())
#define equals(a,b) (fabs((a)-(b)) < EPS)
#ifdef _DEBUG //???????????????????????????????????????????????????
std::ifstream ifs("data.txt");
#define put ifs >>
#else //?????£????????????????????§?????????????????????
#define put cin >>
#endif
#pragma endregion

//???????????°??????????????´
#pragma region CODING_SUPPORT
#ifdef _DEBUG
#define dbg(var0) { std::cerr << ( #var0 ) << "=" << ( var0 ) << endl; }
#define dbg2(var0, var1) { std::cerr << ( #var0 ) << "=" << ( var0 ) << ", "; dbg(var1); }
#define dbg3(var0, var1, var2) { std::cerr << ( #var0 ) << "=" << ( var0 ) << ", "; dbg2(var1, var2); }
#define dbgArray(a,n) {std::cerr << (#a) << "=";  rep(i,n){std::cerr <<(a[i])<<",";} cerr<<endl;} 
#else
#define dbg(var0) {}
#define dbg2(var0, var1) {}
#define dbg3(var0, var1, var2) {}
#define dbgArray(a,n) {}
#endif 
#pragma endregion 
//typedef????????????????????????????¶????????????§?????????
#pragma region TYPE_DEF
typedef long long ll;
typedef pair<int, int> pii; typedef pair<string, string> pss; typedef pair<int, string>pis;
typedef vector<string> vs; typedef vector<int> vi;
#pragma endregion
//??????????????°(???????????????????????§??????)
#pragma region CONST_VAL
#define PI (2*acos(0.0))
#define EPS (1e-10)
#define MOD (ll)(1e9 + 7)
#define INF (ll)(1e9)
#pragma endregion

//static const int MAX = 100;
//static const int WHITE = 0;
//static const int GRAY = 1;
//static const int BLACK = 2;
//
//static const int n = 100;
//int d[n][n];
/*
void floyd() {
	rep(k, n) {
		rep(i, n) {
			if (d[i][k] == INF) continue;
			rep(j, n) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}

 void topologicalSort() {
	 auto bfs = [&](int s )->void{
		 queue<int> q;
	q.push(s);
	V[s] = true;
	while (!q.empty()) {
		int u = q.front(); q.pop();
		rep(i, G[u].size()) {
			int v = G[u][i];
			indeg[v]--;
			if (indeg[v] == 0 && !V[v]) {
				q.push();
			}
		}
	}
	 };

	 rep(i, n) {
		 indeg[i] = 0;
	 }
	 rep(u, n) {
		 rep(i, G[u].size()) {
			 int v = G[u][i];
			 indeg[v]++;
		 }
		 rep(i, n) {
			 if (indeg[i] == !V[i]) bfs(u);
		 }//????????§???????????????
	 }

}*/

//??????????£?????????°???
//https://www23.atwiki.jp/akitaicpc/pages/65.html

struct edge { int from, to, cost; };
typedef pair<int, int> P;

//dikstra
int V;
int E;
static const int MAX_V = 1000;
static const int MAX_E = 2000;
edge es[MAX_E];
int d[MAX_V];


void bellman_Ford(int s) {
	for (int i = 0; i < V; i++) d[i] = INF;
	d[s] = 0;
	while (true) {
		bool update = false;
		for (int i = 0; i < E; i++) {
			edge e = es[i];
			if (d[e.from] != INF&& d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if (!update) break;
	}
}

bool findNegativeLoop(int s) {
	for (int i = 0; i < V; i++) d[i] = INF;
	d[s] = 0;
	for (int i = 0; i < V; i++) {
		for ( int j = 0; j < E;j++) {
			edge e = es[j];
			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				if (i == V-1) return true;
			}
		}
	}
	return false;
}

void calc() {
	int v, e, r; put v >> e >> r;
	V = v;
	E = e;
	rep(i, e) {
		int from, to, cost;
		put from >> to >> cost;
		es[i] = { from,to,cost };
	}
	if (findNegativeLoop(r)) {
		cout << "NEGATIVE CYCLE" << endl;
		return;	
	}
	bellman_Ford(r);
	rep(i, v) {
		string ans = ( ( d[i] != INF ? to_string(d[i]) : "INF" ) );
		cout << ans << endl;
	}
}

int main() {
	calc();
END:
	return 0;
}