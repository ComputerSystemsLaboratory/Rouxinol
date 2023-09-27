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
	cin >> V >> E >> r;
	vector<PII> G[100000];
	ll d[100000];
	fill(d, d+100000, INF_LL);
	REP(i, E){
		int a, b, c;
		cin >> a >> b >> c;
		G[a].push_back(PII(c, b));
	}
	d[r] = 0;
	priority_queue<PII, vector<PII>, greater<PII> > que;
	que.push(PII(0, r));
	while(que.size()){
		PII p = que.top();que.pop();
		int v = p.second;
		if(p.first > d[v]) continue;
		REP(i, G[v].size()){
			if(G[v][i].first + d[v] < d[G[v][i].second]){
				d[G[v][i].second] = G[v][i].first + d[v];
				que.push(PII(d[G[v][i].second], G[v][i].second));
			}
		}
	}
	REP(i, V){
		if(d[i] == INF_LL){
			cout << "INF" << endl;
		}else{
			cout << d[i] << endl;
		}
	}
	return 0;
}