#include <bits/stdc++.h>

#define M_PI       3.14159265358979323846   // pi

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> t3;
typedef tuple<ll, ll, char, ll> t4;

#define rep(a,n) for(ll a = 0;a < n;a++)
#define repi(a,b,n) for(ll a = b;a < n;a++)

const ll mod = 1000000007;

struct edge {
	int from;
	int to;
	ll cost;
};
//有向グラフ、負の閉路がある場合の最短経路算出

static const ll INF = 1e15;

struct BellmanFord {

	std::vector<edge> edges_;
	int vertexCount_;
	std::vector<ll> cost;
	std::vector<bool> visit;

	BellmanFord(int vertexCount, std::vector<edge>&& edges) : edges_(std::move(edges)), vertexCount_(vertexCount) {
	}

	bool solve(int start)
	{
		cost.resize(vertexCount_, INF);
		visit.resize(vertexCount_, false);
		cost[start] = 0;
		visit[start] = true;

		for (int i = 0; i < vertexCount_; i++) {
			for (int j = 0; j < (int)edges_.size(); j++) {
				const auto& e = edges_[j];
				if (visit[e.from]) {
					visit[e.to] = true;
				}
			}
		}
		for (int i = 0; i < vertexCount_; i++) {
			for (int j = 0; j < (int)edges_.size(); j++) {
				const auto& e = edges_[j];
				if (!visit[e.from]) continue;
				if (cost[e.to] > cost[e.from] + e.cost) {
					cost[e.to] = cost[e.from] + e.cost;
					if (i == vertexCount_ - 1) {
						return false;
					}
				}
			}
		}
		return true;
	}
};
int main(void)
{
	int v, e, r;
	cin >> v >> e >> r;
	vector<edge> g;
	rep(i, e) {
		int s, t; 
		ll d;
		cin >> s >> t >> d;
		g.push_back({ s,t,d });
	}
	BellmanFord bf(v, move(g));
	auto ok = bf.solve(r);
	if (!ok) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	rep(i, v) {
		if (!bf.visit[i]) {
			cout << "INF" << endl;
		}
		else {
			cout << bf.cost[i] << endl;
		}
	}
	return 0;
}

