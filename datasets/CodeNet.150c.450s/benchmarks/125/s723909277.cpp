#include<cstdio>
#define WHITE 0
#define GRAY  1
#define BLACK 2
#define MAX 100

void InitializeBoolMatrix(int nmbr_of_rows, int nmbr_of_columns, bool mtrx[][MAX]){
	for (int row = 0; row < nmbr_of_rows; ++row) {
		for (int column = 0; column < nmbr_of_columns; ++column)
			mtrx[row][column] = false;
	}
}

void ListToMatrix(int number_of_vertices, bool mtrx[][MAX]){
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

void BuildAdjacencyMatrix(int n, bool adjmtrx[][MAX]){
	InitializeBoolMatrix(n, n, adjmtrx);
	ListToMatrix(n, adjmtrx);
}

bool adjmtrx[MAX][MAX];
bool has_not_been_discovered_yet[MAX];
int time;
int discoveredtime[MAX];
int finishedtime[MAX];

void Dfs(int present_vertex, int n){
	int pv = present_vertex;
	has_not_been_discovered_yet[pv] = false;
	discoveredtime[pv] = ++time;
	for(int v = 0;v < n;v++){
		if(adjmtrx[pv][v] && has_not_been_discovered_yet[v]){
			Dfs(v, n);
		}
	}
	finishedtime[pv] = ++time;
}

void DfsInit(int n){
	for (int i = 0; i < n; ++i)
		has_not_been_discovered_yet[i] = true;
	time = 0;
}

int main(){
	int number_of_vertices;
	scanf("%d", &number_of_vertices);
	int n = number_of_vertices;
	BuildAdjacencyMatrix(n, adjmtrx);
	DfsInit(n);
	for (int vertex_i = 0; vertex_i < n; ++vertex_i){
		if(has_not_been_discovered_yet[vertex_i])
			Dfs(vertex_i, n);
	}
	for (int id = 0; id < n; ++id)
		printf("%d %d %d\n", id+1, discoveredtime[id], finishedtime[id]);
	return 0;
}