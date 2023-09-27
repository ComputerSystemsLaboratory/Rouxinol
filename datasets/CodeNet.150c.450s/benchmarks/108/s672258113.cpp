//さっさと済ませられるところはさっさと済ましてしまう．ただし注意深く
#include <cstdio>
#include <iostream>
#include <queue>
#define MAX_VERTEXES 100
#define ZERO 0
#define NIL -1

using namespace std;

//think easy make easy

int n;//num of vertexes(頂点)
int matrix_graph[MAX_VERTEXES+1+1][MAX_VERTEXES+1+1];//1オリジン
int min_path[MAX_VERTEXES+1+1];


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
		min_path[i] = NIL;
	}
	min_path[1] = 0;

	int s = 1;
	queue<int> q;
	q.push(1);
	while(!q.empty()){
		s = q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(min_path[i] == NIL && matrix_graph[s][i] == 1){
				q.push(i);
				min_path[i] = min_path[s] + 1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout <<i <<" " <<min_path[i] <<endl;
	}

	return 0;
}