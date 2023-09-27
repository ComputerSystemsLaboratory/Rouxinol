#include <bits/stdc++.h>
using namespace std;
struct edge { int s, t, c; };
bool compare(const edge& e1, const edge& e2) {
	return e1.c < e2.c;
}
int V, E, par[10009]; edge e[100009];
int root(int x) {
	if(par[x] == x) return x;
	return par[x] = root(par[x]);
}
void unite(int x, int y) {
	x = root(x);
	y = root(y);
	par[x] = y;
}
bool same(int x, int y) {
	return root(x) == root(y);
}
int main() {
	scanf("%d%d", &V, &E);
	for(int i = 0; i < E; i++) scanf("%d%d%d", &e[i].s, &e[i].t, &e[i].c);
	sort(e, e + E, compare);
	int ret = 0;
	for(int i = 0; i < V; i++) par[i] = i;
	for(int i = 0; i < E; i++) {
		if(!same(e[i].s, e[i].t)) {
			ret += e[i].c;
			unite(e[i].s, e[i].t);
		}
	}
	printf("%d\n", ret);
	return 0;
}