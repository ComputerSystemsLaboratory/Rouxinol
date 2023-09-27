#include<cstdio>
static const int kMaxVertices = 100;
static const int kInfinity = 100010;
static int Adjacency_matrix[kMaxVertices][kMaxVertices];

void InitializeCostMatrix(int nmbr_of_rows, int nmbr_of_columns){
	for (int row = 0; row < nmbr_of_rows; ++row) {
		for (int column = 0; column < nmbr_of_columns; ++column)
			Adjacency_matrix[row][column] = kInfinity;
	}
}

void Dijkstra(int n){
	bool has_not_been_discovered[kMaxVertices];
	int lowest_cost_route[kMaxVertices];
	int parent[kMaxVertices];
	for (int i = 0; i < n; ++i)	{
		has_not_been_discovered[i] = true;
		lowest_cost_route[i] = kInfinity;
	}
	lowest_cost_route[0] = 0;
	parent[0] = -1;

	while(true) {
		int mincost = kInfinity;
		int vertex_to_add;
		for (int i = 0; i < n; ++i)	{
			if(has_not_been_discovered[i] && lowest_cost_route[i] < mincost){
				mincost = lowest_cost_route[i];
				vertex_to_add = i;
			}
		}

		if(mincost == kInfinity)
			break;

		has_not_been_discovered[vertex_to_add] = false;
		int vertex_added = vertex_to_add;

		for (int i = 0; i < n; ++i)	{
			if(has_not_been_discovered[i] && lowest_cost_route[vertex_added] + Adjacency_matrix[vertex_added][i] < lowest_cost_route[i]) {
				lowest_cost_route[i] = lowest_cost_route[vertex_added] + Adjacency_matrix[vertex_added][i];
				parent[i] = vertex_added;
			}
		}
	}
	for (int i = 0; i < n; ++i)
		printf("%d %d\n", i, lowest_cost_route[i]);
}

int main() {
	int nmbr_of_vertices;
	scanf("%d", &nmbr_of_vertices);
	InitializeCostMatrix(nmbr_of_vertices, nmbr_of_vertices);
	for (int vertex_from_i = 0; vertex_from_i < nmbr_of_vertices; ++vertex_from_i) {
		int vertex_from_id, degree_out;
		scanf("%d %d", &vertex_from_id, &degree_out);
		for (int vertex_to_i = 0; vertex_to_i < degree_out; ++vertex_to_i) {
			int vertex_to_id, cost;
			scanf("%d %d", &vertex_to_id, &cost);
			Adjacency_matrix[vertex_from_id][vertex_to_id] = cost;
		}
	}
	Dijkstra(nmbr_of_vertices);
	return 0;
}