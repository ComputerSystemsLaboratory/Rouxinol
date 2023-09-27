#include <iostream>
#include <algorithm>

struct Edge {
	int s;
	int t;
	int w;
	Edge() {}
	Edge(int s, int t, int w) : s(s), t(t), w(w) {}
};

bool operator<(const Edge& e, const Edge& f) { return e.w < f.w; }

int root(int* par, int x)
{
	if (x == par[x]) return x;
	else return par[x] = root(par, par[x]);
}

void unite(int* par, int x, int y)
{
	int rx = root(par, x);
	int ry = root(par, y);
	par[rx] = ry;
}

bool isSame(int* par, int x, int y)
{
	return root(par, x) == root(par, y);
}

int main ()
{
	int n, m;
	std::cin >> n >> m;
	
	Edge* edge_list = new Edge[m];
	int* parent = new int[n];
	for (int i=0; i<n; i++) parent[i] = i;
	
	for (int i=0; i<m; i++) {
		int s, t, w;
		std::cin >> s >> t >> w;
		edge_list[i] = Edge(s, t, w);
	}
	
	std::sort(edge_list, edge_list + m);
	
	int total_weight = 0;
	int edge_count = 0;
	for (int i=0; i<m; i++) {
		int s = edge_list[i].s;
		int t = edge_list[i].t;
		int w = edge_list[i].w;
		if (!isSame(parent, s, t)) {
			unite(parent, s, t);
			total_weight += w;
			edge_count++;
			//std::cout << "(" << s << "," << t << "," << w << ")" << std::endl;
			if (edge_count == n-1) break;
		}
	}
	
	std::cout << total_weight << std::endl;
	
	delete[] parent;
	delete[] edge_list;
	
	return 0;
}

