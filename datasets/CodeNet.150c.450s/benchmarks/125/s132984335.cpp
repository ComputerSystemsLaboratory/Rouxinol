#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Node {
public:
	vector<int> rels;
	int id, len, pos, ts1, ts2;
	Node();
	int next();
};

Node::Node() {
	pos = ts1 = ts2 = 0;
}

int Node::next() {
	if (pos >= len) return -1;
	int next = rels[pos];
	pos++;
	return next;
}


void dfs(int idx, Node **graph, stack<int> *stack, int *time) {
	stack->push(idx);
	graph[idx]->ts1 = ++(*time);
	while (stack->size() > 0) {
		int u = stack->top();
		int v = graph[u]->next();
		if (v != -1) {
			if (graph[v]->ts1 == 0) {
				graph[v]->ts1 = ++(*time);
				stack->push(v);
			}
		}
		else {
			graph[u]->ts2 = ++(*time);
			stack->pop();
		}
	}
}

int main() {
	int n, val, time;
	Node *graph[100];
	stack<int> stack;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		graph[i] = new Node();
		cin >> graph[i]->id;
		cin >> graph[i]->len;
		for (int j = 0; j < graph[i]->len; j++) {
			cin >> val;
			graph[i]->rels.push_back(val-1);
		}
	}

	time = 0;
	for (int i = 0; i < n; i++) {
		if (graph[i]->ts1 == 0)
			dfs(i, graph, &stack, &time);
	}


	for (int i = 0; i < n; i++) {
		cout << graph[i]->id << " " << graph[i]->ts1 << " " << graph[i]->ts2 << endl;
	}

	for (int i = 0; i < n; i++)
		delete(graph[i]);


	return 0;	
}

