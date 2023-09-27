#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
public:
	vector<int> to;
	vector<int> ecost;
	int cost;
	bool done;
	bool avail;
	Node(){ done=0; cost=-1; avail=0; }
};

void find(Node *node, int nodes, int start);

int main(){
	int v, e, r;
	cin >> v >> e >> r;

	int s[e], t[e], d[e];
	int i;
	for(i=0 ; i<e; i++){
		cin >> s[i] >> t[i] >> d[i];
	}
	
	Node node[v];
	for(i=0; i<e; i++){
		node[s[i]].to.push_back(t[i]);
		node[s[i]].ecost.push_back(d[i]);
	}

	find(node, v, r);
	//cout << "finded" << endl;
	for(i=0; i<v; i++){
		if(node[i].cost==-1){ cout << "INF" << endl;}
		else{ cout << node[i].cost << endl; }
	}

	return 0;
}

void find(Node *node, int nodes, int start){
	int i, j;
	if(node[start].done) return;
	queue<int> list;
	node[start].cost=0;
	node[start].done=1;

	for(i=0; i<node[start].to.size(); i++){
		node[node[start].to[i]].cost = node[start].ecost[i];
		list.push(node[start].to[i]);
	}
	
	bool dflag;
	 
	while(!list.empty()){
		//cout << list.front() << endl;
		dflag=1;
		for(j=0; j<node[list.front()].to.size(); j++){
			if(node[node[list.front()].to[j]].cost == -1){
				node[node[list.front()].to[j]].cost = node[list.front()].cost + node[list.front()].ecost[j];
				list.push(node[list.front()].to[j]);
				dflag=0;
				continue;
			}
			if(node[node[list.front()].to[j]].cost > node[list.front()].cost + node[list.front()].ecost[j]){
				node[node[list.front()].to[j]].cost = node[list.front()].cost + node[list.front()].ecost[j];
				node[node[list.front()].to[j]].done=0;
				list.push(node[list.front()].to[j]);
				dflag=0;
				continue;
			}
		}
		if(dflag) node[list.front()].done=1;
		list.pop();
	}
}