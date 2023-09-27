#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 7777;
long long inf = 1000000000000000000;
vector < pair<LL, LL> > eg;
pair <LL , LL> p[MAXN];
long long int n, m, r, a, b, c;
long long int dis[MAXN], y[MAXN], dist[MAXN][MAXN];
//////////////////////////////////////////////////////////////////////////
void bel(int f){
	dis[f] = 0;
	for(int i = 0; i < n; i++) if(i != f) dis[i] = inf;

	for(int i = 1; i < n; ++i){
		int o = (int)eg.size();
		for(int j = 0; j < o; ++j){
			long long int u = eg[j].first;
			long long int v = eg[j].second;
			long long int O = dis[u] + y[j];
			if (dis[u] != inf)
			dis[v] = min(dis[v], O);
		}
	}

}
bool cyc(){
	for(int j = 0; j < (int)eg.size(); ++j){
		int u = eg[j].first;
		int v = eg[j].second;
		LL O = dis[u] + y[j];
		if(dis[v] > O && dis[u] != inf) return true;
	}
	return false;
}
////////////////////////////////////////////////////////////////////
void floydWarshall(){
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if(dist[i][k] != inf && dist[k][j] != inf) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}
////////////////////////////////////////////////////////////////////
int main(){
	cin >> n >> m;
	/**/
	for (int i = 0; i < n; i++) {
		fill(dist[i], dist[i] + n, inf);
		dist[i][i] = 0;
	}
	/**/
	for(int i = 0; i < m; i++){
		cin >> a >> b >> c;
		eg.push_back(make_pair(a, b));
		y[i] = c;
		dist[a][b] = min(dist[a][b], c);
	}
	/**/
	bel(0);
	/**/
	if(cyc()) return cout << "NEGATIVE CYCLE\n", 0;
	else{
		floydWarshall();
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(dist[i][j] == inf) cout << "INF";
				else cout << dist[i][j];
				if(j != n - 1) cout << " ";
			}
			cout << "\n";
		}
	}
	/**/
	return 0;
}

