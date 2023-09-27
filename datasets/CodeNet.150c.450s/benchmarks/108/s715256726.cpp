#include<cstdio>
#include<queue>
using namespace std;
#define INFTY -1
#define MAX 100

void InitializeBoolMatrix(int nmbr_of_rows, int nmbr_of_columns, bool mtrx[][MAX]) {
	for (int row = 0; row < nmbr_of_rows; ++row) {
		for (int column = 0; column < nmbr_of_columns; ++column)
			mtrx[row][column] = false;
	}
}

void ListToMatrix(int number_of_vertices, bool mtrx[][MAX]) {
	int vertex_from, vertex_to, degree_out;	
	for (int vertex_i = 0; vertex_i < number_of_vertices; ++vertex_i) {
		scanf("%d %d", &vertex_from, &degree_out);
		vertex_from--; //0?????????????????????
		for (int vertex_out_i = 0; vertex_out_i < degree_out; ++vertex_out_i) {
			scanf("%d", &vertex_to);
			vertex_to--; //0?????????????????????
			mtrx[vertex_from][vertex_to] = true;
		}
	}
}

void BuildAdjacencyMatrix(int n, bool adjmtrx[][MAX]) {
	InitializeBoolMatrix(n, n, adjmtrx);
	ListToMatrix(n, adjmtrx);
}

void Bfs(int n, int depth[], bool adjmtrx[][MAX]) {
	bool yet_to_be_visited[n];
	for (int i = 0; i < n; ++i) {
		yet_to_be_visited[i] = true;
		depth[i] = INFTY;
	}

	depth[0] = 0;
	queue<int> next_vertex_to_visit;
	next_vertex_to_visit.push(0);

	while( !next_vertex_to_visit.empty() ) {
		int u = next_vertex_to_visit.front();
		next_vertex_to_visit.pop();
		for (int v = 0; v < n; ++v)	{
			if( adjmtrx[u][v] && yet_to_be_visited[v]){
				yet_to_be_visited[v] = false;
				depth[v] = depth[u] + 1;
				next_vertex_to_visit.push(v);
			}
		}
		yet_to_be_visited[u] = false;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	bool adjmtrx[MAX][MAX];
	BuildAdjacencyMatrix(n, adjmtrx);
	int depth[n];
	Bfs(n, depth, adjmtrx);
	for (int id = 0; id < n; ++id)
		printf("%d %d\n", id + 1, depth[id]);
	return 0;
}