#include<iostream>
using namespace std;
#define N 105
#define INF 1<<21
int n;
int a[N][N];
int d[N],p[N],color[N];              //0.未访问的节点   1.正在访问的节点  2.已经访问过的节点 
int prim(){
	int u ,minv;
	for (int i = 0;i < n;i++){
		d[i] = INF;
		p[i] = -1;
		color[i] = 0; 
	}
	d[0] = 0;
	while (1){
		minv = INF;
		u = -1;
		for (int i = 0;i < n;i++){
			if (minv > d[i] && color[i] != 2){
				u = i;
				minv = d[i]; 
			}
		}
		if ( u == -1) break;
		color[u] = 2;
		for (int v = 0;v < n;v++){
			if (color[v] != 2 && a[u][v] != INF){
				if (d[v] > a[u][v]){
					d[v] = a[u][v];
					p[v] = u;
					color[v] = 1;
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0;i < n;i ++){
		if (p[i] != -1){
			sum = sum + a[i][p[i]];
		}
	}
	return sum;
}

int main()
{
	cin >> n;
	int x;
	for (int i = 0;i < n;i++){
		for (int j = 0;j < n;j++){
			cin >> x;
			if (x == -1){
				a[i][j] = INF;
			}
			else{
				a[i][j] = x;
			}
		}
	}
	cout << prim() << endl;
	return 0;
}
