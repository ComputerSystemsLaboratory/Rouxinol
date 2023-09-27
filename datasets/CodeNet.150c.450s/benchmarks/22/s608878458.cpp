#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

struct edge {
	int from,to;
	int cost;

	edge(int t,int c) : to(t),cost(c) {}
	edge(int f,int t,int c) : from(f),to(t),cost(c) {}

	bool operator<(const edge &e) const {
		return cost < e.cost;
	}
};

vector<edge> E;
int d[1005];

bool bellman_ford(int s, int n){
	fill(d,d+n,INF);
	d[s] = 0;
	int cnt = 0;

	while(true) {
		bool update = false;
		rep(i, E.size()) {
			edge e = E[i];
			if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}

		if(!update) break;
		cnt++;
		if(cnt > n) {
			return false;
		}
	}

	return true;
}

bool find_negative_loop(int n) {
	memset(d,0,sizeof(d));
	
	rep(i,n) {
		bool update = false;
		rep(j,E.size()) {
			edge e = E[j];
			if(d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}

		cout << "I:" << i << endl;
		rep(j, n) {
			cout << d[j] << endl;
		}

		if(update && i == n-1) {

			cout << "---" << endl;
			return true;
		}
	}

	return false;
}

int main() {
	int n, m, r;
	cin >> n >> m >> r;

	rep(i, m) {
		int s, t, c;
		cin >> s >> t >> c;

		E.push_back(edge(s, t, c));
	}

	if(bellman_ford(r, n)) {
		rep(i, n){
			if(d[i] == INF) cout << "INF" << endl;
			else cout << d[i] << endl;
		}
	} else {
		cout << "NEGATIVE CYCLE" << endl;
	}


	// if(find_negative_loop(n)) {
	// 	cout << "NEGATIVE CYCLE" << endl;
	// } else {
	// 	bellman_ford(r, n);
	// 	rep(i, n) {
	// 		if(d[i] == INF) cout << "INF" << endl;
	// 		else cout << d[i] << endl;
	// 	}
	// }
	return 0;
}