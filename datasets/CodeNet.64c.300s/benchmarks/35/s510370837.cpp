#include <cstdio>
#include <iostream>
#define MAX_VERTEXES 100
#define ZERO 0

using namespace std;

//think easy make easy

int n;//num of vertexes(頂点)
int matrix_graph[MAX_VERTEXES+1+1][MAX_VERTEXES+1+1];//1オリジン

int main(){
	scanf("%d",&n);

	int v_num;
	int k;//v_numの出次数

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			matrix_graph[i][j] = ZERO;
		}
	}

	for(int i=0;i<n;i++){
		scanf("%d",&v_num);
		scanf("%d",&k);

		for(int j=0;j<k;j++){
			int v_num2;
			scanf("%d",&v_num2);
			matrix_graph[v_num][v_num2] = 1;
		}
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<n) printf("%d ",matrix_graph[i][j]);
			else printf("%d\n",matrix_graph[i][j]);
		}
	}

	return 0;
}