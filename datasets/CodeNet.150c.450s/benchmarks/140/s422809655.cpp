#include <iostream>
#include <fstream>
#include <queue>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

ifstream in("mst.in");

int v, e;
vector<pair<int, pair<int, int> > > g;
int parent[10005];

int find_parent(int r){
	if(parent[r] == r)return r;
	return parent[r] = find_parent(parent[r]);
}

int Kruskal(){
	for(int i = 0; i < v; ++i)
		parent[i] = i;

	sort(g.begin(), g.end());

	int cnt = 0, cost = 0;

	for(int i = 0; i < g.size(); i++){

		int u = find_parent(g[i].second.first);
		int	n = find_parent(g[i].second.second);
		int	w = g[i].first;

		if(u != n){
			parent[u] = n;
			cost += w;
			cnt++;
		}

		if(cnt == v-1) 
			break;
	}

	return cost;
}

int main(){
	cin >> v >> e;
	for(int i = 0; i < e; ++i){
		int x, y, c;
		cin >> x >> y >> c;
		g.push_back(make_pair(c, make_pair(x,y)));
	}

	cout << Kruskal() << '\n';

	return 0;
}

