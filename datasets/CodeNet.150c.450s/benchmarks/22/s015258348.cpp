#include <iostream>
#include <queue>
using namespace std;

int n, m, s;
vector<int> et[1000];
vector<int> ec[1000];
int minDist[1000];
int INF = 1e+9;

int main() {
	int i;
	
	cin >> n >> m >> s;
	for (i = 0; i < m; i++) {
		int u, v, d;
		cin >> u >> v >> d;
		et[u].push_back(v);
		ec[u].push_back(d);
	}
	
	for (i = 0; i < n; i++) minDist[i] = INF;
	
	queue<int> que;
	
	minDist[s] = 0;
	que.push(s);
	
	int loopCnt = 0;
	while (!que.empty()) {
		if (loopCnt > n * m + 100) {
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
		int v = que.front(); que.pop();
		for (i = 0; i < et[v].size(); i++) {
			int nv = et[v][i];
			if (minDist[nv] > minDist[v] + ec[v][i]) {
				minDist[nv] = minDist[v] + ec[v][i];
				que.push(nv);
			}
		}
		loopCnt++;
	}
	
	for (i = 0; i < n; i++) {
		if (minDist[i] >= INF) {
			cout << "INF" << endl;
		}
		else {
			cout << minDist[i] << endl;
		}
	}
	return 0;
}
