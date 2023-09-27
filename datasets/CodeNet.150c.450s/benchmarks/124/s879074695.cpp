//さっさと済ませられるところはさっさと済ましてしまう．ただし注意深く
#include <cstdio>
#include <iostream>
#define MAX_VERTEXES 100
#define NIL -1
#define INFTY 20000000// >100*100000

using namespace std;

//think easy make easy

int n;//num of vertexes(頂点)
int matrix_graph[MAX_VERTEXES+1][MAX_VERTEXES+1];//0オリジン
bool vertex_set[MAX_VERTEXES+1];///0オリジン
int current_mincost[MAX_VERTEXES+1];//現時点での各頂点への最小コスト
bool candidate[MAX_VERTEXES+1];//次にvertex_setに加える頂点の候補
int new_vertex;

void findNextVertex(){
	int min_tmp=INFTY;
	int next_tmp = NIL;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i == new_vertex && vertex_set[j] == false){//わかりやすいプログラムほど処理もすくない.
				//無駄のないプログラムの方がわかりよい
				if(matrix_graph[i][j]+current_mincost[i] < current_mincost[j]
				   && matrix_graph[i][j] != NIL){
					   current_mincost[j]  = matrix_graph[i][j]+current_mincost[i];
					   candidate[j] = true;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(candidate[i] == true && current_mincost[i] < min_tmp){
			min_tmp = current_mincost[i];
			next_tmp = i;
		}
	}
	vertex_set[next_tmp] = true;
	candidate[next_tmp] = false;
	new_vertex = next_tmp;
}

int main(){
	scanf("%d",&n);

	int v_num;
	int k;//v_numの出次数

	for(int i=0;i<n;i++){
		for(int j=0;j<=n;j++){
			matrix_graph[i][j] = NIL;
		}
	}

	for(int i=0;i<n;i++){
		scanf("%d",&v_num);
		scanf("%d",&k);

		for(int j=0;j<k;j++){
			int v_num2;
			int cst;
			scanf("%d",&v_num2);
			scanf("%d",&cst);
			matrix_graph[v_num][v_num2] = cst;
		}
	}

	for(int i=0;i<n;i++){
		vertex_set[i] = false;
		current_mincost[i] = INFTY;
	}
	/*確認用
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j<n-1) printf("%d ",matrix_graph[i][j]);
			else printf("%d\n",matrix_graph[i][j]);
		}
	}
	*/

	for(int i=0;i<n;i++){
		candidate[i] = false;
	}

	vertex_set[0] = true;
	current_mincost[0] = 0;
	new_vertex = 0;

	for(int i=1;i<n;i++){
		//for(int j=0;j<n;j++){
			//cout <<" " <<vertex_set[j] ;
		//}
		//cout <<endl;
		findNextVertex();
	}


	for(int i=0;i<n;i++){
		cout <<i <<" " <<current_mincost[i] <<endl;
	}


	return 0;
}