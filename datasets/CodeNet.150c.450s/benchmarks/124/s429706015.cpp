#include <stdio.h>
#include <iostream>
#include <queue>
#include <list>
using namespace std;

class Node
{
private:
	list<int> next_node_list;
	list<int> next_weight_list;
public:
	Node();
	void AddNextNode(int id, int weight);
	void SetWeight(int weight);
	void DistributeWeight();
	int weight_from_0;
	bool check;
};

Node::Node()
{
	weight_from_0 = -1;
	check = false;
}

Node *Node_list;

struct GreatNode
{
	bool operator()(const Node *n1, const Node *n2) const;
};
bool GreatNode::operator()(const Node *n1, const Node *n2) const
{
	return n1->weight_from_0 > n2->weight_from_0;
}
priority_queue<Node*, vector<Node*>, GreatNode > que;

void Node::AddNextNode(int id, int weight)
{
	next_node_list.push_back(id);
	next_weight_list.push_back(weight);
}

void Node::SetWeight(int weight)
{
	if (weight_from_0 == -1 || weight < weight_from_0) {
		weight_from_0 = weight;
	}
}

void Node::DistributeWeight()
{
	check = true;
	list<int>::iterator itr2 = next_weight_list.begin();
	for(list<int>::iterator itr = next_node_list.begin(); itr != next_node_list.end(); itr++){	
		if (Node_list[*itr].check == false) {
			Node_list[*itr].SetWeight(weight_from_0 + *itr2);
			que.push(&Node_list[*itr]);
		}
		itr2++;
	}
	next_node_list.clear();
	next_weight_list.clear();
}

int main(void)
{
	//input
	int n;
	cin >> n;
	Node_list = new Node[n]();
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v, c;
			cin >> v >> c;
			Node_list[i].AddNextNode(v, c);
		}
	}

	//weight from 0 ?
	Node_list[0].check = true;
	Node_list[0].weight_from_0 = 0;
	Node_list[0].DistributeWeight();
	while (!que.empty()) {
		Node *node = que.top();
		que.pop();
		node->DistributeWeight();
	}

	//output
	for (int i = 0; i < n; i++) {
		cout << i << " " << Node_list[i].weight_from_0 << endl;
	}
	
	return 0;
}
