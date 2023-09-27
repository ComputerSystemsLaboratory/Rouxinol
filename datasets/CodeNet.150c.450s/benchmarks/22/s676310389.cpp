#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

char ToUpper(char cX) { return toupper(cX); }
char Tolower(char cX) { return tolower(cX); }

const long long INF = 1LL << 60;
const long long MOD = 1000000007;

using namespace std;
typedef unsigned long long ull;
typedef  long long ll;

vector<ll> dp;

vector<ll> d;
class Edge {
public:
	ll source, target, cost;
	Edge(ll source = 0, ll target = 0, ll cost = 0) :
		source(source), target(target), cost(cost) {}
	bool operator<(const Edge &e)const {
		return cost < e.cost;
	}
};
vector<Edge> es;
//sはスタート、Vは頂点数、Eは辺数
bool BellmanFord(ll s, ll V, ll E) {
	d = vector<ll>(V, INF);
	d[s] = 0;
	for(ll i = 0;i < V; i++){
		bool update = false;
		for (Edge e:es) {
			if (d[e.source] != INF && d[e.target] > d[e.source] + e.cost) {
				d[e.target] = d[e.source] + e.cost;
				update = true;
			}
			if (i == V - 1) {
				return false;
			}
		}
		if (!update)
			break;
	}
	return true;
}


//全辺のネガティブループチェック
bool find_negative_loop(ll V, ll E) {
	d = vector<ll>(V, 0);
	for (ll i = 0; i < V; i++) {
		for (ll j = 0; j < E; j++) {
			Edge e = es[j];
			if (d[e.target] > d[e.source] + e.cost) {
				d[e.target] = d[e.source] + e.cost;
				if (i == V - 1)
					return true;
			}
		}
	}
	return false;
}


int main()
{
	ll N, M;
	ll r;
	cin >> N >> M;
	cin >> r;

	for (ll i = 0; i < M; i++) {
		ll source, target, cost;
		cin >> source >> target >> cost;
		Edge e(source, target, cost);
		es.push_back(e);

	}
	if (BellmanFord(r,N,M)) {
		for (ll i = 0; i < N; i++) {
			if (d[i] == INF) {
				cout << "INF" << endl;
			}
			else
				cout << d[i] << endl;
		}
		return 0;
	}
	else {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}

	return 0;
}
