#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include<iterator>
#include<complex>
#include<stack>
#include<sstream>
#include<iterator>
#include<list>
using namespace std;
typedef  long long int lint;
//typedef pair<int, int> IP;
typedef pair<lint, lint> LLP;
typedef pair<char, char>CP;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define sort(v) sort((v).begin(), (v).end())
#define reverse(v) reverse((v).begin(), (v).end())
#define upper(v,hoge) upper_bound(v.begin(),v.end(),hoge)
#define lower(v,hoge) lower_bound(v.begin(),v.end(),hoge)
#define llower(v,hoge) *lower_bound(v.begin(), v.end(), hoge)
#define lupper(v,hoge) *upper_bound(v.begin(), v.end(), hoge)
#define mp make_pair
#define P pair<int,int>

#define INF 1000000000

struct edge//辺を表す構造体
{
	int from, to;
	int cost;
};

vector<int> bellman_ford(int start, vector<vector<P>>G) {
	//startから各点への最短距離を配列で返す
	//辿り着けなかったらINFにする
	//startから負の閉路に到達できたら空の配列を返す
	int V = G.size();
	vector<int>dist(V, INF);
	dist[start] = 0;

	vector<edge> es;
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < G[i].size(); j++) {
			edge tmpes;
			tmpes.from = i;
			tmpes.to = G[i][j].first;
			tmpes.cost = G[i][j].second;
			es.push_back(tmpes);
		}
	}
	bool flag = true;

	for (int i = 0; i < V; i++) {
		for (auto& e : es) {
			if (dist[e.from] < INF && dist[e.from] + e.cost < dist[e.to]) {
				if (i == V - 1) {
					flag = false;
				}
				dist[e.to] = dist[e.from] + e.cost;
			}
		}
	}
	if (flag == true) {
		return dist;
	}
	else {
		dist.clear();
		return dist;
	}
}


int main() {
	int V, E, start;
	cin >> V >> E >> start;
	vector<vector<P>>G(V);
	rep(i, E) {
		int s, t, d;
		cin >> s >> t >> d;
		G[s].push_back(mp(t, d));
	}
	vector<int>dist = bellman_ford(start, G);
	if (!dist.empty()) {
		rep(i, V) {
			if (dist[i] == INF) {
				cout << "INF" << endl;
			}
			else {
				cout << dist[i] << endl;
			}
		}
	}
	else {
		cout << "NEGATIVE CYCLE" << endl;
	}

}
