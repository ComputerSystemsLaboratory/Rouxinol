#include <cstdio>
#include <iostream>
#include <stack>
#define MAX_VERTEXES 100
#define ZERO 0
#define NIL -1

using namespace std;

//think easy make easy

int n;//num of vertexes(頂点)
int matrix_graph[MAX_VERTEXES+1+1][MAX_VERTEXES+1+1];//1オリジン

stack<int> stk;
bool discovered[MAX_VERTEXES+1+1];//1オリジン
int discovered_time[MAX_VERTEXES+1+1];
int completed_time[MAX_VERTEXES+1+1];
int current_time = 0;

void DFS(int v){
	int v_tmp;
	for(int i=1;i<=n;i++){
		//if(i == v);
		if(matrix_graph[v][i] == 1 && !discovered[i]){
			current_time++;
			discovered_time[i] = current_time;
			stk.push(v);
			matrix_graph[v][i] == 0;
			discovered[i] = true;
			DFS(i);
		}else if(matrix_graph[v][i] == 1 && discovered[i]){
			matrix_graph[v][i] == 0;
		}

		if(i == n){
			current_time++;
			completed_time[v] = current_time;
			//if(!stk.empty())
			//{
				//cout <<stk.top() <<endl;
				//v_tmp = stk.top();
				//stk.pop();
				//DFS(v_tmp);
			//}
		}
	}
}

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
		discovered[i] = false;
		discovered_time[i] = NIL;
		completed_time[i] = NIL;
	}

	for(int i=1;i<=n;i++){
	//	cout <<"c" <<current_time <<" ";
		//current_time++;//ここではなく
		if(!discovered[i]){
			current_time++;//ココ
			//cout <<i <<endl;
			discovered[i] = true;
			discovered_time[i] = current_time;
			DFS(i);
		}
	}

	for(int i=1;i<=n;i++){
		cout <<i <<" " <<discovered_time[i] <<" " <<completed_time[i] <<endl;
	}

	return 0;
}