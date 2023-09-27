#include <cstdio>
#include <queue>
#include <vector>

typedef struct{
	std::vector<int> neighbors;
	int cluster;
} node;

void dfs(node* nodes, int id, int cluster){
	for (int i=0; i<nodes[id].neighbors.size(); i++){
		if (nodes[nodes[id].neighbors[i]].cluster == -1){
			nodes[nodes[id].neighbors[i]].cluster = cluster;
			dfs(nodes, nodes[id].neighbors[i], cluster);
		}
	}
}

int main(){
	int n, d, num_relation, n_query, s, t, cluster;
	node *nodes;

	scanf("%d %d", &n, &num_relation);
	nodes = new node[n];
	for (int i=0; i<n;i++){
		nodes[i].cluster = -1;
	}
	for(int i=0;i<num_relation;i++){
		scanf("%d %d", &s, &t);
		nodes[s].neighbors.push_back(t);
		nodes[t].neighbors.push_back(s);
	}
	cluster = -1;
	for (int i=0;i<n;i++){
		cluster ++;
		if (nodes[i].cluster == -1) dfs(nodes, i, cluster);
	}
	scanf("%d", &n_query);
	for(int i=0;i<n_query;i++){
		scanf("%d %d", &s, &t);
		if (nodes[s].cluster != -1 && nodes[s].cluster != -1 && nodes[s].cluster == nodes[t].cluster) printf("yes\n");
		else printf("no\n");

	}

	delete []nodes;
	return 0;
}