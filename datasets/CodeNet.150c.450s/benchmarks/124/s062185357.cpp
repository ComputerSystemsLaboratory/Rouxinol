#include<iostream>
using namespace std;
#define N 105
#define INF 1<<21
int n;
int a[N][N];
int d[N],p[N];
int color[N];
void dijksla(){
	int minv;
	for (int i = 0;i < n;i++){
		d[i] = INF;
		color[i] = 0;
	}
	d[0] = 0;
	while (1){
		minv = INF;
		int u = -1;
		for (int i = 0;i < n;i++){
			if (minv > d[i] && color[i] != 1){
				u = i;
				minv = d[i];
			}
		}
		if (u == -1) break;
		color[u] = 1;
		for (int v = 0;v < n;v++){
			if (color[v] == 0 && a[u][v] != INF){
				if (d[v] > d[u] + a[u][v]){
					d[v] = d[u] + a[u][v];
				}
			}
		}
	}
	for (int i = 0;i < n;i++){
		if (d[i] == INF){
			cout << i << " -1" << endl;
		}
		else{
			cout << i << " " << d[i] << endl;
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			a[i][j] = INF;
		}
	} 
	int x,m,y,q;
	for (int i = 0;i < n ;i++){
		cin >> x >> m;
		for (int j = 0;j < m;j++){
			cin >> y >> q;
			a[x][y] = q;
		}
	}
	dijksla();
	return 0;
 } 
