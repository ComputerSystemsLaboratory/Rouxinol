#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

struct Node {
	int id;
	std::vector<int> edge_to;
	std::vector<int> edge_cost;
	bool done;
	int cost;
};

int min(int x, int y)
{
	return x>y ? y : x;
}

void insert(Node* nodes, std::vector<int>& q, int t)
{
	std::vector<int>::iterator it = q.begin();
	for (; it != q.end(); ++it) {
		if (nodes[*it].id == nodes[t].id) return;
		if (nodes[*it].cost > nodes[t].cost) break;
	}
	q.insert(it, t);
}

int main()
{
	int n; std::cin >> n;
	
	Node* nodes = new Node[n];
	
	for (int i=0; i<n; i++) {
		nodes[i].done = false;
		nodes[i].cost = INT_MAX;
	}
	
	for (int i=0; i<n; i++) {
		int id, deg;
		std::cin >> id >> deg;
		nodes[i].id = id;
		for (int j=0; j<deg; j++) {
			int t, cost;
			std::cin >> t >> cost;
			nodes[i].edge_to.push_back(t);
			nodes[i].edge_cost.push_back(cost);
		}
	}
	
	std::vector<int> que;
	que.push_back(0);
	nodes[0].cost = 0;
	
	while (!que.empty()) {
		int s = que[0]; que.erase(que.begin());
		nodes[s].done = true;
		for (int k=0; k<nodes[s].edge_to.size(); k++) {
			int t = nodes[s].edge_to[k];
			int cost = nodes[s].edge_cost[k];
			if (nodes[t].done) continue;
			nodes[t].cost = min(nodes[t].cost, nodes[s].cost + cost);
			insert(nodes, que, t);
		}
	}
	
	for (int i=0; i<n; i++) {
		std::cout << nodes[i].id << " " << nodes[i].cost << std::endl;
	}
	
	delete[] nodes;
	
	return 0;
}

