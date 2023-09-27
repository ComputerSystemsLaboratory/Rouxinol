#include<iostream>
using namespace std;
#include<queue>
queue<int>mp;
#define N 105
#define INF 1<<21
int a[N][N];
int d[N];
int n;

void bfs(int s){
	mp.push(s);
	for (int i = 1;i <= n;i++){
		d[i] = INF;
	}
	d[s] = 0;
	int u;
	while (!mp.empty()){
		u = mp.front();
		mp.pop();
		for (int v = 1;v <= n;v++){
			if (a[u][v] == 0) continue;
			if (d[v] != INF) continue;
			d[v] = d[u] + 1;
			mp.push(v);
		}
	}
	for (int i = 1 ;i <= n;i++){
		if (d[i] == INF){
			cout << i << " " << "-1" << endl; 
		}
		else{
			cout << i << " " << d[i] << endl;
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			a[i][j] = 0;
		}
	}
	int x,m,y;
	for (int i = 1;i <= n;i++){
		cin >> x >> m;
		while (m--){
			cin >> y;
			a[x][y] = 1;
		}
	}
	bfs(1);
	return 0;
}
