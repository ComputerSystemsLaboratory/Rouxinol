#include<iostream>
#include<vector>
#include<stack>

#define INF (1 << 21)

int main() {
	int node_num;

	std::cin >> node_num;
	std::vector<std::vector<int> > node(node_num, std::vector<int>(node_num, -1));

	for (size_t i = 0; i < node.size(); i++) {
		int out, node_number;
		std::cin >> node_number >> out;
		for (int j = 0; j < out; j++) {
			int to, distance;
			std::cin >> to >> distance;
			node[node_number][to] = distance;
		}
	}

	std::vector<int> distance(node.size(), INF);
	std::stack<int> s;
	distance[0] = 0;

	s.push(0);
	while(!s.empty()) {
		int node_number = s.top(); s.pop();
		for (size_t j = 0; j < node[node_number].size(); j++) {
			if (node[node_number][j] != -1 && node[node_number][j] + distance[node_number] < distance[j]) {
				distance[j] = node[node_number][j] + distance[node_number];
				s.push(j);
			}
		}
	}

	for (size_t i = 0; i < distance.size(); i++) {
		std::cout << i << " " << distance[i] << std::endl;
	}
}