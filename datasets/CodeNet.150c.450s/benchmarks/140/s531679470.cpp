#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;

typedef pair<long long int, long long int> P;
long long int INF = 1e18;
long long int MOD = 1000000007;

using namespace std;

#define MAX_V 120000
#define MAX_E 220000

int par[MAX_V];
int rnk[MAX_V];

// n要素で初期化
void init(int n){
	for(int i = 0; i < n; i++){
		par[i] = i;
		rnk[i] = 0;
	}
}

// 木の根を求める
int find(int x){
	if(par[x] == x){
		return x;
	}
	return par[x] = find(par[x]);
}

// xとyの属する集合を併合
void unite(int x, int y){
	int x_par = find(x);
	int y_par = find(y);
	if(x_par == y_par){
		return;
	}
	
	if(rnk[x_par] < rnk[y_par]){
		par[x_par] = y_par;
	}else{
		par[y_par] = x_par;
		if(rnk[x_par] == rnk[y_par]){
			rnk[x_par]++;
		}
	}
}

bool same(int x, int y){
	return (find(x) == find(y));
}

struct edge{
	int u, v;
	long long int cost;
};

bool comp(const edge& e1, const edge& e2){
	return e1.cost < e2.cost;
}

vector<edge> es;
int V, E;

long long int kruskal(){
	sort(es.begin(), es.end(), comp);
	init(V);
	int res = 0;
	int cnt = 0;
	for(int i = 0; i < es.size(); i++){
		edge e = es[i];
		if(!same(e.u, e.v)){
			cnt++;
			unite(e.u, e.v);
			res += e.cost;
		}
	}
	if(cnt < V - 1){
		return INF;
	}
	return res;
}

int main(){
	
	cin >> V >> E;
	
	for(int i = 0; i < E; i++){
		long long int u, v, cost;
		cin >> u >> v >> cost;
		
		edge e;
		e.cost = cost;
		e.v = v;
		e.u = u;
		es.push_back(e);
		e.v = u;
		e.u = v;
		es.push_back(e);
	}
	
	int ans = kruskal();
	
	cout << ans << endl;
	
	return 0;
}
