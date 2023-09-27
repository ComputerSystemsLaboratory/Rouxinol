#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<algorithm>

struct node {
	int num;
	std::vector<int> child;
};

int recurcive(node nodes[],int d[100], int f[100], int n, int count) {
	d[n] = count++;
	for (size_t i = 0; i < nodes[n].child.size(); i++) {
		if (d[nodes[n].child[i]] == 0) {
			count = recurcive(nodes, d, f, nodes[n].child[i], count);
		} else {
			nodes[n].child.erase(std::find(nodes[n].child.begin(), nodes[n].child.end(), nodes[n].child[i]));
			i--;
		}
	}
	f[n] = count++;

	return count;
}

int main() {
	int node_num;
	node nodes[100];
	std::cin >> node_num;

	for (int i = 0; i < node_num; i++) {
		int n, num;
		std::cin >> n >> num;
		for (int j = 0; j < num; j++) {
			int val;
			std::cin >> val;
			nodes[n - 1].child.push_back(val - 1);
		}
	}

	std::stack<int> st, st2;
	std::vector<int> gone;
	int d[100], f[100];
	int count = 1;

	for (int i = 0; i < 100; i++)
		d[i] = f[i] = 0;

	for (int i = 0; i < node_num; i++) {
		if (d[i] == 0) {
			count = recurcive(nodes, d, f, i, count);
		}
	}

	for (int i = 0; i < node_num; i++) {
		std::cout << i + 1 << " " << d[i] << " " << f[i] << std::endl;
	}
	
	return 0;
}