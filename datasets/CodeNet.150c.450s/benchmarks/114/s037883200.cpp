#include <iostream>
#define MAX 100
#define INF (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;

int M[MAX][MAX],n;
int prim(){
	int u,minv;
	int d[MAX],p[MAX],color[MAX];
	for(int i = 0;i < n;i++){
		d[i] = INF;
		p[i] = -1;
		color[i] = WHITE;
	}

	d[0] = 0;

	while(1){
		minv = INF;
		u = -1;
		for(int i = 0;i < n;i++){
			if(minv > d[i] && color[i] != BLACK){
				u = i;
				minv = d[i];
			}
		}
		if(u == -1)break;
		color[u] = BLACK;
		for(int v = 0;v < n;v++){
			if(color[v] != BLACK && M[u][v] != INF){
				if(d[v] > M[u][v]){
					d[v] = M[u][v];
					p[v] = u;
					color[v] = GRAY;
				}
			}
		}
	}
	int sum = 0;
	for(int i = 0;i < n;i++){
		if(p[i] != -1)sum += M[i][p[i]];
	}

	return sum;

}


int main(){
	int e;
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cin >> e;
			if(e == -1)M[i][j] = INF;
			else M[i][j] = e;
		}
	}

	cout << prim() <<endl;
	return 0;
}