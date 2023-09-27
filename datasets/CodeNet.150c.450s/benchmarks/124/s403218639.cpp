#include<iostream>
using namespace std;
static const int N = 100;
static const int INFTY = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n,M[N][N],d[N];

void dijkstra(int s){
	int color[N],p[N];
	for(int i=0;i<n;i++){
		color[i] = WHITE;
		d[i] = INFTY;
	}
	d[s] = 0;
	p[s] = -1;

	int u;
	while(1){
		int minv = INFTY;
		for(int i=0;i<n;i++){
			if(color[i]!=BLACK&&d[i]!=INFTY){
				if(d[i] < minv){
					minv = d[i];
					u = i;
				}
			}
		}
		if(minv == INFTY)break;
		color[u] = BLACK;
		for(int i=0;i<n;i++){
			if(color[i]!=BLACK&&M[u][i]!=INFTY){
				if(d[u]+M[u][i] < d[i]){
					d[i] = d[u]+M[u][i];
					p[i] = u;
				}
			}
		}
	}
}

int main(){
	cin >> n;
	int e,u,k,c,v;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			M[i][j] = INFTY;
		}
	}
	for(int i=0;i<n;i++){
		cin >> u >> k;
		for(int j=0;j<k;j++){
			cin >> v >> c;
			M[i][v] = c;
		}
	}
	dijkstra(0);
	for(int i=0;i<n;i++){
		cout << i << " " << d[i] << endl;
	}
	return 0;
}

