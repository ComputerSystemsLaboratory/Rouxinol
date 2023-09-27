/*
Author: Do Viet Tung
ID: s1232004
- Run/ Compile:
g++ -std=c++11 -o test p2.cpp
./test
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct subset_t{
	int rank;
	int parent;
};


int find(subset_t subsets[], int i){
	if(subsets[i].parent != i)
		subsets[i].parent = find(subsets, subsets[i].parent);
	return subsets[i].parent;
}

void Union(subset_t subsets[], int i, int j){
	int root_of_i = find(subsets, i);
	int root_of_j = find(subsets, j);

	if(subsets[root_of_i].rank < subsets[root_of_j].rank)
		subsets[root_of_i].parent = root_of_j;
	else if(subsets[root_of_i].rank > subsets[root_of_j].rank)
		subsets[root_of_j].parent = root_of_i;
	else{
		subsets[root_of_i].parent = root_of_j;
		subsets[root_of_j].rank++;
	}
}

struct edge_t{
	int src;
	int dest;
	int weight;
	edge_t(){}
	edge_t(int src, int dest, int weight): src(src), dest(dest), weight(weight) {}
	bool operator<(const edge_t &other) const{
		return weight < other.weight; // IT MUST BE STRICT WEAK ORDERING (THERE IS NO X <= Y, MUST BE X < Y or Y < X)
	}
};

struct graph_t{
	int V;
	int E;
	vector<edge_t> edges;
	graph_t(int V, int E, vector<edge_t> edges): V(V), E(E), edges(edges) {}

	vector<edge_t> kruskal(){
		// create the subset for union-find
		subset_t subsets[V];
		for(int i = 0; i < V; ++i){
			subsets[i] = {0, i};
		}
		// sort a copy of the edges in the non-decreasing order
		sort(edges.begin(), edges.end());

		// add an edge to the minimum spanning tree, if it forms a cycle, then don't
		vector<edge_t> mst;
		for(auto i = 0; i < E; ++i){
			int root_of_src = find(subsets, edges[i].src);
			int root_of_dest = find(subsets, edges[i].dest);
			if(root_of_src != root_of_dest){
				mst.push_back(edges[i]);
				Union(subsets, root_of_src, root_of_dest);
			}
		}

		return mst;
	}		
};


int main(){
	int V, E;
	cin >> V >> E;
	vector<edge_t> edges;
	for(int i = 0; i < E; ++i){
		int src, dest;
		int weight;
		cin >> src >> dest >> weight;
		edges.push_back({src, dest ,weight});
 	}
	graph_t g(V, E, edges);


	vector<edge_t> mst = g.kruskal();
	int edge_sum = 0;
	for(auto edge: mst){
		edge_sum += edge.weight;
	}
	cout << edge_sum << endl;
}
