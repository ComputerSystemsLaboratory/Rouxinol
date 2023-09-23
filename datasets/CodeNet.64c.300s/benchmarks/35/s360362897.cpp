#include<cstdio>

void InitializeIntegerMatrix(int nmbr_of_rows, int nmbr_of_columns, int m[][100]){
	for (int row = 0; row < nmbr_of_rows; ++row) {
		for (int column = 0; column < nmbr_of_columns; ++column)
			m[row][column] = 0;
	}
}

void ListToMatrix(int number_of_vertices, int adjmtr[][100]){
	int vertex_from, vertex_to, degree_out;	
	for (int vertex_i = 0; vertex_i < number_of_vertices; ++vertex_i) {
		scanf("%d %d", &vertex_from, &degree_out);
		vertex_from--; //0?????????????????????
		for (int vertex_out_i = 0; vertex_out_i < degree_out; ++vertex_out_i) {
			scanf("%d", &vertex_to);
			vertex_to--; //0?????????????????????
			adjmtr[vertex_from][vertex_to] = 1;
		}
	}
}

void PrintIntegerMatrix(int nmbr_of_rows, int nmbr_of_columns, int mtr[][100]){
	for (int row = 0; row < nmbr_of_rows; ++row) {
		for (int column = 0; column < nmbr_of_rows; ++column) {
			if(column > 0)
				printf(" ");
			printf("%d", mtr[row][column]);
		}
		printf("\n");
	}
}

int main(void){
	int number_of_vertices;
	scanf("%d", &number_of_vertices);
	int n = number_of_vertices;
	int adjmtr[100][100];
	InitializeIntegerMatrix(n, n, adjmtr);
	ListToMatrix(n, adjmtr);
	PrintIntegerMatrix(n, n, adjmtr);
	return 0;
}