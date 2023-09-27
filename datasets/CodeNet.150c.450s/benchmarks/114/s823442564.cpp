#include <iostream>
#include <cstdio>
#define MAX_VERTEXES 100
#define NIL -1
#define ZERO 0
#define INFTY 2001//>2000
using namespace std;

//think easy make easy


int n;//num of vertexes(頂点)
int matrix_graph[MAX_VERTEXES+1+1][MAX_VERTEXES+1+1];//1オリジン
bool vertix_set[MAX_VERTEXES+1+1];
int mincst = 0;

void findMinEdge(){//次に加える辺を決定する関数
	int minval_tmp = INFTY;
	int next_vertex;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(vertix_set[i] == true && vertix_set[j] == false){
				if(matrix_graph[i][j] < minval_tmp && matrix_graph[i][j] != NIL){
					next_vertex = j;
					minval_tmp = matrix_graph[i][j];
				}
			}
		}
	}

	mincst += minval_tmp;
	vertix_set[next_vertex] = true;
}

int main(){
	scanf("%d",&n);


	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			matrix_graph[i][j] = ZERO;
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&matrix_graph[i][j]);
		}
	}

	/*確認用
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<n) printf("%d ",matrix_graph[i][j]);
			else printf("%d\n",matrix_graph[i][j]);
		}
	}
	*/

	int minval_tmp = INFTY;
	int next_vertex1;
	int next_vertex2;

	for(int i=1;i<=n;i++){
		vertix_set[i] = false;
	}

	for(int i=1;i<=n;i++){//しつこい
		for(int j=1;j<=n;j++){
			if(matrix_graph[i][j] < minval_tmp && matrix_graph[i][j] != NIL){
				minval_tmp = matrix_graph[i][j];
				next_vertex1 = i;
				next_vertex2 = j;
			}
		}
	}
	vertix_set[next_vertex1] = true;
	vertix_set[next_vertex2] = true;
	mincst += minval_tmp;

	

	for(int i=1;i<n-1;i++){
		findMinEdge();
	}
	cout <<mincst <<endl;

	return 0;
}