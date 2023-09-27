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

class Dijkstra{
	priority_queue< Node, vector< Node >, greater< Node > > que;
	vector< Node > nodes;
	
public:
	void Init(int node_num){
		nodes.resize(node_num);
		for(int i = 0; i < node_num; ++i){
			nodes[i] = Node();
		}
	}
	
	void Put(int id, int to, int cost){
		nodes[id].e_to.push_back(to);
		nodes[id].e_cost.push_back(cost);
	}
	
	int Run(int s){
		int sum = 0;
		
		for(vector< Node >::iterator it = nodes.begin(); it != nodes.end(); ++it){
			it->min_cost = -1;
			it->def = false;
		}
		
		nodes[s].min_cost = 0;
		que.push(nodes[s]);
		
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
		
		for(vector< Node >::iterator it = nodes.begin(); it != nodes.end(); ++it){
			if(it -> min_cost != -1){
				sum += it->min_cost;
			}
		}
		
		return sum;
	}
};

int main(){
	int n, s, t, w;
	Dijkstra dijk;
	
	while(cin >> n, n){
		dijk.Init(10);
		int m = 0;
		int min = ~(1 << 31);
		int mint;
		
		for(int i = 0; i < n; ++i){
			cin >> s >> t >> w;
			dijk.Put(s, t, w);
			dijk.Put(t, s, w);
			m = max(max(m, s), t);
		}
		
		for(int i = 0; i < m + 1; ++i){
			int r = dijk.Run(i);
			
			if(r < min){
				min = r;
				mint = i;
			}
		}
		cout << mint << " " << min << endl;
	}
	
	return 0;
}