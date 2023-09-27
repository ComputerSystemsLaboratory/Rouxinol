#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define INF 10000000
#define INF_LL 1e18
#define REP(i, n) for(int i = 0;i < (n);i++)
#define all(n) n.begin(),n.end()

using namespace std;

using ll = long long;
using PII = pair<int, int>;

int main(void){
	int V, E, r;
	cin >> V >> E;
	vector<PII> G[10000];
	ll d[10000];
	fill(d, d+10000, INF_LL);
	ll res = 0;
	REP(i, E){
		int a, b, c;
		cin >> a >> b >> c;
		G[a].push_back(PII(c, b));
		G[b].push_back(PII(c, a));
	}
	priority_queue<PII, vector<PII>, greater<PII> > que;
	que.push(PII(0, 0));
	while(que.size()){
		PII p = que.top();que.pop();
		int v = p.second;
		if(d[v] != INF_LL) continue;
		res += p.first;
		d[v] = 1;
		REP(i, G[v].size()){
			que.push(PII(G[v][i].first, G[v][i].second));
		}
	}
	cout << res << endl;
	return 0;
}