#include <iostream>
#include <string>
#include <vector>
using namespace std;
constexpr long long INF = (long long)1<<60;
int main() {
	struct edge { long long from, to, cost; };
	int V, E, r;
	cin>>V>>E>>r;
	vector<edge> es(E);
	for (auto i = 0; i < E; i++) {
		int s, t, d;
		cin>>s>>t>>d;
		es[i] = {s,t,d};
	}
	vector<long long> d(V, INF);
	d[r] = 0;
	int cnt = V;
	bool neg_loop = false;
	while (true) {
		if (!cnt--) {
			neg_loop = true;
			break;
		}
		bool flag = false;
		for (auto& i : es) {
			if (d[i.from] != INF && d[i.to] > d[i.from]+i.cost) {
				flag = true;
				d[i.to] = d[i.from]+i.cost;
			}
		}
		if (!flag) break;
	}
	if (neg_loop) cout << "NEGATIVE CYCLE" << endl;
	else {
		for (auto& i : d)
			cout << (i == INF ? "INF" : to_string(i)) << endl;
	}
	return 0;
}