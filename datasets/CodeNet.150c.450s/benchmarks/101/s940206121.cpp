#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

class Node
{
private:
public:
	Node();
	int id;
	list<int> next_node_list;
	int next_idx;
	void AddNextNode(int id);
	void SetGroup(int prev_id, int num);
	int group;
	void Init(int id);
};

Node::Node()
{
	group = 0;
	next_idx = 0;
}

void Node::AddNextNode(int id)
{
	next_node_list.push_back(id);
}

Node *Node_list;

void Node::SetGroup(int prev_id, int num)
{
	group = num;

	list<int>::iterator itr;
	itr = next_node_list.begin();
	for (int i = 0; i < next_idx; i++) {
		itr++;
	}
	
	for(; itr != next_node_list.end(); itr++){
		next_idx++;
		if (prev_id != *itr) {
			Node_list[*itr].SetGroup(id, num);
		}
	}
}

void Node::Init(int id)
{
	this->id = id;
}

int main(void)
{
	//input
	int n;
	cin >> n;
	Node_list = new Node[n]();
	for (int i = 0; i < n; i++) {
		Node_list[i].Init(i);
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;
		Node_list[s].AddNextNode(t);
		Node_list[t].AddNextNode(s);
	}

	//group
	int group = 1;
	for (int i = 0; i < n; i++) {
		if (Node_list[i].group) continue;
		Node_list[i].SetGroup(-1, group);
		group++;
	}
	
	//output
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int s, t;
		cin >> s >> t;
		if (Node_list[s].group == Node_list[t].group && Node_list[s].group != 0) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}
	
	return 0;
}
