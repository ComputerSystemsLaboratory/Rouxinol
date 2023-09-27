#include <iostream>
#include <vector>
#include <algorithm>

struct edge {
	int x;
	int y;
	int cost;
	edge(int x, int y, int cost) { this->x = x; this->y = y; this->cost = cost; }
};

bool operator<(const edge& e, const edge& f) { return e.cost < f.cost; }
bool operator<=(const edge& e, const edge& f) { return e.cost <= f.cost; }
bool operator>(const edge& e, const edge& f) { return e.cost > f.cost; }
bool operator>=(const edge& e, const edge& f) { return e.cost >= f.cost; }
bool operator==(const edge& e, const edge& f) { return e.cost == f.cost; }
bool operator!=(const edge& e, const edge& f) { return e.cost != f.cost; }

int root(int* par, int x)
{
	if (par[x] == x) return x;
	else return root(par, par[x]);
}
	
bool isSame(int* par, int x, int y)
{
	return root(par, x) == root(par, y);
}

void unite(int* par, int x, int y)
{
	if (!isSame(par, x, y)) par[root(par, x)] = root(par, y);
}

int main()
{
	int n; std::cin >> n;
	
	int *par = new int[n];
	for (int i=0; i<n; i++) par[i] = i;
	
	std::vector<edge> edge_list;
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			int cost;
			std::cin >> cost;
			if (i < j && cost >= 0) edge_list.push_back( edge(i, j, cost) );
		}
	}
	
	std::sort(edge_list.begin(), edge_list.end());
	
	int totalcost = 0;
	int num_of_edges = 0;
	for (std::vector<edge>::iterator it = edge_list.begin(); it != edge_list.end(); ++it) {
		if (isSame(par, (*it).x, (*it).y)) continue;
		unite(par, (*it).x, (*it).y);
		totalcost += (*it).cost;
		num_of_edges++;
		// std::cout << (*it).x << "," << (*it).y << " " << (*it).cost << std::endl;
		if (num_of_edges == n-1) break;
	}
	
	std::cout << totalcost << std::endl;

	delete[] par;
	
	return 0;
}

