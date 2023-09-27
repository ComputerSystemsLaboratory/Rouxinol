#include "bits/stdc++.h"
#include <sys/timeb.h>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define replrev(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define reprev(i,n) replrev(i,0,n)
#define repi(itr,ds) for(auto itr = ds.begin(); itr != ds.end(); ++itr)
#define mp make_pair
#define INF 1000000007
#define INFL 2000000000000000000LL
#define MOD 1000000007
#define PI 3.1415926536
#define RMAX 4294967295
typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<P> vP;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvll;
typedef vector<vector<char> > vvc;
typedef vector<vector<P> > vvP;
typedef priority_queue<int, vector<int>, greater<int> > pqli;
typedef priority_queue<P, vector<P>, greater<P> > pqlP;

bool WarshallFloyd(vvll &graph, int V) {
	rep(k, V)rep(i, V)rep(j, V) {
		// i->(k)->j
		if (graph[i][k] != INFL && graph[k][j] != INFL) {
			graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
		}
	}
	rep(i, V) {
		if (graph[i][i] < 0) return false;
	}
	return true;
}

int main() {
	int V, E;
	cin >> V >> E;
	vvll G(V);
	rep(i, V) {
		G[i] = vll(V, INFL);
		G[i][i] = 0;
	}
	rep(i, E) {
		int s, t, d;
		cin >> s >> t >> d;
		G[s][t] = d;
	}

	if (WarshallFloyd(G, V)) {
		rep(i, V) {
			rep(j, V) {
				if (G[i][j] == INFL) {
					cout << "INF";
				}
				else {
					cout << G[i][j];
				}
				if (j != V - 1)cout << ' ';
			}
			cout << endl;
		}
	}
	else {
		cout << "NEGATIVE CYCLE" << endl;
	}


	return 0;
}