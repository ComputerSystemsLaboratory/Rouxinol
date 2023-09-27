#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

struct Edge {
	int s;
	int t;
	int weight;
};

bool comp_s(const Edge& e, const Edge& f) { return e.s < f.s; }

struct Vertex {
	int id;
	int weight;
	std::vector<int> sink;
	std::vector<int> weight_to_sink;
};

typedef std::pair<int,int> W_ID;

int main ()
{
	int n, m, r;
	std::cin >> n >> m >> r;
	
	Edge* edge_list = new Edge[m];
	for (int i=0; i<m; i++) std::cin >> edge_list[i].s >> edge_list[i].t >> edge_list[i].weight;
	std::sort(edge_list, edge_list + m, comp_s);
	
	Vertex* vertex = new Vertex[n];
	int index = 0;
	for (int i=0; i<n; i++) {
		vertex[i].id = i;
		vertex[i].weight = INT_MAX;
	//	vertex[i].done = false;
		while (edge_list[index].s == i) {
			vertex[i].sink.push_back(edge_list[index].t);
			vertex[i].weight_to_sink.push_back(edge_list[index].weight);
			index++;
		}
	}
	vertex[r].weight = 0;
	
	//std::priority_queue<W_ID, std::vector<W_ID>, std::greater<W_ID> > pq;
	//pq.push( std::make_pair(0,r) );
	
	bool negative_cycle = false;
	/*
	while (!pq.empty()) {
		int s = pq.top().second; pq.pop();
		if (vertex[s].done) continue;
		// std::cout << s << std::endl;
		vertex[s].done = true;
		for (int i=0; i<vertex[s].sink.size(); i++) {
			int t = vertex[s].sink[i];
			if (vertex[t].done) continue;
			int w = vertex[s].weight_to_sink[i];
			if (vertex[t].weight > vertex[s].weight + w) {
				vertex[t].weight = vertex[s].weight + w;
				pq.push ( std::make_pair(vertex[t].weight, t) );
			}
		}
	}
	*/
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			int s = edge_list[j].s;
			int t = edge_list[j].t;
			int w = edge_list[j].weight;
			if (vertex[s].weight == INT_MAX) continue;
			if (vertex[t].weight > vertex[s].weight + w) {
				vertex[t].weight = vertex[s].weight + w;
			}
		}
	}
	
	for (int i=0; i<m; i++) {
		int s = edge_list[i].s;
		int t = edge_list[i].t;
		int w = edge_list[i].weight;
		if (vertex[s].weight == INT_MAX) continue;
		if (vertex[t].weight > vertex[s].weight + w) {
			negative_cycle = true; break;
		}
	}
	
	if (negative_cycle) {
		std::cout << "NEGATIVE CYCLE" << std::endl;
	}
	else {
		for (int i=0; i<n; i++) {
			if(vertex[i].weight < INT_MAX) std::cout << vertex[i].weight << std::endl;
			else std::cout << "INF" << std::endl;
		}
	}
	
	delete[] vertex;
	delete[] edge_list;
	
	return 0;
}

