#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long;


int main() {
	int v, e, r;
	cin >> v >> e >> r;
	vector<pair<int, int> >* children = new vector<pair<int, int> >[v];
	for (int i = 0;i < e;i++) {
		int moto, saki, w;
		cin >> moto >> saki >> w;
		children[moto].push_back(make_pair(w, saki));
	}
	ll* dist = new ll[v];
	for (int i = 0;i < v;i++) {
		dist[i] = -1;
	}
	priority_queue<pair<ll, int>,vector<pair<ll,int> >,greater<pair<ll,int> > > pq;
	pq.push(make_pair(0, r));
	while (!pq.empty()) {
		pair<ll, int> p = pq.top();
		pq.pop();
		if (dist[p.second] == -1) {
			dist[p.second] = p.first;
			for (int i = 0;i < children[p.second].size();i++) {
				pq.push(make_pair(p.first + children[p.second][i].first, children[p.second][i].second));
			}
		}
	}
	for (int i = 0;i < v;i++) {
		if (dist[i] == -1) {
			cout << "INF\n";
		}
		else {
			cout << dist[i] << endl;
		}
	}
}
