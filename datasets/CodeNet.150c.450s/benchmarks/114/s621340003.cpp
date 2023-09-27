#include<cstdio>
static const int kMaxVertices = 100;
static const int kInfinity = 3000;
static int Adjacency_matrix[kMaxVertices][kMaxVertices];

void Prim(int n){
	bool has_not_been_discovered[kMaxVertices];
	int lowest_cost_edge[kMaxVertices];
	int parent[kMaxVertices];
	for (int i = 0; i < n; ++i)	{
		has_not_been_discovered[i] = true;
		lowest_cost_edge[i] = kInfinity;
	}
	lowest_cost_edge[0] = 0;
	parent[0] = -1;

	while(true) {
		int mincost = kInfinity;
		int vertex_to_add;
		for (int i = 0; i < n; ++i)	{
			if(has_not_been_discovered[i] && lowest_cost_edge[i] < mincost){
				mincost = lowest_cost_edge[i];
				vertex_to_add = i;
			}
		}

		if(mincost == kInfinity)
			break;

		has_not_been_discovered[vertex_to_add] = false;
		int vertex_added = vertex_to_add;

		for (int i = 0; i < n; ++i)	{
			if(has_not_been_discovered[i] && Adjacency_matrix[vertex_added][i] < lowest_cost_edge[i]) {
				lowest_cost_edge[i] = Adjacency_matrix[vertex_added][i];
				parent[i] = vertex_added;
			}
		}
	}
	int total_cost = 0;
	for (int i = 0; i < n; ++i)
		total_cost += lowest_cost_edge[i];
	printf("%d\n", total_cost);
}

int main() {
	int number_of_vertices;
	scanf("%d", &number_of_vertices);
	for (int vertex_from = 0; vertex_from < number_of_vertices; ++vertex_from) {
		for (int vertex_to = 0; vertex_to < number_of_vertices; ++vertex_to)	{
			int tmp;
			scanf("%d", &tmp);
			Adjacency_matrix[vertex_from][vertex_to] = (tmp < 0) ? kInfinity : tmp;
		}
	}
	Prim(number_of_vertices);
	return 0;
}