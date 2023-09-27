#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Edge{
public:
	int edge_dist;
	int cost;
	Edge() : edge_dist(0), cost(0) {}
	Edge(int _dist, int _cost) : edge_dist(_dist), cost(_cost) {}
};

bool operator==(const Edge &a, const Edge &b){
	return (a.cost == b.cost);
}
bool operator!=(const Edge &a, const Edge &b){
	return !(a == b);
}
bool operator<(const Edge &a, const Edge &b){
	return (a.cost < b.cost);
}
bool operator>=(const Edge &a, const Edge &b){
	return !(a < b);
}
bool operator>(const Edge &a, const Edge &b){
	return (a.cost > b.cost);
}
bool operator<=(const Edge &a, const Edge &b){
	return !(a > b);
}

int main(){
	
	int v, e, s, t, w, sum = 0;
	vector< int > vlist; //??¢?´¢?????? -> 1 / else -> 0
	vector< vector< Edge > > edge;
	vector< Edge > tree;
	priority_queue< Edge, vector< Edge >, greater< Edge > > priq;
	
	cin >> v >> e;
	
	vlist.resize(v);
	edge.resize(v);
	
	for(int i = 0; i < e; ++i){
		cin >> s >> t >> w;
		
		edge[s].push_back(Edge(t, w));
		edge[t].push_back(Edge(s, w));
	}
	
	vlist[0] = 1;
	for(vector< Edge >::iterator it = edge[0].begin(); it != edge[0].end(); ++it){
		priq.push(*it);
	}
	
	while(!priq.empty()){
		
		Edge ed = priq.top();
		priq.pop();
		
		if(vlist[ed.edge_dist])continue;
		
		tree.push_back(ed);
		vlist[ed.edge_dist] = 1;
		sum += ed.cost;
		
		for(vector< Edge >::iterator it = edge[ed.edge_dist].begin(); it != edge[ed.edge_dist].end(); ++it){
			if(vlist[(*it).edge_dist] == 0){
				priq.push(*it);
			}
		}
	}
	cout << sum << endl;
}