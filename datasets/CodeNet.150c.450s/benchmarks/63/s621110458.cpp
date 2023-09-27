#include<bits/stdc++.h>
using namespace std;
constexpr long long INF = LLONG_MAX;
struct edge { long long t, d; };
int main() {
	long long V,E,r;
	cin>>V>>E>>r;
	vector<vector<edge>> es(V);
	for (auto i = 0; i < E; i++) {
		long long s,t,d;
		cin>>s>>t>>d;
		es[s].push_back({t,d});
	}
	vector<long long> distance(V,INF);
	distance[r] = 0;
	typedef pair<long long,long long> pii;
	priority_queue<pii,vector<pii>,greater<pii>> que;
	que.emplace(0,r);
	while (!que.empty()) {
		pii now = que.top(); que.pop();
		long long v = now.second;
		if (distance[v] < now.first) continue;
		for (auto& i : es[v]) {
			if (distance[i.t] > distance[v]+i.d) {
				distance[i.t] = distance[v]+i.d;
				que.emplace(distance[i.t], i.t);
			}
		}
	}
	for (auto& i : distance)
		cout << (i == INF ? "INF" : to_string(i)) << endl;
	return 0;
}