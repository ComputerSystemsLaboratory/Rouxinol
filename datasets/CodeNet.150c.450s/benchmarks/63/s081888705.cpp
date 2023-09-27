#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Node{
public:
	vector< int > e_to;
	vector< int > e_cost;
	
	bool def;
	int min_cost;
	
	Node(){
		def = false;
		min_cost = -1;
	}
};
bool operator==(const Node& ot1, const Node& ot2){
	return ot1.min_cost == ot2.min_cost;
}
bool operator!=(const Node& ot1, const Node& ot2){
	return !(ot1 == ot2);
}
bool operator<(const Node& ot1, const Node& ot2){
	return ot1.min_cost < ot2.min_cost;
}
bool operator>(const Node& ot1, const Node& ot2){
	return ot1.min_cost > ot2.min_cost;
}
bool operator<=(const Node& ot1, const Node& ot2){
	return !(ot1 > ot2);
}
bool operator>=(const Node& ot1, const Node& ot2){
	return !(ot1 < ot2);
}

int main(){
	int v, e, r, s, t, d;
	vector< Node > nodes;
	priority_queue< Node, vector< Node >, greater< Node > > que;
	
	cin >> v >> e >> r;
	nodes.resize(v);
	
	for(int i = 0; i < v; ++i){
		nodes[i] = Node();
	}
	
	for(int i = 0; i < e; ++i){
		cin >> s >> t >> d;
		nodes[s].e_to.push_back(t);
		nodes[s].e_cost.push_back(d);
	}
	
	nodes[r].min_cost = 0;
	
	que.push(nodes[r]);
	
	while(!que.empty()){
		Node def_node = que.top();
		que.pop();
		
		if(def_node.def)continue;
		
		def_node.def = true;
		
		for(int i = 0; i < def_node.e_to.size(); ++i){
			int to = def_node.e_to[i];
			int cost = def_node.min_cost + def_node.e_cost[i];
			
			if(nodes[to].min_cost == -1 || cost < nodes[to].min_cost){
				nodes[to].min_cost = cost;
				que.push(nodes[to]);
			}
		}
	}
	
	for(int i = 0; i < v; ++i){
		if(nodes[i].min_cost == -1) cout << "INF" << endl;
		else cout << nodes[i].min_cost << endl;
	}
	
	return 0;
}