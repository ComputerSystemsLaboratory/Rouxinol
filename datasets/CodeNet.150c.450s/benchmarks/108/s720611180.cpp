#include<iostream>
#include<vector>
#include<queue>

struct node {
	std::vector<int> child;
	int distance;
};

int main() {
	int node_num;

	std::cin >> node_num;

	std::vector<node> n(node_num);

	for (int i = 0; i < node_num; i++) {
		int num, to, node_val;
		std::cin >> node_val >> num;
		for (int j = 0; j < num; j++) {
			std::cin >> to;
			n[node_val - 1].child.push_back(to);
		}
		n[i].distance = -1;
	}

	//???????????????????????¢0
	n[0].distance = 0;
	std::queue<int> q;
	int dist = 1;
	q.push(1);
	while(q.size() != 0){
		int num = q.front();
		q.pop();
		for (std::vector<int>::iterator it = n[num - 1].child.begin(); it != n[num - 1].child.end(); it++) {
			if (n[*it - 1].distance > n[num - 1].distance + 1|| n[*it - 1].distance == -1) {
				n[*it - 1].distance = n[num - 1].distance + 1;
				q.push(*it);
			}
		}
	}

	for (int i = 0; i < node_num; i++) {
		std::cout << i + 1 << " " << n[i].distance << std::endl;
	}
	return 0;
}