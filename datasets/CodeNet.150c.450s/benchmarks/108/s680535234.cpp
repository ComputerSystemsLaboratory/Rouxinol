#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;

#define NODE_NUM 100

queue<int> que;

class Node
{
private:
	int next_num;
	int next_node_list[NODE_NUM];
public:
	Node();
	void AddNextNode(int id);
	bool Search(int id);
	int dist;
	int check[NODE_NUM + 1];
};

Node::Node()
{
	next_num = 0;
	dist = -1;
	for (int i = 1; i <= NODE_NUM; i++) {
		check[i] = 0;
	}
}

void Node::AddNextNode(int id)
{
	next_node_list[next_num] = id;
	next_num++;
}

Node Node_list[NODE_NUM + 1];

bool Node::Search(int id)
{
	for (int k = 0; k < next_num; k++) {
		if (Node_list[next_node_list[k]].dist == -1) {
			Node_list[next_node_list[k]].dist = dist + 1;
		}
	}

	for (int i = 0; i < next_num; i++) {
		if (next_node_list[i] == id) return true;
	}
	
	for (int j = 0; j < next_num; j++) {
		if (Node_list[next_node_list[j]].check[id] == 0) {
			Node_list[next_node_list[j]].check[id] = 1;
			que.push(next_node_list[j]);
		}
	}
	
	return false;
}

int main(void)
{
	//input
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u;
		cin >> k;
		Node_list[u] = Node();
		for (int j = 0; j < k; j++) {
			int v;
			cin >> v;
			Node_list[u].AddNextNode(v);
		}
	}
	
	//dist
	Node_list[1].dist = 0;
	for (int i = 2; i <= n; i++) {
		bool ret = Node_list[1].Search(i);
		while (!ret && !que.empty()) {
			ret = Node_list[que.front()].Search(i);
			que.pop();
		};
		while (!que.empty()) {
			que.pop();
		}
	}

	//output
	for (int i = 1; i <= n; i++) {
		cout << i << " " << Node_list[i].dist << "\n";
	}
	
	return 0;
}
